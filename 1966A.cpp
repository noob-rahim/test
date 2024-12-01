// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//         int n,k;
//         cin >> n >> k;
//         vector<int>vec;
//         for (int i = 0; i < n; i++){
//             int val;
//             cin >> val;
//             vec.push_back(val);
//         }   
//         sort(vec.begin(),vec.end());
//         int count,min;
//         while (!(vec.empty())){
//             min= *min_element(vec.begin(),vec.end());
//             cout << min << "Has occurred" << count << endl;
//             auto it= min;
//             vec.erase(it);
//         }
//     }   
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,a=0;
//     cin >> n;
//     vector<int>vec;
//     for (int i = 0; i <n; i++){
//         int a;
//         cin >> a;
//         vec.push_back(a);
//     }
//     cout << "new array: "; 
//     for (int i = 0; i < n; i++){
//             if(vec[i]==vec[i+1]){
//                 a++;
//                 continue;
//             }
//         cout << vec[i] << " ";
//     }
//     cout << "\nRemoved element : " << n - a << endl;
// }






// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     bool bu= true;
//     while(bu){
//         vector<int>vec;
//         vector<char>v;
//         vector<char>str;
//         for (size_t i = 0; i < ; i++){
//             str.push_back(s[i]);
//         }
         
//         for (int i = 0; i < s.size(); i++){
//             int b=0;
//             for (size_t j = i+1; i < s.size(); i++){
//                 if(str[i]==str[j]){
//                     b++;
//                 }
//             }
//             if(b){
//                 v.push_back(str[i]);
//                 vec.push_back(b);
//             }
//         }
//         if(vec.size()==0){
//             for (size_t i = 0; i < s.size(); i++){
//                 cout << str[i];
//             }
//             bu=false;
//         }
//     }
    
// }




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a1,a2,b1,b2,sum;
        cin >> a1 >> a2 >> b1 >>b2;
        if(a1>a2){
            swap(a1,a2);
        }
        if(b1>b2)swap(b1,b2);
        if((a1 > b1 && a1 > b2 && a2 > b1 && a2 >b2) || (a1==b2)){
            cout << 4 << endl;
        }
        else if((a1==b1 && a1==b2 && a2>a1) || (a1==b2 && a2==b2 && a1>b1)){
            cout << 4 << endl;
        }
        else if(a1 < b1 && a1 <b2){
            cout << 0 << endl;
        }
        else if((a1 > b1 && a1>b2) || (a2 > b1 && a2 >b2)){
            cout << 2 << endl;
        }
        else cout << 0 << endl;
    }       
}
