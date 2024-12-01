#include<bits/stdc++.h>
using namespace std;

int getIndex(vector<int> v, int K) 
{ 
    auto it = find(v.begin(), v.end(), K);  
    if (it != v.end())  
    {
        int index = it - v.begin(); 
        return index; 
    } 
    else { 
        return 0; 
    } 
} 


int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int>vec;
        if(n==1){
            int s;
            cin >> s;
            cout << 1+s << endl;
        }
        else if(n==2){
            int a,b;
            cin >> a >>b ;
            if(a>b)cout << 1+a << endl;
            else cout << 1+b << endl;
        }
        else if(n==3){
            int a,b,c;
            cin >> a >> b >> c;
            if(a+c+1 > b){
                if(a>c){
                    cout << a+2 << endl;
                }
                else cout << c+2 << endl;
                
            }
            else cout << b+1 << endl;
        }
        else{
            for (int i = 0; i < n; i++){
                int s;
                cin >> s;
                vec.push_back(s);
            }
            int max_val = *max_element(vec.begin(), vec.end());
            int b=getIndex(vec,max_val); 
            if(b %2==0){
                int p =(n+1)/2 + max_val-1;
                cout << p << endl;
            }
            else {
                int p =(n+1)/2 + max_val-1;
                cout << p << endl;
            }
        }
    }    
}