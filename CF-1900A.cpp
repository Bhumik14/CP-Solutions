#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int count = 0;
        int ans = 0;
        int found = false;
        for(int i =0;i<N;i++){
            char c;
            cin>>c;
            if(c=='.'){count++; ans++;}
            else count = 0;

            if(count >= 3){
                found = true;
            }


        }

        if (!found) cout << ans << endl;
        else cout<<2<<endl;
    }
    return 0;
}