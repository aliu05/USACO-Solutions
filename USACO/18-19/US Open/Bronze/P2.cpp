#include <bits/stdc++.h>
using namespace std;

int N, ans;
pair<int, int> adj[99];
bool noOut[101];

int main() {
    ifstream cin("factory.in");
    ofstream cout("factory.out");
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N-1; ++i)
        cin >> adj[i].first >> adj[i].second;

    memset(noOut, true, sizeof noOut);
    for(int i=1; i<=N; ++i) {
        for(int j=0; j<N; ++j) {
            if(adj[j].first==i) {
                noOut[i]=false;
                break;
            }
        }
    }
    for(int i=1; i<=N; ++i) {
        if(noOut[i]) {
            if(ans==0)
                ans=i;
            else {
                cout << -1;
                return 0;
            }
        }
    }
    if(ans>0)
        cout << ans;
    else
        cout << -1;
    return 0;
}