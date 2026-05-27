#include <bits/stdc++.h>
using namespace std;

int main() {
  string str1,str2,str3,str4;
  int H,W,cnt=0;
  cin >> H >> W;
  if(H==1){
    if(W==1){
      char a;
      cin >> a;
      if(a == '#'){
        cout << a << endl;
      }
      else
        cout << '0' << endl;
    }
    else if(W==2){
        char a,b;
        cin >> a >> b;
        if(a == '.'){
            if(b == '#')
                a = '1';
            else{
                a = '0';
                b = '0';
            }
        }
        else{
            if(b == '.')
                b = '1'; 
        }
        cout << a << b << endl;
    }
    else{
        char a,b,c;
        cin >> a >> b >> c;
        if(a == '.'){
            if(b == '#')
                a = '1';
            else
                a = '0';
        }
        if(b == '.'){
            if(a == '#')
                cnt+=1;
            if(c == '#')
                cnt+=1;
            b=cnt+'0';
            cnt=0;
        }
        cout << a << b;
        if(W == 3){
            if(c == '.'){
                if(b=='#')
                    c='1';
                else
                    c='0';
            }
            cout << c << endl;
        }
        for(int i=3;i<W;i++){
            a=b;
            b=c;
            cin >> c;
            if(b=='.'){
                if(a=='#')
                    cnt+=1;
                if(c=='#')
                    cnt+=1;
                b=cnt+'0';
                cnt=0;
            }
            cout << b;
            if(i==W-1){
                if(c=='.'){
                    if(b=='#')
                        c='1';
                    else
                        c='0';
                }
                cout << c << endl;
            }
        }
    }
  }
  if(H == 2){
    if (W == 1){
      char a,b;
      cin >> a >> b;
      if(a == '.'){
        if(b == '#'){
          cout << '1' << endl << '#' << endl;
        }
        else{
          cout << '0' << endl << '0' << endl;
        }
      }
      else{
        if(b == '#'){
          cout << '#' << endl << '#' << endl;
        }
        else
          cout << '#' << endl << '1' << endl;
      }
    }
    else{
    cin >> str1 >> str2;
    for(int i=0;i<=W-2;i++){
      if(i==0){
        if(str1.at(i)=='.'){
          if(str1.at(i+1)=='#'){
            cnt+=1;
          }
          if(str2.at(i+1)=='#'){
            cnt+=1;
          }
          if(str2.at(i)=='#'){
            cnt+=1;
          }
          str1.at(i)=cnt + '0';
          cnt = 0;
        }
        if(str2.at(i)=='.'){
          if(str1.at(i+1)=='#'){
            cnt+=1;
          }
          if(str1.at(i)=='#'){
            cnt+=1;
          }
          if(str2.at(i+1)=='#'){
            cnt+=1;
          }
          str2.at(i)=cnt+'0';
          cnt =0;
        }
      }
      if(str1.at(i) == '.'){
        if(str1.at(i+1)=='#'){
          cnt+=1;
        }
        if(str1.at(i-1)=='#'){
          cnt+=1;
        }
        if(str2.at(i-1)=='#'){
          cnt+=1;
        }
        if(str2.at(i)=='#'){
          cnt+=1;
        }
        if(str2.at(i+1)=='#'){
          cnt+=1;
        }
        str1.at(i) = cnt + '0';
        cnt = 0;
      }
      if(str2.at(i)=='.'){
        if(str1.at(i-1)=='#'){
          cnt+=1;
        }
        if(str1.at(i)=='#'){
          cnt+=1;
        }
        if(str1.at(i+1)=='#'){
          cnt+=1;
        }
        if(str2.at(i-1)=='#'){
          cnt+=1;
        }
        if(str2.at(i+1)=='#'){
          cnt+=1;
        }
        str2.at(i)=cnt + '0';
        cnt = 0;
      }
      if(i == W-2){
        if(str1.at(i+1)=='.'){
          if(str1.at(i)=='#'){
            cnt+=1;
          }
          if(str2.at(i)=='#'){
            cnt+=1;
          }
          if(str2.at(i+1)=='#'){
            cnt+=1;
          }
          str1.at(i+1)=cnt + '0';
          cnt = 0;
        }
        if(str2.at(i+1)=='.'){
          if(str1.at(i)=='#'){
            cnt+=1;
          }
          if(str1.at(i+1)=='#'){
            cnt+=1;
          }
          if(str2.at(i)=='#'){
            cnt+=1;
          }
          str2.at(i+1)=cnt + '0';
          cnt = 0;
        }
        cout << str1 << endl << str2 << endl;
      }
    }
    }
  }
  if(H>=3){
    if(W == 1){
        char a,b,c;
        cin >> a >> b >> c;
        if(a == '.'){
            if(b == '#')
                cnt+=1;
            a=cnt+'0';
            cnt = 0;
        }
        cout << a << endl;
        if(b == '.'){
            if(a == '#')
                cnt+=1;
            if(c == '#')
                cnt+=1;
            b=cnt+'0';
            cnt=0;
        }
        cout << b << endl;
        if(H == 3){
            if(c == '.'){
                if(b=='#')
                    cnt+=1;
                c=cnt+'0';
                cnt = 0;
            }
            cout << c << endl;
        }
        else{
            for(int i=3;i<H;i++){
                a = b;
                b = c;
                cin >> c;
                if(b == '.'){
                    if(a == '#')
                        cnt+=1;
                    if(c == '#')
                        cnt+=1;
                    b=cnt+'0';
                    cnt=0;
                }
                cout << b << endl;
                if(i == H-1){
                    if(c == '.'){
                        if(b == '#')
                            cnt+=1;
                        c=cnt+'0';
                    }
                    cout << c << endl;
                }
            }
        }
    }
    else if(W==2){
        cin >> str1 >> str2 >> str3;
        if(str1.at(0)=='.'){
            if(str1.at(1)=='#')
                cnt += 1;
            if(str2.at(0)=='#')
                cnt += 1;
            if(str2.at(1)=='#')
                cnt += 1;
            str1.at(0)=cnt+'0';
            cnt = 0;
        }
        if(str1.at(1)=='.'){
            if(str1.at(0)=='#')
                cnt += 1;
            if(str2.at(1)=='#')
                cnt += 1;
            if(str2.at(0)=='#')
                cnt += 1;
            str1.at(1)=cnt+'0';
            cnt = 0;
        }
        cout << str1 << endl;
        if(str2.at(0)=='.'){
            if(str1.at(1)=='#')
                cnt += 1;
            if(str2.at(1)=='#')
                cnt += 1;
            if(str1.at(0)=='#')
                cnt += 1;
            if(str3.at(1)=='#')
                cnt += 1;
            if(str3.at(0)=='#')
                cnt += 1;
            str2.at(0)=cnt+'0';
            cnt = 0;
        }
        if(str2.at(1)=='.'){
            if(str1.at(0)=='#')
                cnt += 1;
            if(str1.at(1)=='#')
                cnt += 1;
            if(str2.at(0)=='#')
                cnt += 1;
            if(str3.at(0)=='#')
                cnt += 1;
            if(str3.at(1)=='#')
                cnt += 1;
            str2.at(1)=cnt+'0';
            cnt = 0;
        }
        cout << str2 << endl;
        if(H==3){
            if(str3.at(0)=='.'){
                if(str2.at(0)=='#')
                    cnt+=1;
                if(str2.at(1)=='#')
                    cnt+=1;
                if(str3.at(1)=='#')
                    cnt+=1;
                str3.at(0)=cnt+'0';
                cnt=0;
            }
            if(str3.at(1)=='.'){
                if(str2.at(0)=='#')
                    cnt+=1;
                if(str2.at(1)=='#')
                    cnt+=1;
                if(str3.at(0)=='#')
                    cnt+=1;
                str3.at(1)=cnt+'0';
                cnt=0;
            }
            cout << str3 << endl;
        }
        for(int i = 3;i<H;i++){
            str1 = str2;
            str2 = str3;
            cin >> str3;
            if(str2.at(1)=='.'){
                if(str1.at(0)=='#')
                    cnt += 1;
                if(str1.at(1)=='#')
                    cnt += 1;
                if(str2.at(0)=='#')
                    cnt += 1;
                if(str3.at(0)=='#')
                    cnt += 1;
                if(str3.at(1)=='#')
                    cnt += 1;
                str2.at(1)=cnt+'0';
                cnt = 0;
            }
            if(str2.at(0)=='.'){
                if(str1.at(0)=='#')
                    cnt += 1;
                if(str1.at(1)=='#')
                    cnt += 1;
                if(str2.at(1)=='#')
                    cnt += 1;
                if(str3.at(0)=='#')
                    cnt += 1;
                if(str3.at(1)=='#')
                    cnt += 1;
                str2.at(0)=cnt+'0';
                cnt = 0;
            }
            cout << str2 << endl;
            if(i == H-1){
                if(str3.at(0)=='.'){
                    if(str2.at(0)=='#')
                        cnt += 1;
                    if(str2.at(1)=='#')
                        cnt += 1;
                    if(str3.at(1)=='#')
                        cnt += 1;
                    str3.at(0)=cnt+'0';
                    cnt = 0;
                }
                if(str3.at(1)=='.'){
                    if(str2.at(0)=='#')
                        cnt += 1;
                    if(str2.at(1)=='#')
                        cnt += 1;
                    if(str3.at(0)=='#')
                        cnt += 1;
                    str3.at(1)=cnt+'0';
                    cnt = 0;
                }
                cout << str3 << endl;
            }
        }
    }
    else{
        cin >> str1 >> str2 >> str3;
        if(str1.at(0)=='.'){
            if(str1.at(1)=='#')
                cnt += 1;
            if(str2.at(0)=='#')
                cnt += 1;
            if(str2.at(1)=='#')
                cnt += 1;
            str1.at(0)=cnt+'0';
            cnt=0;
        }
        for(int i=1;i<W;i++){
            if(i == W-1){
                if(str1.at(i)=='.'){
                    if(str1.at(i-1)=='#')
                        cnt+=1;
                    if(str2.at(i-1)=='#')
                        cnt+=1;
                    if(str2.at(i)=='#')
                        cnt+=1;
                    str1.at(i)=cnt+'0';
                    cnt=0;
                    break;
                }
            }
            if(str1.at(i)=='.'){
                if(str1.at(i-1)=='#')
                    cnt+=1;
                if(str1.at(i+1)=='#')
                    cnt+=1;
                if(str2.at(i-1)=='#')
                    cnt+=1;
                if(str2.at(i)=='#')
                    cnt+=1;
                if(str2.at(i+1)=='#')
                    cnt+=1;
                str1.at(i)=cnt+'0';
                cnt=0;
            }
        }
        cout << str1 << endl;
        if(str2.at(0)=='.'){
            if(str1.at(0)=='#')
                cnt += 1;
            if(str1.at(1)=='#')
                cnt += 1;
            if(str2.at(1)=='#')
                cnt += 1;
            if(str3.at(0)=='#')
                cnt += 1;
            if(str3.at(1)=='#')
                cnt += 1;
            str2.at(0)=cnt+'0';
            cnt=0;
        }
        for(int i=1;i<W;i++){
            if(i == W-1){
                if(str2.at(i)=='.'){
                    if(str1.at(i-1)=='#')
                        cnt+=1;
                    if(str1.at(i)=='#')
                        cnt+=1;
                    if(str2.at(i-1)=='#')
                        cnt+=1;
                    if(str3.at(i-1)=='#')
                        cnt+=1;
                    if(str3.at(i)=='#')
                        cnt+=1;
                    str2.at(i)=cnt+'0';
                    cnt=0;
                    break;
                }
            }
            if(str2.at(i)=='.'){
                if(str1.at(i-1)=='#')
                    cnt+=1;
                if(str1.at(i)=='#')
                    cnt+=1;
                if(str1.at(i+1)=='#')
                    cnt+=1;
                if(str2.at(i-1)=='#')
                    cnt+=1;
                if(str2.at(i+1)=='#')
                    cnt+=1;
                if(str3.at(i-1)=='#')
                    cnt+=1;
                if(str3.at(i)=='#')
                    cnt+=1;
                if(str3.at(i+1)=='#')
                    cnt+=1;
                str2.at(i)=cnt+'0';
                cnt=0;
            }
        }
        cout << str2 << endl;
        for(int i=3;;i++){
            if(H==3){
                if(str3.at(0)=='.'){
                    if(str2.at(0)=='#')
                        cnt+=1;
                    if(str2.at(1)=='#')
                        cnt+=1;
                    if(str3.at(1)=='#')
                        cnt+=1;
                    str3.at(0)=cnt+'0';
                    cnt=0;
                }
                for(int j=1;j<W;j++){
                    if(j == W-1){
                        if(str3.at(j)=='.'){
                            if(str2.at(j-1)=='#')
                                cnt+=1;
                            if(str2.at(j)=='#')
                                cnt+=1;
                            if(str3.at(j-1)=='#')
                                cnt+=1;
                            str3.at(j)=cnt+'0';
                            cnt=0;
                        }
                        cout << str3 << endl;
                        break;
                    }
                    if(str3.at(j)=='.'){
                        if(str2.at(j-1)=='#')
                            cnt+=1;
                        if(str2.at(j)=='#')
                            cnt+=1;
                        if(str2.at(j+1)=='#')
                            cnt+=1;
                        if(str3.at(j-1)=='#')
                            cnt+=1;
                        if(str3.at(j+1)=='#')
                            cnt+=1;
                        str3.at(j)=cnt+'0';
                        cnt=0;
                    }
                }
                break;
            }
            str1=str2;
            str2=str3;
            cin >> str3;
            if(str2.at(0)=='.'){
                if(str1.at(0)=='#')
                    cnt+=1;
                if(str1.at(1)=='#')
                    cnt+=1;
                if(str2.at(1)=='#')
                    cnt+=1;
                if(str3.at(0)=='#')
                    cnt+=1;
                if(str3.at(1)=='#')
                    cnt+=1;
                str2.at(0)=cnt+'0';
                cnt=0;
            }
            for(int j=1;j<W;j++){
                if(j == W-1){
                    if(str2.at(j)=='.'){
                        if(str1.at(j-1)=='#')
                            cnt+=1;
                        if(str1.at(j)=='#')
                            cnt+=1;
                        if(str2.at(j-1)=='#')
                            cnt+=1;
                        if(str3.at(j-1)=='#')
                            cnt+=1;
                        if(str3.at(j)=='#')
                            cnt+=1;
                        str2.at(j)=cnt+'0';
                        cnt=0;
                    }
                    cout << str2 << endl;
                    break;
                }
                if(str2.at(j)=='.'){
                    if(str1.at(j-1)=='#')
                        cnt+=1;
                    if(str1.at(j)=='#')
                        cnt+=1;
                    if(str1.at(j+1)=='#')
                        cnt+=1;
                    if(str2.at(j-1)=='#')
                        cnt+=1;
                    if(str2.at(j+1)=='#')
                        cnt+=1;
                    if(str3.at(j-1)=='#')
                        cnt+=1;
                    if(str3.at(j)=='#')
                        cnt+=1;
                    if(str3.at(j+1)=='#')
                        cnt+=1;
                    str2.at(j)=cnt+'0';
                    cnt=0;
                }
            }
            if(i == H-1){
                if(str3.at(0)=='.'){
                    if(str2.at(0)=='#')
                        cnt+=1;
                    if(str2.at(1)=='#')
                        cnt+=1;
                    if(str3.at(1)=='#')
                        cnt+=1;
                    str3.at(0)=cnt+'0';
                    cnt=0;
                }
                for(int j=1;;j++){
                    if(j == W-1){
                    if(str3.at(j)=='.'){
                        if(str2.at(j-1)=='#')
                            cnt+=1;
                        if(str2.at(j)=='#')
                            cnt+=1;
                        if(str3.at(j-1)=='#')
                            cnt+=1;
                        str3.at(j)=cnt+'0';
                        cnt=0;
                    }
                    cout << str3 << endl;
                    break;
                }
                    if(str3.at(j)=='.'){
                        if(str2.at(j-1)=='#')
                            cnt+=1;
                        if(str2.at(j)=='#')
                            cnt+=1;
                        if(str2.at(j+1)=='#')
                            cnt+=1;
                        if(str3.at(j-1)=='#')
                            cnt+=1;
                        if(str3.at(j+1)=='#')
                            cnt+=1;
                        str3.at(j)=cnt+'0';
                        cnt=0;
                    }
                }
                break;
            }
        }
    }
  }
}