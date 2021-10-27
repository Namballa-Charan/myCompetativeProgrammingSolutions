#include <bits/stdc++.h>
using namespace std;

int func(long int n,long int i)
{
    int sum=0;
    while (n > 0)
    {
        sum += n % i;
        n /= i;
        
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,r, ans;
        cin >> n >> r;
        if (2< n && n < r)
        {
            ans = n;
            cout<<ans<<"\n";
        }
        else
        {
            int minval = INT_MAX;
            for (long int i = r; i >= 2; i--)
            {
                int sum = 0;
                sum+=func(n,i);
                if (sum > minval)
                    break;
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