#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	while(n--){
		int l = 0, t = 0, c = 0;
		vector<int> v;
		cin >> l;
		while(l--){
			cin >> t;
			v.push_back(t);
		}
		for(int i = v.size()-1; i > 0; i--){
			for(int j = 0; j < i; j++){
				if(v[j] > v[j+1]){
					t = v[j];
					v[j] = v[j+1];
					v[j+1] = t;
					c++;
				}
			}
		}
		cout << "Optimal train swapping takes " << c << " swaps.\n";
	}
}