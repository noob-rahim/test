#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
        int t;
        cin >> t;
        while (t--){
            ll n,r,sum=0,xtr=0;
            cin >> n >> r;
            r=2*r;
            vector<ll>v(n);
            for (ll i = 0; i < n; i++){
                cin >> v[i];
                if(v[i]%2==0){
                    sum+=v[i];
                    r-=v[i];
                }else{
                    sum+=v[i]-1;
                    xtr++;
                    r-=(v[i]-1);
                }
            }
            if(2*xtr<=r){
                sum+=xtr;
            }else{
                sum+=(r-xtr);
            }
            cout << sum << endl;
        }        
return 0;
}