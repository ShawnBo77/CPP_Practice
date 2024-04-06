#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	while(n--){
		int s = 0, d = 0, s1 = 0, s2 = 0;
		cin >> s >> d;
		s1 = (s+d)/2;
		s2 = s - s1;
		if(s1 < 0 || s2 < 0 || (s1-s2) != d){
			cout << "impossible\n";
		}
		else{
			cout << s1 << " " << s2 << "\n";
		}
	}
}