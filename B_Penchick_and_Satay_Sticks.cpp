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
        for (int i = 0; i < n; i++){
            cin >> vec[i];
        }
        for (int i = 0; i < n-1; i++){
            if(vec[i]==vec[i+1]+1){
                swap(vec[i],vec[i+1]);
            }
        }
        bool f=false;
        for (int i = 0; i < n-1; i++){
            if(vec[i]>vec[i+1]){
                f=true;
            }
        }
        if(f)cout << "NO"<< endl;
        else cout << "YES" << endl;
    }
    
return 0;
}