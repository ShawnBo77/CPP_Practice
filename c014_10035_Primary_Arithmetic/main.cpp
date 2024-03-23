#include <iostream>
using namespace std;

int main(){
	int x, y;
	while(cin >> x >> y){
		if(x==0 && y==0){
			break;
		}
		int c = 0, n = 1;
		while(x/n!=0 || y/n!=0){ //不是&&
			n = n*10;
			c = c + (x%n+y%n)/n;
		}
		if(c == 0)
			cout << "No carry operation.\n";
		else if(c == 1)
			cout << "1 carry operation.\n";
		else
			cout << c << " carry operations.\n";
	}
	return 0;
}