#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double s = 0, a = 0;
	double arc = 0, chord = 0;
	string str = "";
	while(cin >> s >> a >> str){
		if (str == "min") a /= 60.0;
		if (a > 180.0) a = 360.0 - a;
		arc = 2 * M_PI * (s+6440.0) * a/360;
		chord = 2 * (s+6440.0) * cos((180-a)/2 * M_PI / 180);
		cout << fixed << setprecision(6) << arc << " " << chord << "\n";
	}
}