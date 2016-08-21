#include <iostream>
using namespace std;
 
int reverse(int x)
{
	int k,rev=0,num;
	for(k=x;k!=0;k/=10)
	{
		num=k%10;
		rev=rev*10+num;
	}
	return rev;
}
 
int main() 
{
	int i,tcase,n1,n2,rn1,rn2;
	int sum,rsum[10000];
	cin>>tcase;
	for(i=0;i<tcase;i++)
	{
		cin>>n1>>n2;
		rn1=reverse(n1);
		rn2=reverse(n2);
		sum=rn1+rn2;
		rsum[i]=reverse(sum);
	}
	for(i=0;i<tcase;i++)
	{
		cout<<rsum[i]<<endl;
	}
	return 0;
}	