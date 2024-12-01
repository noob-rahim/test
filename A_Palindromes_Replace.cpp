#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string s;
    vector<char>a,b;
    getline(cin,s);
    int n = s.size();
    for (int i = 0; i < n; i++){
        a.push_back(s[i]);
    }
    
    for(int i=n-1;i>=0;i--){
        b.push_back(s[i]);
    }
    bool flag= false;
    for (int i = 0; i < n; i++){
        if((a[i]==b[n-1-i])){
            flag=true;
        }
        else if(a[i]=='?'){
            flag=true;
            a[i]=b[n-1-i];
        }
    }
    if(flag){
        for (int i = 0; i <n; i++){
            cout << a[i] ;
        }
        cout << endl;
        
    }else cout << -1 << endl;
return 0;
}