#include <bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int n,m;
        cin>>n;
        ll int A[n],B[n],C[n];
        for(int i=0; i<n; i++)
        {
            cin>>B[i];
        }
        m=sizeof(B)/sizeof(B[0]);
        sort(B,B+m);
        for(int i=0; i<n; i++)
        {
            C[i] = ((B[i] + i) % B[i]);
            A[i]=B[i]+1;
            //cout<<C[i]<<"\t";
            cout<<A[i]<<"\t";
        }
        cout<<"\n";
    }
}