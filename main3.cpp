// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int k,q;
//         cin >> k >> q;
//         set<int>K,Q,V;
//         for(int i=0;i<k;i++){
//             int val;
//             cin >> val;
//             K.push_back(val);
//         }
//         for(int i=0;i<q;i++){
//             int val;
//             cin >> val;
//             if(val<K[0]) cout << val << " ";
//             else cout << K[0]-1 << " ";
//         }
//         cout << endl;
//     }
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int k,s;
//         cin >> k;
//         set<int>vec;
//         for(int i=0;i<k;i++){
//             int val;
//             cin >> val;
//             vec.insert(val);
//         }
//         s=k-vec.size();
//         cout << s << endl;
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         if(n<3)cout << 0 << endl;
//         else{
//         vector<int> vec;
//         set<int>seee;
//         for (int i = 0; i < n; i++){
//             int val;
//             cin >> val;
//             vec.push_back(val);
//             seee.insert(val); 
//         }
//         sort(vec.begin(),vec.end());
//         int t=vec[0],c=0,s=0;
//         for (int i = 1; i < n; i++){
//             if(t==vec[i]){
//                 c++;
//                 t=vec[i];
//             }
//             if(c>2)s++;
//         }
//         cout << s << endl;
//         }               
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;

// vector<int>primeresult(int n){
//     vector<bool>prime(n+1,true);
//     prime[0]=false;
//     prime[1]=false;
//     for (int i=2;i*i<=n;i++) {
//         if (prime[i]){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=false;
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(prime[i]){
//             cout<<i<<" ";
//         }
//     }  
// }

// int main(){
//     int n;
//     cout << "Enter number:";
//     cin >> n;
//     primeresult(n);
// }



// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a1, int b, int& x, int& y) {
//     if (b == 0) {
//         x = 1;
//         y = 0;
//         return a1;
//     }
//     int x1,y1;
//     int d = gcd(b, a1 % b, x1, y1);
//     x = y1;
//     y = x1 - y1 * (a1 / b);
//     return d;
// }

// int main(){
//     int a1,b; cin>>a1>>b;
//     int x,y;
//     int g = gcd(a1,b,x,y);
//     cout<<g<<endl;
//     cout<<x<<" "<<y<<endl;   
// }


#include<bits/stdc++.h>
using namespace std;
int gcd(int a1, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a1;
    }
    int x1, y1;
    int d = gcd(b, a1 % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a1 / b);
    return d;
}
int mod(int a1,int b){
    int x,y;
    int g = gcd(a1,b,x,y);
    return x;
}

int main(){
    int a,a1,a2, m,m1,m2;
    cin>>a>>a1>>a2>>m>>m1>>m2;
    int M = m*m1*m2;
    int M1 = M/m;
    int M2 = M/m1;
    int M3 = M/m2;
    int x =a*mod(M1,m)*M1+a1*mod(M2,m1)*M2+a*mod(M3,m2)*M3;
    cout<<x<<endl;
}
