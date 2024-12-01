#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        long long s=0,t=0;
        cin >> n;
        vector<int>a,b;
        for (size_t i = 0; i < n; i++){
            int val;
            cin >> val;
            a.push_back(val);
        }
        for (size_t i = 0; i < n; i++){ 
            b.push_back(a[i]);
            t+=b[i];
            int m= *max_element(b.begin(),b.end());
            if(t==2*m)s++;
        }       
        cout << s << endl;
    }    
}