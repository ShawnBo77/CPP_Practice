#include <iostream>
using namespace std;

int main(){
	int nc = 0, count = 0;
	cin >> nc;
	cin.ignore();
	while(nc--){
		count++;
		int N = 0, isSymmetric = 1, ec = 0;
		char temp;
		cin >> temp >> temp >> N;
		long long m[N][N]  = {0};
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				cin >> m[i][j];
				ec++;
				if(m[i][j] < 0){
					isSymmetric = 0;
				}
				if(ec > N*N/2 && m[i][j] != m[N-1-i][N-1-j]){
					isSymmetric = 0;
				}
			}
		}
		cout << "Test #" << count << ": ";
		if(isSymmetric)
			cout << "Symmetric.\n";
		else
			cout << "Non-symmetric.\n";
	}
}