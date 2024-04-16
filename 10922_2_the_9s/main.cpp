#include <iostream>
using namespace std;

int main(){
	string s = "";
	while(cin >> s){
		if(s == "0")
			break;
		int n = 0, isMulNine = 1, nineDegree = 0;
		string t = s;
		do{
			nineDegree++;
			n = 0;
			for(int i = 0; i < t.size(); i++){
				n += t[i] - '0';
			}
			t = to_string(n);
		}while(n > 9 && n%9 == 0);
		
		if(n%9 != 0){
			isMulNine = 0;
		}
		if(isMulNine){
			cout << s << " is a multiple of 9 and has 9-degree " << nineDegree << ".\n";
		}
		else{
			cout << s << " is not a multiple of 9.\n";
		}
	}
}