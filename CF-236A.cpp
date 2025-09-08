#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    unordered_map<char, int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }

    if(mp.size() & 1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;



}