#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll x,m,count=0;
        cin >> x >> m;
        for(ll i=1;i<=min(2*x,m);i++){
            if(i==x)continue;
            ll a= i^x;
            if(x%a==0 || i%a==0){
                count++;
            }
        }
        cout << count << endl;
    }
return 0;
}