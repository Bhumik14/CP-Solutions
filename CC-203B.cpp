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

        int chef;
        cin>>chef;
        int cnt = 1;
        for(int i = 1;i<N;i++){
            int elem;
            cin>>elem;
            if(elem >= chef) cnt++;
        }

        cout<<cnt<<endl;
    }
    
    return 0;
}