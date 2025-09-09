#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;

    while(T--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int total0 = count(s.begin(), s.end(), '0');
        int cnt0=0, cnt1=0;

        for(int i=0;i<total0;i++){
            if(s[i]=='1') cnt1++;
        }
        for(int i=total0;i<n;i++){
            if(s[i]=='0') cnt0++;
        }

        cout<<max(cnt0, cnt1)<<endl;
    }
}