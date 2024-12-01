#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        vector<char>a,b;
        for (int i = 0; i < 3; i++){
            char c;
            cin >> c;
            a.push_back(c);
        }
        for (int i = 0; i < 3; i++){
            char c;
            cin >> c;
            b.push_back(c);
        }
        for (int i = 0; i < 3; i++){
            if(i==0)cout << b[0];
            else cout << a[i];
        }
        cout << " ";
        for (int i = 0; i < 3; i++){
            if(i==0)cout << a[0];
            else cout << b[i];
        }        
        cout << endl;
    }
    
}