#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M,bsum,rsum,ans=0;
    cin >> N;
    vector<string> blue(N);
    for(int i=0;i<N;i++){
        cin >> blue.at(i);
    }
    cin >> M;
    vector<string> red(M);
    for(int i=0;i<M;i++){
        cin >> red.at(i);
    }
    for(int i=0;i<N;i++){
        bsum=0;
        rsum=0;
        for(int j=0;j<N;j++){
            if(blue.at(i)==blue.at(j)){
                bsum+=1;
            }
        }
        for(int j=0;j<M;j++){
            if(blue.at(i)==red.at(j)){
                rsum+=1;
            }
        }
        if(bsum - rsum >= ans){
            ans = bsum - rsum;
        }
    }
    for(int i=0;i<M;i++){
        bsum=0;
        rsum=0;
        for(int j=0;j<M;j++){
            if(red.at(i)==red.at(j)){
                rsum+=1;
            }
        }
        for(int j=0;j<N;j++){
            if(red.at(i)==blue.at(j)){
                bsum+=1;
            }
        }
        if(bsum-rsum>ans){
            ans=bsum-rsum;
        }
    }
    cout << ans << endl;
}