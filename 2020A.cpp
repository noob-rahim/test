// #include<bits/stdc++.h>
// using namespace std;

// int s = 0;

// int solve(int n, int k, int i) {
//     if (n == 0) return s; 
//     if(pow(k, i) == n)return s+1;
//     if (pow(k, i) > n) {
//         s++; 
//         n -= pow(k, i - 1); 
//         i=0;
//     }
//     else i++; 
//     return solve(n, k, i); 
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
        
//         if (k > n) {
//             cout << n << endl;
//         }
//         else if (k == 1) {
//             cout << n << endl; 
//         }
//         else {
//             s = 0; 
//             cout << solve(n, k, 0) << endl; 
//         }
//     }
// }





#include<bits/stdc++.h>
using namespace std;

int solve(long long n, long long k) {
    int s = 0;  // Step counter

    // Start with the largest power of k less than or equal to n
    long long current_power = 1;
    while (current_power * k <= n) {
        current_power *= k;  // Calculate powers of k incrementally
    }
    
    // Subtract largest powers of k from n greedily
    while (n > 0) {
        s += n / current_power;  // Add the number of times we can subtract this power
        n %= current_power;      // Update n with the remainder
        current_power /= k;      // Move to the next smaller power of k
    }

    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        if (k > n) {
            cout << n << endl;  // k is larger than n, so output n directly
        }
        else if (k == 1) {
            cout << n << endl;  // When k == 1, the result is just n (subtracting 1 each time)
        }
        else {
            cout << solve(n, k) << endl; 
        }
    }
}
