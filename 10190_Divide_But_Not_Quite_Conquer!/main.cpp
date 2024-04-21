#include <iostream>
#include <vector>
using namespace std;

int main(){
	long long n = 0, m = 0;
	while(cin >> n >> m){
		int flag = 1;
		vector<int> a;
		do{
			a.push_back(n);
			if(n%m != 0 || a.back() <= a.back()/m){
				flag = 0;
				break;
			}
			n /= m;
		}while(n != 1);
		if(flag == 0 || a.front() == 1)
			cout << "Boring!\n";
		else{
			for(auto i : a)
				cout << i << " ";
			cout << "1\n";
		}	
	}
}