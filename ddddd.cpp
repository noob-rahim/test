//gcd_lcm
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)return b;
    return gcd(b%a,a);
}
int lcm(int a,int b){
    return(a*b)/gcd(a,b);
}

int main(){
    int x,y;
    cin >> x >> y;
    cout << lcm(x,y) << endl;
    cout << gcd(x,y);
}


//prime_factorization
#include<bits/stdc++.h>
using namespace std;

bool is_prime(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int x;
    cin >> x;
    vector<int>prime_factor;
    if(is_prime(x)){
        cout << x << endl;
    }
    else{
        for(int i=2;i<=x;i++){
            while(x%i==0){
                prime_factor.push_back(i);
                x=x/i;
            }
        }
        for(int it : prime_factor){
            cout << it << " ";
        }
    }
}


//bezouts_co-efficient
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b,int &x,int &y){
    if(b==0){
        x=1;y=0;
        return a;
    }
    int x1,y1;
    int d= gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}

int main(){
    int a,b,x,y;
    cin >> a >> b;
    int g=gcd(a,b,x,y);
    cout << g << endl;
    cout << x << " " << y << endl;
}


//chinese_remainder_theorem
// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a,int b,int& x,int& y){
//     if(b==0){
//         x=1;y=0;
//         return a;
//     }
//     int x1,y1;
//     int d=gcd(b,a%b,x1,y1);
//     x=y1;
//     y=x1-y1*(a/b);
//     return d;
// }

// int mod(int a,int b){
//     int x,y;
//     int g = gcd(a,b,x,y);
//     return x;
// }

// int main(){
//     int a,a1,a2,m,m1,m2;
//     cin >> a >> a1 >> a2 >> m >> m1 >> m2;
//     int M= m*m1*m2;
//     int M1,M2,M3;
//     M1=M/m;
//     M2=M/m1;
//     M3=M/m2;
//     int x= a*mod(M1,m)*M1+a1*mod(M2,m1)*M2+a2*mod(M3,m2)*M3;
//     cout << x << endl;
// }


//sieve_of_eratosthenes
#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int x;
    cin >> x;
    if(x<2)cout << x;
    else{
        for (int i = 2; i < x; i++){
            if(is_prime(i))cout << i << " ";
        } 
    }
}