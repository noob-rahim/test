#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)return b;
    return gcd(b%a,a);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,flag=0,s=1;
        cin >> x;
        for(int i=x-1;i>=1;i--){
            int val=gcd(x,i);
            if((val+i)>flag){
                flag=val+i;
                s=i;
            }
        }
        cout << s << endl;
    }
}