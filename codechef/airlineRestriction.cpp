#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t>0)
	{
	    int a,b,c,d,e;
	    cin>>a>>b>>c;
        cin>>d>>e;
	    int flag=0;
        cout<<"a->"<<a<<"b->"<<b<<"c->"<<c<<"d->"<<d<<"e->"<<e<<endl;
	    if(a<=e)
	    {
	        if(b+c<=d)
            {
                flag=1;
            }
	    }
        else if (b <= e)
        {
            if (a + c <= d)
            {
                flag=1;
            }
        }
        else if (c <= e)
        {
            if (b + a <= d)
            {
                flag=1;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
	}
	return 0;
}