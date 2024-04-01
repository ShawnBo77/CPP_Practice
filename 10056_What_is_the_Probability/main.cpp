#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	int S = 0;
	cin >> S;
	while(S--){
		int N = 0, I = 0;
		float p = 0, first_term = 0, ans = 0;
		cin >> N >> p >> I;
		if(p == 0){
			cout << "0.0000\n";
			continue;
		}
		first_term = pow((1-p), I-1)*p;
		ans = first_term / (1-pow((1-p), N));
		cout << fixed << setprecision(4) << ans << "\n";
	}
}