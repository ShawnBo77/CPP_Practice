#include <iostream>
using namespace std;

int main(){
	int n = 0, caseCount = 1;
	cin >> n;
	while(n--){
		int x = 0, y = 0, ans = 0;
		cin >> x >> y;
		for(int i = x; i <= y; i++){
			if(i%2 == 1)
				ans += i;
		}
		cout << "Case " << caseCount << ": " << ans << "\n";
		caseCount++;
	}
}