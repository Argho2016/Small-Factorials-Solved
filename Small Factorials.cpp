#include<iostream>
using namespace std;
int main()
{
	int t,i=1,m=1,x,temp,n,a[200]={};
	cin>>t;
	while(t--)
	{ int j;
		cin>>n;
		a[0]=1;
		m=1;
		for(i=1;i<=n;i++)
		{   int temp=0;
			for(j=0;j<m;j++)
			{
				x=a[j]*i+temp;
				a[j]=x%10;
				temp=x/10;
			}
			while(temp>0)
			{
				a[j]=temp%10;
				temp=temp/10;
				j++;
				m++;
			}

		}
             for(int k=m-1;k>=0;k--)
             cout<<a[k];
             cout<<endl;
	}
}
