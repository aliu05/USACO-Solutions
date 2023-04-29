#include <bits/stdc++.h>
using namespace std;

const int mxN=1e5;
int N, connect[mxN+1], ans;
pair<int, int> adj[mxN-1];

int main() {
    ifstream cin("planting.in");
    ofstream cout("planting.out");
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N-1; ++i)
        cin >> adj[i].first >> adj[i].second;

    for(int i=0; i<N-1; ++i) {
        ++connect[adj[i].first];
        ++connect[adj[i].second];
    }
    for(int i=1; i<=N; ++i) {
        if(connect[i]>ans)
            ans=connect[i];
    }
    cout << ans+1;
    return 0;
}