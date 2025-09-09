#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while(T--){
        int ans =0;
        for(int i =1;i<=10;i++){
            for(int j =1;j<=10;j++){
                char c;
                cin>>c;

                if(c=='X'){
                    int x = i, y = j;
                    if(x> 5) x = 11-x;
                    if(y>5) y = 11-y;

                    ans+= min(x, y);
                }
            }
        }

        cout<<ans<<"\n";
    }
    
    return 0;
}


