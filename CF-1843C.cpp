#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--){
        long long N;
        cin >> N;
        long long ans = 0;
        while(N >= 1){
            ans += N;
            N = N/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
