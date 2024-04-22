#include  <iostream>
#include <iomanip>
using namespace std;

int main(){
	double x[4] = {}, y[4] = {}, x4 = 0, y4 = 0;
	while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3]){
		if(x[1] == x[2] && y[1] == y[2]){ //左下->右下->右下->右上
			x4 = x[3] - x[2] + x[0];
			y4 = y[3] - y[2] + y[0];
		}
		else if(x[0] == x[2] && y[0] == y[2]){ //左下->右下->左下->左上
			x4 = x[3] - x[2] + x[1];
			y4 = y[3] - y[2] + y[1];
		}
		else if(x[0] == x[3] && y[0] == y[3]){ //左下->右下->左上->左下
			x4 = x[2] - x[3] + x[1];
			y4 = y[2] - y[3] + y[1];
		}
		else if(x[1] == x[3] && y[1] == y[3]){ //左下->右下->右上->右下
			x4 = x[2] - x[3] + x[0];
			y4 = y[2] - y[3] + y[0];
		}
		cout << fixed << setprecision(3) << x4 << " " << y4 << "\n";
	} 
}