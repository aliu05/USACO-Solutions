#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, ans;

int main() {
	ifstream cin("paint.in");
	ofstream cout("paint.out");
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b >> c >> d;
	ans=0;
	for(int i=0; i<=100; ++i) {
		if(i>a&&i<=b || i>c&&i<=d)
			++ans;
	}
	cout << ans;
	return 0;
}