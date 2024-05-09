#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

bool sortAlgo(pair<int, int> a, pair<int, int> b){
	if(a.second > b.second || (a.second == b.second && a.first < b.first))
		return false;
	return true;
}

int main(){
	string s;
	int c = 0;
	while(getline(cin, s)){
		if(c == 0){
			c++;
		}
		else{
			cout << "\n";
		}
		map<int, int> mp;
		vector<pair<int, int>> v;
		for(int i = 0; i < s.size(); i++){
			mp[(int)s[i]]++;
		}
		for(auto i : mp){
			v.push_back(make_pair(i.first, i.second));
		}
		sort(v.begin(), v.end(), sortAlgo);
		for(auto i : v){
			cout << i.first << " " << i.second << "\n";
		}
	}
}