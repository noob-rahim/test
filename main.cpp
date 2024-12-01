// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     int t;
// //     cin >> t;
// //     while (t--){
// //         long long n,p=0;
// //         long long sum1=0,sum2=0,sum,c=0;
// //         cin >> n;
// //         for(int i=0;i<=n;i++){
// //             c=pow(2,i);
// //             if(c>n){
// //                 p=i-1;break;
// //             }
// //         }
// //         for(int i=0;i<=p;i++){
// //             sum1+=pow(2,i);
// //         }
// //         sum1=2*sum1;
// //         sum2 = ((n*(n+1))/2) ;
// //         sum=sum2-sum1;
// //         cout << sum << endl;
// //     }    
// // }



// #include<bits/stdc++.h>
// using namespace std;

// int digitsum(int x){
//     int sum=0;
//     while(x){
//         sum+=x%10;
//         x=x/10;
//     }
//     return sum;
// }

// int main(){
//     int n,c=0,sum=0;
//     cin >> n;
//     if(n<10)cout << 0 << endl;
//     else{
//         int p = digitsum(n);
//         while(p>9){
//             p=digitsum(p);
//             c++;
//         }
//         cout << c+1 << endl;
//     }    
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//         int n,a,b,sum=0;
//         cin >> n >> a >> b;
//         if(2*a <= b){
//             sum= n*a;
//         }
//         else{
//             if(n%2==0){
//                 sum=n*b/2;
//             }
//             else sum= (n/2)*b + a;
//         }
//         cout << sum << endl;
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n,c,d;
//         cin >> n >> c >> d;
//         vector<int>vec;
//         for(int i=0;i<n*n;i++){
//             int val;
//             cin >> val;
//             vec.push_back(val);
//         }
//         sort(vec.begin(),vec.end());
//         int p = vec[0];
//         vector<int>V;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 V.push_back(p);
//                 p=p+c;
//             }
//             p = vec[0]+(i+1)*d;
//         }
//         sort(V.begin(),V.end());
//         if(vec==V)cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n,k,sum=0,p=1,s=0;
//         cin >> n >> k;
//         vector<int> vec,vec1,vec2;
//         for(int i=0;i<n;i++){
//             int val;
//             cin >> val;
//             s+=val;
//             vec.push_back(val);
//         }
//         if(k>s)cout << n << endl;
//         else{
//             for(int i=0;i<n;i++){
//                 if(i%2==0){
//                     vec1.push_back(vec[i]);
//                 }
//                 else if(i%2==1){
//                     vec2.push_back(vec[n-p]);
//                     p++;
//                 }
//             }
//         }
//     }
//     return 0;
// }





