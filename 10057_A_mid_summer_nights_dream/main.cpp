#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n = 0;
	while(cin >> n){
		int m1 = 0, m2 = 0, count = 0;
		vector<int> data;
		while(n--){
			int t = 0;
			cin >> t;
			data.push_back(t);
		}
		sort(data.begin(), data.end());
		if(data.size()%2 == 0){
			m1 = data[data.size()/2-1];
			m2 = data[data.size()/2];
		}
		else{
			m1 = data[data.size()/2];
			m2 = m1;
		}
		for(auto i : data){
			if(i >= m1 && i <= m2){
				count++;
			}
		}
		cout << m1 << " " << count << " " << m2-m1+1 << "\n";
	}
}