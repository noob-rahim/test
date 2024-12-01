#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        ll sum=0;
        cin >> n;
        vector<ll>a(n);
        for (ll i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        sum=(a[n-1]-a[0])*(n-1);
        cout << sum << endl;
    }
return 0;
}


