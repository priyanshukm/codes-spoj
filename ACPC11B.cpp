#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int t,n,m,min;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    min=10000000;
	    cin>>n;
	    int a[n];
	    for(int j=0;j<n;j++)
	        cin>>a[j];
	    cin>>m;
	    int b[m];
	    for(int j=0;j<m;j++)
	    {
	        cin>>b[j];
	        for(int k=0;k<n;k++)
	        {
	            if(abs(b[j]-a[k])<min)
	                min=abs(b[j]-a[k]);
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}
