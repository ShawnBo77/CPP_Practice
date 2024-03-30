#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<string> sentence;
	string s = "";
	int max_size = 0;
	while(getline(cin, s)){
		sentence.push_back(s);
		if(s.size() > max_size)
			max_size = s.size();
	}
	for(int j = 0; j < max_size; j++){
		int flag = 0;
		for(int i = sentence.size()-1; i > -1; i--){
			if(j < sentence[i].size()){
				cout << sentence[i][j];
				flag = 1;
			}
			else if(flag == 0){
				cout << " ";
			}		
		}
		cout << "\n";
	}
}