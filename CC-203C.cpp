#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while(T--){
        int n;
        cin>>n;
        if(n == 1) cout<<200<<endl;
        else cout<<n*100<<endl;
    }
    
    return 0;
}