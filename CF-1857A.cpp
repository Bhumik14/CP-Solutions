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
        int sum = 0;
        for(int i=0;i<n;i++){
            int elem;
            cin>>elem;
            sum+=elem;
        }

        if(sum%2 == 0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    
    return 0;
}