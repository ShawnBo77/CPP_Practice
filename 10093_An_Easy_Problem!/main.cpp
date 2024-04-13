#include <iostream>
using namespace std;
 
int main() {
    string s = "";
    while (getline(cin, s)){
    	int sum = 0, max = 1, temp = 0, ans = -1;
        for(int i = 0; i < s.size(); i++){
        	if(s[i] >= '0' && s[i] <= '9'){
        		temp = s[i] - '0';
        	}
        	else if(s[i] >= 'A' && s[i] <= 'Z'){
        		temp = s[i] - 'A' + 10;
        	}
        	else if(s[i] >= 'a' && s[i] <= 'z'){
        		temp = s[i] - 'a' + 36;
        	}
        	else continue;
        	
        	sum += temp;
        	
        	if(temp > max){
        		max = temp;
        	}	
        }
        
        for(int i = max; i < 62; i++){
        	if(sum%i == 0){
        		ans = i + 1;
        		break;
        	}	
        }
        
        if(ans == -1){
        	cout << "such number is impossible!\n";
        }
        else{
        	cout << ans << "\n";
        }
    }
    return 0;
}