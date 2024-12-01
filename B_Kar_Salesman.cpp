#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,x;
        ll sum=0;
        cin >> n >> x;
        vector<ll>v(n);
        for (ll i = 0; i < n; i++){
            cin >> v[i];
            sum+=v[i];
        }
        sort(v.begin(),v.end());
        ll a=(sum+x-1)/x;
        if(a>=v[n-1])cout << a << endl;
        else cout << v[n-1] << endl;
    }
return 0;
}