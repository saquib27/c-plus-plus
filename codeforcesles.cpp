#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        vector<int> a(n + 1), b(n + 1);
        vector<int> posA(n + 1), posB(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            posA[a[i]] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            posB[b[i]] = i;
        }

        vector<long long> add(n + 2, 0);

        for (int item = 1; item <= n; item++)
        {
            int L = max(posA[item], n - posB[item] + 1);
            if (L <= n)
            {
                add[L] += v[item];
            }
        }

        long long cur = 0, best = 0;
        for (int x = 1; x <= n; x++)
        {
            cur += add[x];
            best = max(best, cur);
        }

        cout << best << "\n";
    }
    return 0;
}
