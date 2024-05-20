#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int x1 = 0, y1 = 0, x2 = 0, y2 = 0, l1 = 0, l2 = 0, s1 = 0, s2 = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		l1 = x1 + y1;
		l2 = x2 + y2;
		s1 = (l1+1)*l1/2 + x1;
		s2 = (l2+1)*l2/2 + x2;
		cout << "Case " << i << ": " << s2-s1 << "\n";
	}
}