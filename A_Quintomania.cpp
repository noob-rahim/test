#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int>vec(n);
        bool f=true;
        for (int i = 0; i < n; i++){
            cin >> vec[i];
            if(i!=0){
                int a= abs(vec[i]-vec[i-1]);
                if(a!=5 && a!=7){
                    f=false;
                }
            }
        }
        if(f)cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
return 0;
}