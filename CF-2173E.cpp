#include <bits/stdc++.h>
using namespace std;

int compute_mex(const vector<int>& a) {
    int n = a.size();
    vector<bool> present(n + 2, false);
    for (int x : a)
        if (x >= 0 && x <= n) present[x] = true;
    for (int i = 0; ; i++)
        if (!present[i]) return i;
}

long long solve_case(int n, long long k, vector<int>& a) {
    unordered_map<int,int> freq;
    for (int x : a) freq[x]++;

    int times = (k <= 2 ? k : 2 + (k % 2));

    while (times--) {
        int m = compute_mex(a);
        vector<int> newA = a;
        for (int i = 0; i < n; i++) {
            if (a[i] > m || freq[a[i]] > 1)
                newA[i] = m;
        }
        if (newA == a)
            break;
        // Update frequencies
        freq.clear();
        for (int x : newA) freq[x]++;
        a.swap(newA);
    }

    long long sum = 0;
    for (int x : a) sum += x;
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << solve_case(n, k, a) << "\n";
    }
    return 0;
}
