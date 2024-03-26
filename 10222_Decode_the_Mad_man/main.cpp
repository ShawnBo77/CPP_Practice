#include <iostream>
using namespace std;

int main(){
	string s = {"~!@#$%^&*()_+`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"}, input="";
	while(getline(cin, input)){
		for(int i = 0; i < input.size(); i++){
			if(input[i] == ' '){
				cout << " ";
			}
			//else if(input[i] == 'd'){
			//	cout << "a";
			//}
			else{
				for(int j = 0; j < s.size(); j++){
					if(tolower(input[i]) == s[j])
						cout << s[j-2];
				}
			}
		}
		cout << "\n";
	}	
}