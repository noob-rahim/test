#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin >> t;
    while (t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(b>a){
            swap(a,b);
        }
        if(d>c){
            swap(c,d);
        }
        if((a==c && b==d) || (a==b && a<c) || (a<=c && b<=d)|| (a>c && b<d) || (a<c && b>d))cout << 0 << endl;
        else if((a>c && b>=c) || ((a==c && b>d) && b==c))cout << 4 << endl;
        else cout << 2 << endl;
    }
    
return 0;
}   