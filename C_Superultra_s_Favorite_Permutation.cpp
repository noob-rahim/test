#include<bits/stdc++.h>
using namespace std;



int isPrime(int n) {
    if (n <= 1) {
        return 2;
    } else {
        int cnt = 0;  

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                cnt++;
                break;  
            }
        }

        if (cnt > 0) {
            return 2;  
        } else {
            return 1;  
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a;
        bool f=false;
        cin >> n;
        if(n%2){               
            for(int i=2;i<n;i+=2){
                int p = n+i;
                int q = isPrime(p);
                if(q%2==0){
                    a=i;
                    f=true;break;
                }
            }
            if(f==false){
                cout << -1 << endl;
            }
            else{
                for(int i=1;i<=n;i+=2){
                    cout << i << " ";
                }
                cout << a << " ";
                for(int i=2;i<=n;i+=2){
                    if(i==a)continue;
                    cout << i << " ";
                }
                cout << endl;
            }
        }
        
        else{
            for(int i=2;i<=n;i+=2){
                int p = n-1+i;
                int q = isPrime(p);
                if(q%2==0){
                    a=i;
                    f=true;break;
                }
            }
            if(f==false){
                cout << -1 << endl;
            }
            else{
                for(int i=1;i<=n;i+=2){
                    cout << i << " ";
                }
                cout << a << " ";
                for(int i=2;i<=n;i+=2){
                    if(i==a)continue;
                    cout << i << " ";
                }
                cout << endl; 
            }       
        }

    }
return 0;
}   