#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;
    char prev ='a';
    int count =0;
    int ans =0;
    for(char x: s){
        if(x != prev){
            prev = x;
            count = 1;
        }
        else{
            count++;
        }

        ans = max(ans, count);
    }
    cout<<ans<<endl;
    
    return 0;
}