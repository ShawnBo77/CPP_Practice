#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s1 = "", s2 = "";
    while(getline(cin, s1) && getline(cin, s2)){
        vector<char> ans;
        int check[s2.size()] = {0};
        for(int i = 0; i < s1.size(); i++){
            for(int j = 0; j < s2.size(); j++){
                if(s1[i] == s2[j] && check[j] != 1){
                    ans.push_back(s1[i]);
                    check[j] = 1;
                    break;
                }
            }
        }
        sort(ans.begin(), ans.end());
        for(auto i : ans){
            if(isalpha(i))
                cout << i;
        }
        cout << "\n";
    }
}