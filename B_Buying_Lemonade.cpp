// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         ll n, k, sum = 0, p = 0;
//         cin >> n >> k;
//         vector<ll> vec(n); 
//         for (ll i = 0; i < n; i++) {
//             cin >> vec[i];
//         }
//         sort(vec.begin(), vec.end());
        
//         ll i = 0; 
//         while (i < n) {
//             if (vec[i] == 0) {
//                 i++;
//                 p++;
//                 // continue; 
//             }
//             else{
//                 sum += (n - i) * vec[i]; 
//                 p += (n - i) *vec[i];

//             // for (ll j = i+1; j < n; j++){
//             //     vec[j]-=vec[i];
//             // }

            

//                 if (sum >= k) {
//                     p -= (sum - k);
//                     break; 
//                 }
//             }
//         }
//         cout << p << endl;
//     }
// }




// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         ll n, k, sum = 0, p = 0;
//         cin >> n >> k;
//         vector<ll> vec(n); 
//         for (ll i = 0; i < n; i++) {
//             cin >> vec[i];
//         }
//         sort(vec.begin(), vec.end());

//         for (int i = 0; i < n; i++){

//             if (vec[i] == 0) {
//                 p++; 
//             }
//             else{
//                 sum+= (n - i) *vec[i];
//                 p+=(n - i) *vec[i];

//                 if (sum >= k) {
//                     p -= (sum - k);
//                     break; 
//                 }

//                 for(int j=i+1;j<n;j++){
//                     vec[j] -= vec[i];
//                 }
//             }
//         }
        
//         cout << p << endl;
//     }
// }
