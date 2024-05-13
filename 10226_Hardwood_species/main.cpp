#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main(){
	int n = 0, c = 0;
	string s = "";
	cin >> n;
	c = n;
	cin.ignore();
	getline(cin, s);
	while(n--){
		if(c-1 != n)
			cout << "\n";
		int total = 0;
		map<string, int> data;
		data.clear();
		while(getline(cin, s) && s != ""){
			data[s]++;
			total++;
		}
		for(auto i : data){
			cout << i.first << " " << fixed << setprecision(4) << (double)i.second*100/total << "\n";
		}
	}
}