#include <iostream>
using namespace std;

int n;

int fac(int num)
{
	int j=0;
	for(int i=1;i<=n;i++)
	{
		if(num%i==0)
		{
			j++;
		}
	}
	return j;
}
int main() 
{	
	int temp=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		temp=(fac(i)+1)/2;
		ans+=temp;
	}
	cout<<ans;
	return 0;
}	
	