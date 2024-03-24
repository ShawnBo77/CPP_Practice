#include <iostream>
#include <map>
#include <sstream> //for stringstream
#include <vector>
using namespace std;

int main(){
	int n;
	string s;
	stringstream ss;
	vector<string> strings;
	cin >> n;
	cin.ignore(); //cin會停在換行符號前，讓下面getline出錯，要把換行符號去掉
	map<string, int> conquests;
	while(n--){
		getline(cin ,s);
		ss << s;
		while(ss >> s){
			strings.push_back(s);
		}
		conquests[strings[0]]++;
		strings.clear(); //清空vector
		ss.clear(); //清空stringstream
		ss.str("");
	}
	for(auto i:conquests){
		cout << i.first << " " << i.second << "\n";
	}
	return 0;
}