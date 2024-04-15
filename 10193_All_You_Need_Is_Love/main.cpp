#include <iostream>
using namespace std;

int biToDec(string n){
	int t = 0;
	for(int i = 0; i < n.size(); i++){
		t *= 2;
		t += n[i] - '0';
	}
	return t;
}

int gcd(int a, int b){
	int t = 0;
	while(b != 0){
		t = a % b;
		a = b;
		b = t;
	}
	return a;
}

int main(){
	int N = 0;
	string s1 = "", s2 = "";
	cin >> N;
	for(int i = 1; i <= N; i++){
		int n1 = 0, n2 = 0;
		cin >> s1 >> s2;
		n1 = biToDec(s1);
		n2 = biToDec(s2);
		cout << "Pair #" << i << ": ";
		if(gcd(n1, n2) != 1){
			cout << "All you need is love!\n";
		}
		else{
			cout << "Love is not all you need!\n";
		}
	}
}