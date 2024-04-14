#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> decToBi(int n){
	vector<int> ans;
	while(n != 0){
		if(n%2 == 1){
			ans.push_back(1);
		}
		else{
			ans.push_back(0);
		}
		n /= 2;
	}
	reverse(ans.begin(),  ans.end());
	return ans;
}

vector<int> hexToBi(int n){
	vector<int> ans;
	int t = 0;
	while(n != 0){
		t = n%10;
		for(int i = 0; i < 4; i++){
			if(t%2 == 1){
				ans.push_back(1);
			}
			else{
				ans.push_back(0);
			}
			t /= 2;
		}
		n /= 10;
	}
	reverse(ans.begin(),  ans.end());
	return ans;
}

int countOne(vector<int> n){
	int count = 0;
	for(auto i : n){
		if(i == 1)
			count++;
	}
	return count;
}

int main(){
	int N = 0;
	cin >> N;
	while(N--){
		int M = 0, t = 0, b1 = 0, b2 = 0;
		vector<int> bi;
		
		cin >> M;
		bi = decToBi(M);
		b1 = countOne(bi);
		bi.clear();
		bi = hexToBi(M);
		b2 = countOne(bi);
		
		cout << b1 << " " << b2 << "\n";
	}
}