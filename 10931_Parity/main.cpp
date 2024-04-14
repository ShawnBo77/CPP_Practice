#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> decToBi(int n){
	vector<int> bi;
	while(n != 0){
		if(n%2 == 1)
			bi.push_back(1);
		else
			bi.push_back(0);
		n /= 2;
	}
	reverse(bi.begin(), bi.end());
	return bi;
}

int countOne(vector<int> vec){
	int count = 0;
	for(auto i : vec){
		if(i == 1)
			count++;
	}
	return count;
}

int main(){
	int I = 0;
	while(cin >> I && I != 0){
		int parity = 0;
		vector<int> bi;
		bi = decToBi(I);
		parity = countOne(bi);
		
		cout << "The parity of ";
		for(auto i : bi){
			cout << i;
		}
		cout << " is " << parity << " (mod 2).\n";
	}
}