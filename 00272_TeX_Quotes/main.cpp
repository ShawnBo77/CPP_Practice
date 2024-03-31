#include <iostream>
using namespace std;

int main(){
	string s = "";
	int c = 0;
	while(getline(cin, s)){
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '"'){
				c++;
				if(c%2 == 1)
					cout << "``";
				else
					cout << "''";
			}
			else
				cout << s[i];
		}
		cout << "\n";
	}
}