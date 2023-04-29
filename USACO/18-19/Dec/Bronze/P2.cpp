#include <bits/stdc++.h>
using namespace std;

int N, schedule[1001];

int main() {
	ifstream cin("blist.in");
	ofstream cout("blist.out");
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for(int i=0; i<N ; ++i) {
		int s, t, b;
		cin >> s >> t >> b;
		while(s<=t) {
			schedule[s]+=b;
			++s;
		}
	}
	
	int max=0;
	for(int i=1; i<1001; ++i) {
		if(schedule[i]>max)
			max=schedule[i];
	}
	cout << max;
	return 0;
}