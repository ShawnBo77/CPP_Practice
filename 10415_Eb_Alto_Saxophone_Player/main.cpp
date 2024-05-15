#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	cin.ignore();
	map<char, vector<int>> mp;
	mp['c'] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    mp['d'] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['e'] = {0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['f'] = {0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['g'] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['a'] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['b'] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    mp['C'] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['D'] = {1, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['E'] = {1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['F'] = {1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['G'] = {1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['A'] = {1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['B'] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
	while(n--){
		string s;
		getline(cin, s);
		int fingerPress[10] = {0};
		for(int i = 0; i < s.size(); i++){
			if(i == 0){
				for(int j = 0; j < 10; j++){
					if(mp[s[i]][j] == 1)
						fingerPress[j]++;
				}
			}
			else{
				for(int j = 0; j < 10; j++){
					if(mp[s[i]][j] == 1 && mp[s[i-1]][j] != 1)
						fingerPress[j]++;
				}
			}
		}
		cout << fingerPress[0];
		for(int i = 1; i < (sizeof(fingerPress)/sizeof(*fingerPress)); i++){
			cout << " " << fingerPress[i];
		}
		cout << "\n";
	}
}