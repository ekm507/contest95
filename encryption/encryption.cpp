#include<iostream>
#include<math.h>
#include<time.h>
#include<cstdlib>
using namespace std;
int main()
{
	long long a, i, j, k, l, q[5], p[5], f;
	cin>>a;
	for(i=0; i<a; i++)
	{
		k=rand()%9+1;
		f=rand()%2;
		for(j=0; j<5; j++)
		{
			q[j]=rand()%9+1;
			cout<<q[j];
		}
		cout<<" ";
	    if(!f)
	    {
		for(j=0; j<5; j++)
			cout<<(q[j]+k)%10;
		cout<<" ";
		for(j=0; j<5; j++)
		{
			p[j]=rand()%9+1;
			cout<<p[j];
		}
	    }
	    else
	    {
		for(j=0; j<5; j++)
		{
			p[j]=rand()%9+1;
			cout<<p[j];
		}
		cout<<" ";
    	    	for(j=0; j<5; j++)
			cout<<(q[j]+k)%10;
		
	    }
		cout<<" ";
		for(j=0; j<5; j++)
			cout<<(10+p[j]-k)%10;
		cout<<"\n";
	}
	return 0;
}
