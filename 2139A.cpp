#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--){
        int a, b;
        cin>>a>>b;
        int ans = 0;
        int l = lcm(a, b);
        if (l != a) ans++;
        if (l != b) ans++;

        cout << ans << "\n";
    }
    
    return 0;
}
