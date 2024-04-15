#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T = 0;
	cin >> T;
	while(T--){
		int N = 0, P = 0, t = 0, count = 0;
		vector<int> h;
		cin >> N >> P;
		while(P--){
			cin >> t;
			h.push_back(t);
		}
		for(int i = 1; i <= N; i++){
			if(i%7 == 6 || i%7 == 0)
				continue;
			for(int j = 0; j < h.size(); j++){
				if(i%h[j] == 0){
					count++;
					break;
				}
			}
		}
		cout << count << "\n";
	}
}