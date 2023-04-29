#include <bits/stdc++.h>
using namespace std;

const int mxN=100;
int N, ans[26];
pair<string, string> words[mxN];

int main() {
    ifstream cin("blocks.in");
    ofstream cout("blocks.out");
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; ++i)
        cin >> words[i].first >> words[i].second;

    for(int i=0; i<N; ++i) {
        int w1[26], w2[26], total[26];
        memset(w1, 0, sizeof w1);
        memset(w2, 0, sizeof w2);
        for(char c : words[i].first)
            ++w1[c-'a'];
        for(char c : words[i].second)
            ++w2[c-'a'];
        for(int i=0; i<26; ++i)
            total[i]=max(w1[i], w2[i]);
        for(int i=0; i<26; ++i)
            ans[i]+=total[i];
    }
    for(int i=0; i<26; ++i)
        cout << ans[i] << "\n";
    return 0;
}