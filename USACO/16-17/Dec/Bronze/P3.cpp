#include <bits/stdc++.h>
using namespace std;

int M, N, K;
char inp[10][10], out[100][100];

int main() {
    ifstream cin("cowsignal.in");
    ofstream cout("cowsignal.out");
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> M >> N >> K;
    for(int i=0; i<M; ++i) {
        for(int j=0; j<N; ++j)
            cin >> inp[i][j];
    }

    for(int i=0; i<M; ++i) {
        for(int j=0; j<N; ++j) {
            for(int i1=0; i1<K; ++i1) {
                for(int j1=0; j1<K; ++j1)
                    out[i*K+i1][j*K+j1]=inp[i][j];
            }
        }
    }

    for(int i=0; i<M*K; i++) {
        for(int j=0; j<N*K; ++j)
            cout << out[i][j];
        cout << "\n";
    }
    return 0;
}