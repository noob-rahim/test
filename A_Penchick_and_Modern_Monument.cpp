#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s=1,p=1;
        cin >> n;
        vector<int>vec(n),vec1;
        bool f= true;
        cin >> vec[0];
        for(int i=1;i<n;i++){
            cin >> vec[i];
            if(vec[i-1]<vec[i]){
                p++;
            }
            else if(vec[i-1] == vec[i]){
                s++;
                f=false;
                vec1.push_back(s);
            }
            else{
                s=1;
            }
        }
        if(p==n) cout << 0 << endl;
        else if(f) cout << n-1 << endl;
        else{
            auto m = *max_element(vec1.begin(), vec1.end());
            cout << n-m << endl;
        }
    }
return 0;
}