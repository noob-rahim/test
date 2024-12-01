// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         ll n, k;
//         cin >> n >> k;

//         map<ll , ll> brand_cost;
        
//         for (int i = 0; i < k; i++) {
//             ll b,c;
//             cin >> b >> c;
//             brand_cost[b] += c;
//         }

//         vector <ll> cost;
        
//         for(auto& entry : brand_cost){
//             cost.push_back(entry.second);
//         }

        
//         sort(cost.rbegin(), cost.rend());
  
//         ll s = 0;
//         for (int i = 0; i < min(n, k); i++) {
//             s += cost[i];
//         }

//         cout << s << endl;
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
        int n, k;
        cin >> n >> k;

        unordered_map<int, ll> brand_cost_map;

        for (int i = 0; i < k; i++) {
            int brand, cost;
            cin >> brand >> cost;
            brand_cost_map[brand] += cost; 
        }

        vector<ll> costs;

        for (auto& entry : brand_cost_map) {
            costs.push_back(entry.second);
        }

        sort(costs.rbegin(), costs.rend());

        ll total_cost = 0;
        
        for (int i = 0; i < min(n, (int)costs.size()); i++) {
            total_cost += costs[i];
        }

        cout << total_cost << endl;
    }

    return 0;
}
