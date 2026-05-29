#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,a=0,b=0,c=0;
    cin >> N;
    for(int i=0;i<N;i++){
        int t,x,y;
        cin >> t >> x >> y;
        if(x<a){
            swap(x,a);
        }
        if(y<b){
            swap(y,b);
        }
        if(x-a+y-b > t-a){
            cout << "No" << endl;
            return 0;
        }
        if((t-a)%2 == 0){
            if((x-a+y-b)%2==1){
                cout << "No" << endl;
                return 0;
            }
            continue;
        }
        if((x-a+y-b)%2==0){
            cout << "No" << endl;
            return 0;
        }
        a=t;
        b=x;
        c=y;
    }
    cout << "Yes" << endl;
}