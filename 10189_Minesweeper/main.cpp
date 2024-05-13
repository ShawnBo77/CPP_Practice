#include <iostream>
using namespace std;

int mineCount(int i, int j, char* data, int row, int col){
	int mine = 0;
	for(int k = -1; k < 2; k++){
		for(int l = -1; l < 2; l++){
			if(i+k >= 0 && i+k < row && j+l >= 0 && j+l < col && *(data+(i+k)*col+(j+l)) == '*'){ //*(data+(i+k)*col+(j+l)) means data[i+k][j+l]
				mine++;
			}
		}
	}
	return mine;
}

int main(){
	int row = 0, col = 0, c = 0;
	while(cin >> row >> col && (row != 0 && col != 0)){
		c++;
		if(c != 1)
			cout << "\n";
		cout << "Field #" << c << ":\n";
		char data[row][col] = {""}, t;
		int mine = 0;
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				cin >> t;
				data[i][j] = t;
			}
		}
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				if(data[i][j] == '*'){
					cout << "*";
				}
				else{
					cout << mineCount(i, j, &data[0][0], row, col); //傳二維陣列起始位置 用&data[0][0] or (char*)data
					mine = 0;
				}
			}
			cout << "\n";
		}
	}
}