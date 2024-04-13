#include <iostream>
#include <vector>
using namespace std;

void generateFib(vector<int> &fib){
	fib.push_back(1);
	fib.push_back(2);
	int i = 0;
	while(fib.back() < 100000000){
		fib.push_back(fib[i] + fib[i+1]);
		i++;
	}
}

int main(){
	int N = 0, data = 0, t = 0;
	vector<int> fib, ans;

	generateFib(fib);
	cin >> N;
	while(N--){
		int startFlag = 0;
		cin >> data;
		t = data;
		ans.clear();
		for(int i = fib.size()-1; i >= 0; i--){
			if(t >= fib[i]){
				ans.push_back(1);
				t -= fib[i];
				startFlag = 1;
			}
			else if(startFlag == 1 && t < fib[i]){
				ans.push_back(0);
			}
		}
		cout << data << " = ";
		for(auto i : ans){
			cout << i;
		}
		cout << " (fib)\n";
	}
}