#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, r;
    cin >> N;
    while (N--) {
        cin >> r;
        int s[r];
        for (int i = 0; i < r; i++){
            cin >> s[i];
        }
        sort(s, s+r);
        int sum = 0;
        for (int i = 0; i < r; i++){
            sum += abs(s[i] - s[r/2]);
        }
        cout << sum << "\n";
    }
    return 0;
}