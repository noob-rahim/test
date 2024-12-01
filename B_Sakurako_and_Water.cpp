// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//         ll n,min=0,sum=0;
//         cin >> n;
//         ll a= n*n;
//         vector<ll>v(a),vec(n);
//         for (ll i = 0; i < a; i++){
//             cin >> v[i];    
//         }
//         for (ll i = 0; i < n; i++){
//             for (ll j = i; j < a; j=j+n+1){
//                 if(v[j]<=min)min=v[j];
//             }
//             vec[i]=min;
//             sum+=vec[i];
//         }
//         cout << sum*(-1) << endl;
         
//     }    
// return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         ll a = n * n;
//         vector<ll> v(a);

//         for (ll i = 0; i < a; i++) {
//             cin >> v[i];    
//         }

//         ll sum = 0;

//         for (ll i = 0; i < a; i++) {
//             ll minHeight = 0;  
//             for (ll j = i; j < a; j += (n + 1)) { 
//                 if (v[j] <= minHeight) {
//                     minHeight = v[j]; 
//                 }
//                 v[j]=0;
//             }
//             sum += minHeight; 
//         }

//         cout << -sum << endl;
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a = n * n;
        vector<ll> v(a);

        for (ll i = 0; i < a; i++) {
            cin >> v[i];    
        }

        ll totalMagic = 0;

        // Process the matrix
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                // Check if we have a lake at (i, j)
                if (v[i * n + j] < 0) {
                    // Count how much we need to raise it
                    ll neededMagic = -v[i * n + j];
                    totalMagic += neededMagic;

                    // Apply the magic to the diagonal elements
                    for (ll k = 0; k + i < n && k + j < n; k++) {
                        v[(i + k) * n + (j + k)] += neededMagic;
                    }
                }
            }
        }

        cout << totalMagic << endl;
    }
    return 0;
}
