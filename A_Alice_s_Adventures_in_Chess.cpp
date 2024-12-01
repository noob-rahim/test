 #include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b,x=0,y=0,p=0;
        cin >> n >> a >> b;
        string s;
        bool f=false;
        cin >> s;
        for (int i = 0; i < 10000; i++){
            int p=i%n;
            if(s[p]=='N') y++;
            else if(s[p]=='E')x++;
            else if(s[p]=='S')y--;
            else if(s[p]=='W')x--;
            // if(x==0 && y==0){
            //     f= false;
            //     break;
            // }
            if(x==a && y==b){
                f=true;
                break;
            };
        }
        if(f)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
return 0;
}