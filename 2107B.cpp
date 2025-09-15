#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define read(v) for (auto &x : v) cin >> x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        read(v);

        sort(v.begin(), v.end());
        int maxi = v[n - 1];
        int mini = v[0];

        bool jerryWins = false;
        if (n == 1) {
            if (maxi - 1 - mini > k) jerryWins = true;
        } else {
            if (max(maxi - 1, v[n - 2]) - mini > k) jerryWins = true;
        }

        if (jerryWins) {
            cout << "Jerry\n";
        } else {
            ll total = accumulate(v.begin(), v.end(), 0LL);
            if (total % 2 == 0) {
                cout << "Jerry\n";
            } else {
                cout << "Tom\n";
            }
        }
    }

    return 0;
}
