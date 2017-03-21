#include<iostream>

using namespace std;

main()
{
	int n;
	while(cin>>n&&n>=3&&n<=150)
	{
		for(int i=1;;i++)
		{
			int k=0;
			for(int j=1;j<n;j++)
				k=(k+i)%j;
			if(k==0)
			{cout<<i<<endl;break;}
		}
	}
}
