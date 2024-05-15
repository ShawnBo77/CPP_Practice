#include <iostream>
using namespace std;

int main(){
	int n = 0;
	while(cin >> n && n != 0){
		int dice[6] = {1, 2, 3, 4, 5, 6}; //0頂 1上 2左 3右 4下 5底
		while(n--){
			string s = "";
			cin >> s;
			if(s == "east"){ //東
				int t = dice[0];
				dice[0] = dice[2];
				dice[2] = dice[5];
				dice[5] = dice[3];
				dice[3] = t;
			}
			else if(s == "west"){ //西
				int t = dice[0];
				dice[0] = dice[3];
				dice[3] = dice[5];
				dice[5] = dice[2];
				dice[2] = t;
			}
			else if(s == "south"){ //南
				int t = dice[0];
				dice[0] = dice[1];
				dice[1] = dice[5];
				dice[5] = dice[4];
				dice[4] = t;
			}
			else if(s == "north"){ //北
				int t = dice[0];
				dice[0] = dice[4];
				dice[4] = dice[5];
				dice[5] = dice[1];
				dice[1] = t;
			}
		}
		cout << dice[0] << "\n";
	}
}