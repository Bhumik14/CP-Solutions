#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while(T--){
        int k, x;
        cin>>k>>x;

        for(int i =0;i<k;i++){
            x = x*2;
        }

        cout<<x<<endl;
    }
    return 0;
}