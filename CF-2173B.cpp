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
        for(int i = 0;i<N;i++){
            int elem;
            cin>>elem;

            cout<<N+1-elem<<" ";
        }
        cout<<endl;
    }
    return 0;
}