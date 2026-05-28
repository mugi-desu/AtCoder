#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    string str;
    for(int i=0;i<H+2;i++){
        if(i==0 || i==H+1){
            for(int j=0;j<W+2;j++){
                cout << "#";
            }
            cout << endl;
        }
        else{
            for(int j=0;j<3;j++){
                if(j==0 || j==2){
                    cout << "#";
                }
                else{
                    cin >> str;
                    cout << str;
                }
                if(j==2){
                    cout << endl;
                }
            }
        }
    }
}