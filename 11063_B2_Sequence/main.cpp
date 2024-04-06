#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	int n = 0, t = 0, count = 0;
	vector<int> v;
	map<int, int> mp;
	while(cin >> n){
		count++;
		int isB2 = 1;
		while(n--){
			cin >> t;
			v.push_back(t);
		}
		for(int i = 0; i < v.size()-1; i++){
			for(int j = i+1; j < v.size(); j++){
				mp[v[i]+v[j]]++;
			}
		}
		for(auto i : mp){
			if(i.second != 1){
				isB2 = 0;
				break;
			}	
		}
		if(isB2)
			cout << "Case #" << count << ": It is a B2-Sequence.\n\n";
		else
			cout << "Case #" << count << ": It is not a B2-Sequence.\n\n";
	}
}