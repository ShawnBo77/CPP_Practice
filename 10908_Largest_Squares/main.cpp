#include <iostream>
#include <algorithm>
using namespace std;

int checkGrid(int r, int c, int layer, string data[]){
	char center = data[r][c];
	for(int i = 0; i < 2*layer+1; i++){
		for(int j = 0; j < 2*layer+1; j++){
			if(r-layer+i > data->size() || c-layer+j > data[0].size() || center != data[r-layer+i][c-layer+j])
				return 0;
		}
	}
	return 1;
}

int largestSquareLen(int r, int c, string data[], int maxl){
	int len = 1;
	for(int i = 1; i < (maxl+1)/2; i++){
		if(checkGrid(r, c, i, data))
			len += 2;
		else
			break;
	}
	return len;
}

int main(){
	int T = 0;
	cin >> T;
	while(T--){
		int M = 0, N = 0, Q = 0, r = 0, c = 0, maxlen = 0;
		cin >> M >> N >> Q;
		cout << M << " " << N << " " << Q << "\n";
		string data[N] = {};
		for(int i = 0; i < M; i++){
			cin >> data[i];
		}
		maxlen = min(M, N);
		while(Q--){
			cin >> r >> c;
			cout << largestSquareLen(r, c, data, maxlen) << "\n";
		}
	}
}