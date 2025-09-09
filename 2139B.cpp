#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while(T--){
        long long n, m;
        cin>>n>>m;
        priority_queue<int>q;
        for(int i =0;i<n;i++){
            long long elem;
            cin>>elem;
            q.push(elem);
        }
        long long ans =0;
        while(!q.empty() && m){
            long long top = q.top();
            q.pop();
            ans += m*top;
            m--;
        }
        cout<<ans<<"\n";

    }
    
    return 0;
}