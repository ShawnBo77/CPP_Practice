#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool sortAlgo(pair<char, int> x, pair<char, int> y){
	if(x.second == y.second && x.first > y.first)
		return false;
 	else if(x.second < y.second)
 		return false;
 	else
 		return true;
 }

int main(){
	int n = 0;
	string s = "";
	map<char, int> mp;
	vector<pair<char, int>> v;
	
	cin >> n;
	getline(cin, s); //把cin後剩的空白或換行符號讀掉
	while(n--){
		getline(cin, s);
		for(int i = 0; i < s.size(); i++){
			if(!isalpha(s[i])){
				continue;
			}
			mp[toupper(s[i])]++; //轉大寫後加入mp
		}
	}
	for(auto i:mp){
		v.push_back(make_pair(i.first, i.second));
	}
	sort(v.begin(), v.end(), sortAlgo);
	for(auto i:v){
		cout << i.first << " " << i.second << endl;
	}
}