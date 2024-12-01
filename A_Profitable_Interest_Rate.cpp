#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin >> t;
    while (t--){
        ll a,b,c;
        cin >> a >> b;
        if(a>=b)cout << a << endl;
        else if(2*a<=b)cout << 0 << endl;
        else{
            c = b-a; 
            cout << a-c << endl;
        }
    }
    
return 0;
}