#include <iostream>
#include <algorithm>
using namespace std;

int N,M;

bool cmp(int x, int y){
    if ((x % M) == (y % M)){ //除以M餘數相等
    	//若兩奇數，則數值較大的排在前面
        if ((x % 2) * (y % 2)){ //非0即true，即x、y各為1、-1的所有情況
            return x > y;
        } 
        //若兩偶數，則數值較小排在前面
        else if(x%2==0 && y%2==0){
            return x < y;
        }
        //一奇一偶，則奇數排在偶數前面
        else{
            return (x % 2); //x是偶數即false，xy對調，變y(奇數)在前
            //分開討論即
            //if(x%2==0 && y%2==1)
            //    return x%2 > y%2;
            //if(x%2==1 && y%2==0)
            //    return x%2 > y%2;
            //if(x%2==0 && y%2==-1)
            //    return x%2 < y%2;
            //if(x%2==-1 && y%2==0)
            //    return x%2 < y%2;
        }
    }else{
        return (x % M) < (y % M);
    }
}

int main() {
	cin >> N >> M;
	cout << N << " " << M << "\n";
	if(N == 0 && M == 0){
		exit(0);
	}else{
		int a[N];
		for(int i = 0; i < N; i++){
			cin >> a[i];
		}
		sort(a, a+N, cmp);
		for(int i = 0; i < N; i++){
			cout << a[i] << "\n";
		}
		cout << "0 0\n";
	}
}