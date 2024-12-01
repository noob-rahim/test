#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int A=0,B=0,C=0,D=0;
        for(int i=0;i<a;i++){
            char val;
            cin >> val;
            if(val=='0')A++;
            if(val=='1')B++;
        }
        for(int i=0;i<b;i++){
            char val;
            cin >> val;
            if(val=='0')C++;
            if(val=='1')D++;
        } 
        int s= min(A,C)+ min(B,D);
        if(s)cout << s << endl;
        else cout << 0 << endl;
    }
}