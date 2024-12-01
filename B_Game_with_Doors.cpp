#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
      int a,b,c,d;
      cin >> a >> b >> c >> d;
      if(b<c) cout << 1 << endl;
      else if(b==c || a==d) cout << 2 << endl;
      else if ((a==c) && (b==d)){
          cout << b-a << endl;}
      else if ((a==c) && (b<d)){
          cout << b-a+1 << endl;}  
      else if ((a==c) && (b>d)){
          cout << d-a+1 << endl;} 
      else if ((b==d) && (a>c)){
          cout << b-a+1 << endl;}
      else if ((b==d) && (c>a)){
          cout << b-c+1 << endl;}
      else if ((a>c && b<d)){
          cout << b-a+2 << endl;}
      else if ((c>a) && (d<b)){
          cout << d-c+2 << endl;}
    }
}