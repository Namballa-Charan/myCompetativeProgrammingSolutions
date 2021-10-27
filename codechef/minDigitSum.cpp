#include <iostream>
using namespace std;

int min(int arr[],int size)
{
    int min=arr[0];
    int loc=0;
    for(int i=0;i<size;i++)
    {
        if(min>=arr[i])
        {
            min=arr[i];
            loc=i;
        }
    }
    return loc;
}
void fun(int arr[],int len,int n,int i,int l,int r)
{
    int ans=0;
    while(n>0)
    {
        int rem=n%i;
        ans+=rem;
        n=n/i;
    }
    int pos = len-((r-i)+1);
    arr[pos]=ans;
}
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,l,r;
	    cin>>n>>l>>r;
        int len=(r-l)+1;
        int arr[len];
	    for(int i=l;i<=r;i++)
	    {
	        fun(arr,len,n,i,l,r);
	    }
        int ans=min(arr,len);
        ans+=l;
        cout<<ans<<endl;
	}
	return 0;
}
