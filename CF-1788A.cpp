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
        int cnt = 0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i] == 2){
                cnt++;
            }
        }


        int k = -1;
        int currcnt =0;
        
        if(cnt%2 == 1) {
            cout<<-1<<"\n";
            continue;
        }
        if(cnt == 0){
            cout<<1<<"\n";
            continue;
        }

        for(int i =1;i<=n-1;i++){
            if(v[i-1] == 2) currcnt++;

            if(currcnt == cnt/2){
                k = i;
                break;
            }
        }
        cout<<k<<"\n";
    }
    
    return 0;
}