// #include<bits/stdc++.h>
// using namespace std;

// unsigned long long digitsum(unsigned long long x){
//     unsigned long long sum=0;
//     while(x){
//         sum+=x%10;
//         x=x/10;
//     }
//     return sum;
// }

// int main(){
//     unsigned long long s,c=0,sum=0,ab=1844674407370955161;
//     cin >> s;
//     if(s<10)cout << 0 << endl;
//     else if(s>ab)cout << 2 << endl;
//     else{
//         unsigned long long p = digitsum(s);
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
//         int a,b,c;
//         cin >> a >> b >> c;
//         if(c>b && b>a)cout <<"STAIR" << endl;
//         else if(b>a && b>c) cout << "PEAK" << endl;
//         else cout << "NONE" << endl;
//     }   
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while (t--){
//         int s;
//         cin >> s;
//         for(int p=1;p<=s;p++){
//         if(s%2==1){
//         for(int i=0;i<s;i++){
//           if(i%2==0){
//             cout << "##";
//           }
//           else if(i%2==1){
//             cout << "..";
//           }
//         }
//         cout << endl;
//         for(int i=0;i<s;i++){
//           if(i%2==0){
//             cout << "##";
//           }
//           else if(i%2==1){
//             cout << "..";
//           }
//         }
//         cout << endl;
//         }



//         else if(s%2==0){
//         for(int i=0;i<s;i++){
//           if(i%1==0){
//             cout << "##";
//           }
//           else if(i%2==0){
//             cout << "..";
//           }
//         }cout << endl;
//         for(int i=0;i<s;i++){
//           if(i%2==1){
//             cout << "##";
//           }
//           else if(i%2==0){
//             cout << "..";
//           }
//         }
//         cout << endl;
//         }
//         }



//     }
    
// }





// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int s;
//         cin >> s;
//         for(int i=0;i<2*s;i++){
//             for(int j=0;j<2*s;j++){
//                 int p=(floor(i/2)+floor(j/2));
//                 if(p%2==0)cout<<"#";
//                 else cout << ".";
//             }
//             cout << endl;
//         }
//     }
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int a,b;
        cin >> s;
        a=((int)s[0]-48)*10 + (int)s[1]-48;
        b=((int)s[3]-48)*10 + (int)s[4]-48;
        string c,d;

        if(a>12){
            a=a-12;
            c=to_string(a);
            d=to_string(b);
            if(a>=10 && b>=10){
            cout << c << ":" << d << " PM" << endl;
            }
            else if(a>=10 && b<10){
            cout << c << ":0" << d << " PM" << endl;                
            }
            else if(a<10 && b<10){
            cout << "0" << c << ":0" << d << " PM" << endl;   
            }
            else cout <<"0" << c << ":" << d << " PM" << endl;
        }
        else{
            c=to_string(a);
            d=to_string(b);
            if(a==12 && b<10){
                cout << "12" << ":0" << d << " PM" << endl;   
            }
            else if(a==12 && b>=10){
                cout << "12" << ":" << d << " PM" << endl;   
            }
            else if(a==0 && b<10){
                cout << "12" << ":0" << d << " AM" << endl;   
            }
            else if(a==0 && b>=10){
                cout << "12" << ":" << d << " AM" << endl;   
            }
            else if(a>=10 && b>=10){
                cout << c << ":" << d << " AM" << endl;
            }
            else if(a>=10 && b<10){
               cout << c << ":0" << d << " AM" << endl; 
            }
            else if(a<10 && b<10){
            cout << "0" << c << ":0" << d << " AM" << endl;   
            }
            else cout <<"0" <<  c << ":" << d << " AM" << endl;
        }   
    }
}