#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int f, i, a, b, c, j;
	for (i=0; i<100; i++)
	{
		f=rand()%900+100;
		c=f;
		a=0;
		b=1;
		for(j=0; j<3; j++)
		{
			a+=c%10;
			b*=c%10;
			c/=10;
		}
		cout<<a<<" "<<b<<" "<<f<<"\n";
	}

	return 0;
}
