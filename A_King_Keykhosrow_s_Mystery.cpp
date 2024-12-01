#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b;
        for(ll i=min(a,b);i<(min(a,b)+1000000);i++){
            if(i%a==i%b){
                c=i;break;
            }
        }
        cout << c << endl;
    }
}