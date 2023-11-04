#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,i,sum=0;
	    cin>>n>>x;
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	       cin>>b[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>=x)
	        {
	            sum=sum+b[i];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
