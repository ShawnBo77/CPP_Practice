#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string s = "";
	stringstream ss;
	int n = 0, temp = 0, flag = 0, compute[2] = {0};
	while(getline(cin, s)){
		ss.clear();
		ss.str(s);
		ss >> n;
		flag = 0;
		int check[n] = {0}, count = 0;
		while(ss >> temp){
			if(count == 0){
				compute[0] = temp;
			}
			else if(count%2 == 0){
				compute[0] = temp;
			}
			else if(count%2 == 1){
				compute[1] = temp;
			}
			if(count!=0){
				if(abs(compute[0]-compute[1]) > n  || check[abs(compute[0]-compute[1])] == 1){
					flag = 1;
					break;
				}	
				check[abs(compute[0]-compute[1])] = 1;
			}
			count++;
		}
		if(flag == 0 && check[0] != 1)
			cout << "Jolly\n";
		else
			cout << "Not jolly\n";
	}
}