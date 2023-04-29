#include <bits/stdc++.h>
using namespace std;

pair<int, int> bucket[3];

int main() {
	ifstream cin("mixmilk.in");
	ofstream cout("mixmilk.out");
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=0; i<3; ++i)
		cin >> bucket[i].first >> bucket[i].second;
	
	for(int i=0; i<100; ++i) {
		int milk=bucket[i%3].second;
		bucket[i%3].second=0;
		bucket[(i+1)%3].second+=milk;
		bucket[i%3].second+=max(0, bucket[(i+1)%3].second-bucket[(i+1)%3].first);
		if(bucket[(i+1)%3].second>bucket[(i+1)%3].first)
			bucket[(i+1)%3].second=bucket[(i+1)%3].first;
	}
	
	for(pair<int, int> pi : bucket)
		cout << pi.second << "\n";
	return 0;
}