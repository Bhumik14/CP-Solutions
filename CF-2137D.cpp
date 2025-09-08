#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while(T--){
        int N;
        cin>>N;

        vector<int>b(N);
        unordered_map<int, vector<int>>mp;
        for(int i =0;i<N;i++){
            cin>>b[i];
            mp[b[i]].push_back(i);
        }
        bool ok = true;
        for(auto it:mp){
            int val = it.first;
            int cnt = it.second.size();
            if(cnt%val != 0){
                ok = false;
                break;
            }
        }
        if(!ok){
            cout<<-1<<endl;
            continue;
        }

        vector<int>a(N);
        int color = 1;
        for(auto it: mp){
            int val = it.first;
            auto indices = it.second;

            for(int i=0;i<(int)indices.size();i++){
                a[indices[i]]= color;
                if((i+1)%val == 0) color++;
            }
            
        }

        for(int i =0;i<N;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
       
    }


    return 0;
}