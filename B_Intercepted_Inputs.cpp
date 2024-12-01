#include<bits/stdc++.h>
using namespace std;

pair<int, int> findPairWithSum(vector<int>& vec, int target) {
    int left = 0, right = vec.size() - 1;

    while (left < right) {
        int sum = vec[left] * vec[right];
        if (sum == target) {
            return {vec[left], vec[right]};
        }
        if (sum < target) left++;  
        else right--;            
    }
    return {-1, -1}; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        int target= k-2;
        vector<int>vec(k);
        for(int i=0;i<k;i++){
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        pair <int,int> result = findPairWithSum(vec, target);
        cout << result.first << " " << result.second << endl;       
    }
return 0;
}