#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long k, x;
        cin >> k >> x;

        long long total = 1LL << k+1;
        long long c = x;
        long long v = total - x;

        int steps = 0;
        vector<int> ans;

        while (steps <= 120) {
            if (c == total / 2 && v == total / 2) {
                break;
            }

            if (c <= v) { 
                ans.push_back(1);
                v -= c;
                c *= 2;
            } else {
                ans.push_back(2);
                c -= v;
                v *= 2;
            }

            steps++;
        }

        reverse(ans.begin(), ans.end());

        if (steps <= 120 && c == total / 2 && v == total / 2) {
            cout << ans.size() << "\n";
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i] << (i + 1 == ans.size() ? '\n' : ' ');
            }
        } else {
            cout << 0 << "\n\n";
        }
    }

    return 0;
}
