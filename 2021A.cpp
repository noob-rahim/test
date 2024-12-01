#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<ll, vector<ll>, greater<ll>> minHeap; // Min-heap

        for (int i = 0; i < n; i++) {
            ll value;
            cin >> value;
            minHeap.push(value);
        }

        while (minHeap.size() > 1) {
            ll first = minHeap.top(); minHeap.pop();
            ll second = minHeap.top(); minHeap.pop();
            ll newValue = (first + second) / 2; // Floor division
            minHeap.push(newValue); // Push the new value into the heap
        }

        cout << minHeap.top() << endl; // The last remaining element
    }
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (ll i = 0; i < n; i++) {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        ll i=1;
        while (n > 2) {
            vec[i] = (vec[0] + vec[1]) / 2;
            i++;
            n--;
        }

        cout << vec[i] << endl;
    }
    return 0;
}
