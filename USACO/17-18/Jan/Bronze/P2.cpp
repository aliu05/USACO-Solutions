#include <bits/stdc++.h>
using namespace std;

int N, interval[1000], ans, minLoss;
pair<int, int> guards[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin("lifeguards.in");
    ofstream cout("lifeguards.out");
    cin >> N;
    for(int i=0; i<N; ++i)
        cin >> guards[i].first >> guards[i].second;
    
    for(int i=0; i<N; ++i) {
        for(int j=guards[i].first; j<guards[i].second; ++j)
            ++interval[j];
    }
    minLoss=1000;
    for(int i=0; i<1000; ++i) {
        if(interval[i]>0)
            ++ans;
    }
    for(int i=0; i<N; ++i) {
        int loss=0;
        for(int j=guards[i].first; j<guards[i].second; ++j) {
            if(interval[j]==1)
                ++loss;
        }
        if (loss<minLoss)
            minLoss=loss;
    }
    ans-=minLoss;
    cout << ans;
    return 0;
}