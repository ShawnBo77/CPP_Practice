#include <iostream>
#include <string>
using namespace std;

int main(){
	string n; //可達1000 digits，用string讀入
	while(cin >> n){
		if(n == "0") continue;
		int even = 0, odd = 0;
		for(int i = 0; i < n.size(); i++){
			if(i%2 == 0)
				even += n[i] - '0'; //把字串轉數字
			else
				odd += n[i] - '0'; //把字串轉數字
		}
		if((even - odd)%11 ==0)
			cout << n << " is a multiple of 11.\n";
		else
			cout << n << " is not a multiple of 11.\n";
	}
}