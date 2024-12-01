#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l,r,k;
        cin >> l >> r >> k;
        int s=r/k;
        if(s>=l){
            cout << s-l+1 << endl;
        }else cout << 0 << endl;
    }
return 0;
}