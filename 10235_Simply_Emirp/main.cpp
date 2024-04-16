#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int primeCheck(int n){
	if(n <= 1)
		return 0;
	if(n == 2)
		return 1;
	for(int i = 2; i < n; i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n = 0;
	while(cin >> n){
		int isPrime = 0, isEmirp = 0;
		isPrime = primeCheck(n);
		if(isPrime){
			stringstream ss;
			string s;
			int t = 0;
			ss << n;
			ss >> s;
			reverse(s.begin(), s.end());
			ss.clear();
			ss.str("");
			ss << s;
			ss >> t;
			if(n != t)
				isEmirp = primeCheck(t);
		}
		if(isEmirp)
			cout << n << " is emirp.\n";
		else if(isPrime)
			cout << n << " is prime.\n";
		else
			cout << n << " is not prime.\n";
	}
}