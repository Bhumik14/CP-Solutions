#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n;
        cin>>n;

        long long prev;
        cin>>prev;
        long long ans =0;
        for(int i=1;i<n;i++){
            long long e;
            cin>>e;
            if(prev > e){
                ans += prev-e;
            }
            else{
                prev = e;
            }
        }

        cout<<ans<<endl;
    
    return 0;
}