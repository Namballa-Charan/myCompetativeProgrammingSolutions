#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, ans;
        cin >> n >> l >> r;
        if (r > n)
        {
            ans = r;
        }
        if (l < n && n < r)
        {
            ans = n;
        }
        else
        {
            int minval = INT_MAX;
            for (int i = r; i >= l; i--)
            {
                int sum = 0;
                int temp = n;
                while (temp > 0)
                {
                    sum += temp % i;
                    temp /= i;
                    if (sum > minval)
                        break;
                }
                if (minval > sum)
                {
                    minval = sum;
                    ans = i;
                }
                if (minval == 1)
                    break;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}