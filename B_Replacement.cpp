#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s,r;
        cin >> s >> r;
        int a=0,b=0;
        for (int i = 0; i < n; i++){
            if(s[i]=='0') a++;
            else b++;
        }
        if(a==0 || b==0){
            cout<<"NO"<<endl;
        }
        else{
            for (int i = 0; i < n-1; i++){
                if(r[i]=='0') b--;
                else a--;
            }
            if((a==0 && b==1)|| (a==1 && b==0))cout << "YES" << endl;
            else cout << "NO" << endl;
        }        
    }
}