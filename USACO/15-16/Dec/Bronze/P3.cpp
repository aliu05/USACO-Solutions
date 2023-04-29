#include <bits/stdc++.h>
using namespace std;

int N, M, D, S, p, sick[51], ans;
vector<pair<int, int>> friends[51];
bool possibleBad[51];

int drinkers(int milk) {
	int count=0;
	for(int i=1; i<=N; ++i) {
		for(pair<int, int> pi : friends[i]) {
			if(pi.first==milk)
				++count;
		}
	}
	return count;
}

int main() {
//	ifstream cin("badmilk.in");
//	ofstream cout("badmilk.out");
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M >> D >> S;
	for(int i=0; i<D; ++i) {
		pair<int, int> inp;
		cin >> p >> inp.first >> inp.second;
		friends[p].push_back(inp);
	}
	for(int i=0; i<S; ++i)
		cin >> p >> sick[p];
	
	for(int i=1; i<=M; ++i) {
		bool maybeBad=true;
		for(int j=1; j<N; ++j) {
			if(sick[j]>0) {
				bool milkDrank=false;
				for(pair<int, int> pi : friends[j]) {
					if(pi.first==i) {
						milkDrank=true;
						if(sick[j]<=pi.second)
							maybeBad=false;
					}
				}
				if(!milkDrank)
					maybeBad=false;
			}
		}
		possibleBad[i]=maybeBad;
	}

	ans=0;
	for(int i=1; i<=N; ++i) {
		if(possibleBad[i] && drinkers(i)>ans)
			ans=drinkers(i);
	}
	cout << ans;
}
//find all milks which could be the bad one -> ans is the most friends that drank any of the possible "bad milks"
/*
10 1 20 5
5 1 9
8 1 3
3 1 2
9 1 1
6 1 4
6 1 9
7 1 1
3 1 1
8 1 10
1 1 2
5 1 7
5 1 5
9 1 4
5 1 6
2 1 1
8 1 1
2 1 1
6 1 2
4 1 3
10 1 3
2 4
7 6
10 9
3 9
1 7
*/