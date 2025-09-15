#include <bits/stdc++.h>
using namespace std;

int solve(const vector<int>& v, int n, vector<int>& dp) {
    if (n == 0) return 0;
    if (dp[n] != -1) return dp[n];

    int cost = solve(v, n-1, dp) + abs(v[n] - v[n-1]);
    if (n > 1) {
        cost = min(cost, solve(v, n-2, dp) + abs(v[n] - v[n-2]));
    }
    return dp[n] = cost;
}

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    

    vector<int> dp(n, -1);
    dp[0] = 0;
    for(int i =1;i<n;i++){
        int mincost = INT_MAX;
        for(int j =1;j<=k && i-j >=0;j++){
            mincost = min(mincost, dp[i-j] + abs(v[i] - v[i-j]));
        }
        dp[i] = mincost;
    }
    cout << dp[n-1]<< "\n";
}
