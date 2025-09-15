#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R, B;
    cin>>R>>B;

    int G = min(R, B);
    R -= G;
    B -= G;

    cout<<1*R+2*B+5*G<<endl;
    
    return 0;
}