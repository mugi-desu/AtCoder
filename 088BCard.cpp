#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,w;
    cin >> N;
    vector<int> card(N);
    for(int i=0;i<N;i++){
        cin >> card.at(i);
    }
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(card.at(i)<card.at(j)){
                w=card.at(i);
                card.at(i)=card.at(j);
                card.at(j)=w;
            }
        }
    }
    int Al=0,Bo=0;
    for(int i=0;i<N;i++){
        if(i%2==0){
            Al+=card.at(i);
        }
        else{
            Bo+=card.at(i);
        }
    }
    cout << Al-Bo << endl;
}