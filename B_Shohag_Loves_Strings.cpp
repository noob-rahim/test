#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool f=false;
        int a;
        if(s.size()==1){
            cout << -1 << endl;
        }
        else if(s.size()==2){
            if(s[0]==s[1]){
                cout << s[0] << s[1] << endl;
            }else cout << -1 << endl;
        }
        else if(s.size()==3 && ((s[0]==s[1]) || s[1]==s[2])){      
            if(s[0]==s[1])cout << s[0] << s[1] << endl;
            else cout << s[1] << s[2] << endl;
        }
        else{
            for(int i=1;i<s.size()-1;i++){
                if((s[i]!=s[i-1]) && (s[i]!=s[i+1]) && (s[i+1]!=s[i-1])){
                    a=i-1;
                    f=true;
                    break;
                }
            }
            if(f){
                for(int i=a;i<a+3;i++){
                    cout << s[i] ;
                }
                cout << endl;
            }else{
                cout << -1 << endl;
            }
        }
    }
return 0;
}