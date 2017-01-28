#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long a, i, j, k, l;
	cin>>a;
	l=a*2;
	k=sqrt(a);
    for(j=a; j<l; j++)
    {
    k=sqrt(j);
	for (i=2; i<k; i++)
	{
		if(j%i==0)
		{
			break;
		}
	if(k-i<2)
		cout<<j<<"\n";
	}
	
    }
	cout<<"P\n";
	return 0;
}
