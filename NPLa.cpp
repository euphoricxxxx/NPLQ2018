#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t, n, k;
	cin>>t;
	if(t>0 && t<101)
	{
		while(t--)
		{
			cin>>n>>k;
			int p[n], i=0, sum=0;
			for(i=0;i<n;i++)
				cin>>p[i];
			sort(p, p+n, greater<int>());
			for(i=0;i<k;i++)
			{
				sum+=p[i];
			}	
			cout<<sum<<endl;
		}
	}
}
