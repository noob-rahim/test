#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s=1;
        cin >> n;
        for(int i=0;i<n;i++){
            cout << s + i*2 << " ";
        }
        //     if(i==1){
        //         cout << 1 << " ";
        //     }
        //     else if(i==2){
        //         cout << 3 << " ";
        //     }
        //     else if(i==3){
        //         cout << 5 << " ";
        //     }
        //     else{
        //         cout << 2*i - 1 << " ";
        //     }
        // }                                                                          
        cout << endl;
    }
return 0;
}