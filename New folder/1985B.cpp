// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//         int n;
//         cin >> n;
//         vector<int>vec;
//         for(int j=2;j<n;j++){
//             int s=j;
//             for (size_t i = 2; i <= n; i++){
//                 s+=s*i;
//             }
//             vec.push_back(s);
//         }
//     }    
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int s=2;
        for (size_t i = 2; s*i <= n; i++){
            s+=s*i;
        }
        int p=3;
        for (size_t i = 2; p*i <= n; i++){
            p+=p*i;
        }
        if(s>p || n==2)cout << 2 << endl;
        else if(p>s)cout << 3 << endl;
    }    
}