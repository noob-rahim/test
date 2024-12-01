#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,k;
        cin >> a >> b >> k;
        if(a>b){
            int d=a-b;
            cout << 2*(ceil(b/k)) + (ceil(d/k))*2-1 << endl;
        }
        else{
            int d=b-a;
            cout << 2*(ceil(a/k)) + (ceil(d/k))*2-1 << endl;
        }
        
    }

}