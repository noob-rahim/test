#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++){
            int val;
            cin >> val;
            vec.push_back(val);            
        }
        sort(vec.begin(),vec.end());
        int c=0,min,count=0;
        // while(!(vec.empty())){
        //     c++;
        //     min = *min_element(vec.begin(),vec.end());
        //     cout << min << "has occured" << c << "times" << endl;
        //     min=false;
        // }

        for (size_t i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        



        // min=*min_element(vec.begin(),vec.end());
        // for (int i = 1; i < n; i++){
        //     if(vec[i]==min){
        //         c++;
        //         min=vec[i];
        //     }
        //     if(c>=3){
        //         count++;
        //         min+=1;
        //     }
        // }
        // cout << count << endl;
    }
}
