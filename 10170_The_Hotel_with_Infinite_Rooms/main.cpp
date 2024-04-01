#include <iostream>
using namespace std;

int main(){
	int S = 0;
	long long D = 0;
	while(cin >> S >> D){
		long long sum = 0, k = 0;
		for(int i = S; sum < D; i++){
			sum += i;
			k = i;
		}
		cout << k << "\n";
	}
}