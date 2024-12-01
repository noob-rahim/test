// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a,b;
//         cin >> a >> b;
//         if(a>=b) cout << b << " " << a << endl;
//         else{
//             cout << a << " " << b << endl;
//         }
//     }   
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//         string s;
//         vector<char>vec1,vec2;
//         int f=0;
//         cin >> s;
//         if(s.length()==1){cout << "NO" << endl;}
//         else{
//             for(int i=0;i<s.length();i++){
//                 vec1.push_back(s[i]);
//             }
//             for(int i=1;i<s.length();i++){
//                 if(s[i]==s[i-1]){
//                     f=0;
//                 }
//                 else{
//                     f=1;
//                     break;
//                 }
//             }
//             if(f==0){
//                 cout << "NO"<< endl;
//             }
//             else{
//                 cout << "YES" << endl;
//                 for(int i=s.length()-1;i>=0;i--){
//                     vec2.push_back(s[i]);
//                 }
//                 if(vec1!=vec2){
//                     for(int i=0;i<s.length();i++){
//                         cout << vec2[i];
//                     }
//                     cout << endl; 
//                 }
//                 else{
//                     for(int i=1;i<s.length();i++){
//                         cout << vec2[i];
//                     }
//                     cout << vec2[0] <<endl;             
//                 }
//             }
//         }
//     }   
// }





#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int a,b,c,d,temp;
        cin >> a >> b >> c >> d;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        if(c>d){
            temp=c;
            c=d;
            d=temp;
        }
        if((b>c && b<d && a<c)||(a>c && a<d && b>d)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}