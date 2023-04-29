#include <bits/stdc++.h>
using namespace std;

int N, bales[100];

int main() {
//	ifstream cin("promote.in");
//	ofstream cout("promote.out");
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for(int i=0; i<N; ++i)
		cin >> bales[i];
	
	sort(bales, bales+N);
	
	return 0;
}