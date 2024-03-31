#include <iostream>
using namespace std;

int main(){
	int n = 0, M = 0, D = 0;
	int doomsday[12] = {10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};
	string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	cin >> n;
	while(n--){
		cin >> M >> D;
		int diff = (D-doomsday[M-1])%7;
		if(diff >= 0)
			cout << day[diff] << "\n";
		if(diff < 0)
			cout << day[diff+7] << "\n";
	}
}