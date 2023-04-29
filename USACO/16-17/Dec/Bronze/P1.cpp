#include <bits/stdc++.h>
using namespace std;

int rec1[4], rec2[4], hiX, hiY, loX, loY;

int main() {
    ifstream cin("square.in");
    ofstream cout("square.out");
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0; i<4; ++i)
        cin >> rec1[i];
    for(int i=0; i<4; ++i)
        cin >> rec2[i];

    hiX=max(rec1[2], rec2[2]);
    hiY=max(rec1[3], rec2[3]);
    loX=min(rec1[0], rec2[0]);
    loY=min(rec1[1], rec2[1]);
    cout << max(pow((hiX-loX), 2), pow((hiY-loY), 2));
    return 0;
}