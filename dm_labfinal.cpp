#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    int x;
    cin >> x;
    int a=2,b;
    b=x-a;
    for(int i=0;i<=x/2;i++){
        if(is_prime(a) && is_prime(b)){
            cout << a << " " << b;
            return 0;
        }
        a++;b--;
    }
}