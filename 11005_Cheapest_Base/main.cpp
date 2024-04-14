#include <iostream>
#include <vector>
#include <map>
using namespace std;

int baseCost(int n, int base, map<int,int> charCost){
	int cost = 0;
	while(n != 0){
		cost += charCost[n%base];
		n /= base;
	}
	return cost;
}

vector<int> basesOfMinCost(int n, map<int,int> charCost){
	vector<int> ans, baseCosts;
	int minCost = 0;
	for(int i = 2; i < 37; i++){
		baseCosts.push_back(baseCost(n, i, charCost));
		if(i == 2 || minCost > baseCosts.back())
			minCost = baseCosts.back();
	}
	for(int i = 0; i < 35; i++){
		if(baseCosts[i] == minCost)
			ans.push_back(i+2);
	}
	return ans;
}

int main(){
	int c = 0;
	
	cin >> c;
	for(int i = 1; i <= c; i++){
		int cost = 0, q = 0;
		map<int, int> charCost;
		vector<int> bases;
		for(int j = 0; j < 36; j++){
			cin >> cost;
			charCost[j] = cost;
		}
		
		cout << "Case " << i << ":\n";
		
		cin >> q;
		while(q--){
			int n = 0;
			cin >> n;
			bases = basesOfMinCost(n, charCost);
			cout << "Cheapest base(s) for number " << n << ":";
			for(auto j : bases)
				cout << " " << j;
			cout << "\n";
		}
		if(i != c)
			cout << "\n";
	}
}