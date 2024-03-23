#include <iostream>
#include <iomanip> //for setw()
using namespace std;

int pk = 0;

void bangla(long long n){
	int last = 0, shata = 0, hajar = 0, lakh = 0;
	last = n%100;
	shata = n%1000/100;
	hajar = n%100000/1000;
	lakh = n%10000000/100000;
	if(n >= 10000000){
		bangla(n/10000000);
		cout << " kuti";
	}
	if(lakh != 0)
		cout << " " << lakh << " lakh";
	if(hajar != 0)
		cout << " " << hajar << " hajar";
	if(shata != 0)
		cout << " " << shata << " shata";
	if(last != 0)
		cout << " " << last;
}

int main(){
	long long n, i = 0;
	while(cin >> n){
		i++;
		cout << setw(4) << i << "."; //4格靠右對旗
		if(n == 0)
			cout << " 0";
		else
			bangla(n);
		cout << "\n";
	}
}