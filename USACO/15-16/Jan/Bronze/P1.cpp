#include <bits/stdc++.h>
using namespace std;

int diff[4], promotion[3];
pair<int, int> sec[4];

int main() {
	ifstream cin("promote.in");
	ofstream cout("promote.out");
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=0; i<4; ++i)
		cin >> sec[i].first >> sec[i].second;
	
	for(int i=0; i<4; ++i)
		diff[i]=sec[i].second-sec[i].first;
	for(int i=3; i>=1; --i) {
		diff[i-1]+=diff[i];
		promotion[i-1]=diff[i];
	}
	for(int n : promotion)
		cout << n << "\n";
	return 0;
}