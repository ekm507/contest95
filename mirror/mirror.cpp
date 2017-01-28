#include<iostream>
#include<math.h>
#include<time.h>
#include<cstdlib>
using namespace std;
int main()
{
	long long a, i, j, k, l, q;
	randomize();
	cin>>a;
	for(i=0; i<a; i++)
	{
		k=rand()%179+1;
		q=rand()%90;
		l=180-k-q;
		if(l>0)cout<<k<<" "<<q<<" "<<l<<"\n";
		else --i;
	}
	return 0;
}
