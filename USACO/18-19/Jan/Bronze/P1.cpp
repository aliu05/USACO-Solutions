#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int N, game[100][3], ans;

int main() {
	ifstream cin("shell.in");
	ofstream cout("shell.out");
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for(int i=0; i<N; ++i)
		cin >> game[i][0] >> game[i][1] >> game[i][2];
	for(int i=1; i<=3; ++i) {
		bool sim[4]{};
		sim[i]=true;
		int loc=0;
		for(int j=0; j<N; ++j) {
			swap(sim[game[j][0]], sim[game[j][1]]);
			if(sim[game[j][2]])
				++loc;
		}
		if(loc>ans)
			ans=loc;
	}
	cout << ans;
	return 0;
}
