#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    int t,r[5];
    cin>>t;
    while(t--)
    {
        cin>>r[0]>>r[1]>>r[2]>>r[3]>>r[4];
        int draw=0,india=0,england=0;
        for(int i=0;i<5;i++)
        {
            if(r[i]==0) draw++;
            if(r[i]==1) india++;
            if(r[i]==2) england++;
        }
        if(india==england) cout<<"draw";
        else if(india>england) cout<<"india";
        else cout<<"england";
    }
}