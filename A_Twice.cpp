// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//         int n,s=0;
//         cin >> n;
//         vector<int> v(n),vec;
//         for (int i = 0; i < n; i++){
//             cin >> v[i];
//         }
//         sort(v.begin(),v.end());
//         for (int i = 0; i < n-1; i++){
//             if((v[i]==v[i+1])&& v[i]!=vec[i])s++;
//             vec.push_back(v[i]);
//             i++;
//         }
//         cout << s << endl;
//     }
    
// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, s = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        
        for (int i = 0; i < n - 1; i++) {  
            if (v[i] == v[i + 1]) {
                s++;
                i++; 
                // while (i < n - 1 && v[i] == v[i + 1]) {  
                //     i++;
                // }
            }
        }
        
        cout << s << endl;
    }
    
    return 0;
}
