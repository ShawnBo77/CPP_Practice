#include <iostream>
using namespace std;

int main(){
	int n = 0;
	while(cin >> n){
		int count = n;
		n = n+1;
		while(n >= 3){
			count += n/3;
			n = n%3 + n/3;
		}
		cout << count << "\n";
	}
}