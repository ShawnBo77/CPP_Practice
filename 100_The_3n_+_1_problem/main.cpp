#include <iostream>

using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		int n = min(a, b);
		int count = 0, maxc = 0;
		while(n <= max(a,b)){
			count = 0;
			int nt = n;
			while(1){
				count++;
				if(nt == 1){
					break;
				}
				else{
					if(nt%2 == 1){
						nt = 3*nt+1;
					}
					else{
						nt = nt/2;
					}
				}
			}
			maxc = max(maxc, count);
			n++;
		}
		cout << a << " " << b << " " << maxc << "\n";
	}
	return 0;
}