#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while(T--){
        int n, a, b;
        cin>>n>>a>>b;

        if(n == a && n == b){
            cout<<"Yes"<<"\n";
        }
        else if(a+b >= n-1){
            cout<<"No"<<"\n";
        }
        else{
            cout<<"Yes"<<"\n";
        }
    }
    
    return 0;
}