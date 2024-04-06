#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a = 0, b = 0;
	while(cin >> a >> b){
		int ans = 0;
		if(a == 0 && b == 0){
			break;
		}
		ans = floor(pow(b, 0.5)) - ceil(pow(a, 0.5)) + 1;
		cout << ans << "\n";
	}
}