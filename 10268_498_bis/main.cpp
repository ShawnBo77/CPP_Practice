#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	long long x = 0;
	while(cin >> x){
		long long ans = 0, i = 0;
		string s = "";
		stringstream ss;
		ss.clear();
		ss.str("");
		vector<int> terms;
		terms.clear();
		
		cin.ignore();
		getline(cin, s);
		ss << s;
		while(ss >> i){
			terms.push_back(i);
		}
		for(i = 0; i < terms.size(); i++){
			ans += terms[i]*(terms.size()-i-1)*pow(x, (terms.size()-i-2));
		}
		cout << ans << "\n";
	}
}