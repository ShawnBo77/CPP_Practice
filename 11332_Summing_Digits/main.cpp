#include <iostream>

using namespace std;

int main(){
	long long n = 0, sum = 0;
	while(cin >> sum){
		if(sum == 0)
			break;
		while(sum > 9){
			n = sum;
			sum = 0;
			while(n != 0){
				sum += n%10;
				n /= 10;
			}
		}
		cout << sum << "\n";
	}
}