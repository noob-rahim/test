#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int x,y,k,m;
        cin >> x >> y >> k;
        if(x==0 && y==0){
            cout << 0 << endl;
        }
        else if(x==y && x<=k){
            cout << 2*x << endl;
        }
        
        else if(y>x){
        int a= y-x;
        if(x%k==0) m=(x/k)*2;
        else m=(x/k+1)*2;
        if(a%k==0)m+=(a/k)*2;
        else m+=(a/k + 1)*2;
        cout << m << endl;
        }
        else if(x>y){
        int a= x-y;
        if(y%k==0) m=(y/k)*2;
        else m=(y/k+1)*2;
        if(a%k==0)m+=(a/k)*2-1;
        else m+=(a/k + 1)*2-1;
        cout << m << endl;
        }
    }
}
