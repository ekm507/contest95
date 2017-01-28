#include<iostream>
#include<math.h>
#include<time.h>
#include<cstdlib>
using namespace std;
int main()
{
	long long a, i, j, k, l, q;
	cin>>a;
	for(i=0; i<a; i++)
	{
		k=rand()%7;
		q=rand()%366;
		cout<<k<<" "<<q<<" ";
		l=(q+k-1)%7;
		cout<<l<<"\n";
	}
	return 0;
}
