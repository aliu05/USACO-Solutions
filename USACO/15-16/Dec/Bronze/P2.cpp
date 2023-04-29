#include <bits/stdc++.h>
using namespace std;

int N, M, limit[100], speed[100], ans, p, units, val;

int main() {
	ifstream cin("speeding.in");
	ofstream cout("speeding.out");
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	p=0;
	for(int i=0; i<N; ++i) {
		cin >> units >> val;
		while(units--) {
			limit[p]=val;
			++p;
		}
	}
	p=0;
	for(int i=0; i<M; ++i) {
		cin >> units >> val;
		while(units--) {
			speed[p]=val;
			++p;
		}
	}
	
	ans=0;
	for(int i=0; i<100; ++i) {
		int over=speed[i]-limit[i];
		if(over>ans)
			ans=over;
	}
	cout << ans;
	return 0;
}