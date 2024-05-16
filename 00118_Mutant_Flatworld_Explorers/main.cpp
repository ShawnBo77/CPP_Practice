#include <iostream>
#include <vector>
using namespace std;

char findDir(char dir, char command){
    char dirArray[4] = {'E', 'S', 'W', 'N'};
    int dirIndex = -1;
    for(int i = 0; i < 4; i++){
        if(dir == dirArray[i]){
            dirIndex = i;
        }
    }
    if(command == 'R')
        dirIndex = (dirIndex+1)%4;
    else if(command == 'L')
        dirIndex = (dirIndex+3)%4; // not (dirIndex-1)%4
    return dirArray[dirIndex];
}

int main(){
    int rangeX = 0, rangeY = 0, x = 0, y = 0;
    char dir;
    vector<pair<int,int>> lostPoint;
    cin >> rangeX >> rangeY;
    while(cin >> x >> y >> dir){
        int lostFlag = 0;
        string command = "";
        cin.ignore();
        getline(cin, command);
        for(int i = 0; i < command.size(); i++){
            if(command[i] == 'F'){
                if(dir == 'E' && x+1 <= rangeX)
                    x++;
                else if(dir == 'S' && y-1 >= 0)
                    y--;
                else if(dir == 'W' && x-1 >= 0)
                    x--;
                else if(dir == 'N' && y+1 <= rangeY)
                    y++;
                else{
                    int lostPointFlag = 0;
                    for(auto j : lostPoint){
                        if(j == make_pair(x,y)){
                            lostPointFlag = 1;
                            break;
                        }
                    }
                    if(!lostPointFlag){
                        lostFlag = 1;
                        lostPoint.push_back(make_pair(x, y));
                        cout << x << " " << y << " " << dir << " LOST\n";
                        break;
                    }
                }
            }
            else{
                dir = findDir(dir, command[i]); //command[i] is L or R
            }
        }
        if(!lostFlag)
            cout << x << " " << y << " " << dir << "\n";
    }
}