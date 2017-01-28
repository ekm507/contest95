#include<iostream>
#include<math.h>
#include<time.h>
#include<cstdlib>
using namespace std;
int main()
{
	long long a, i, j, k, l, q, p[5], f, x, y, z, w, r, lst;
	cin>>a;
	for(i=0; i<a; i++)
	{
		k=rand()%4+1;
		q=rand()%4+1;
		cout<<k<<" "<<q<<" ";
		w=rand()%4+1;
		if(w==1)--w;
		lst=rand()%10+1;
		z=rand()%4;
		if(w>4-z)z=4-w;
		for(j=0; j<z; j++)
		{
			f=rand()%4+1;
			lst=lst*(f+1);
			cout<<lst<<" ";
		}
		lst++;
		for(j=0; j<w; j++)
		{
			
			lst=lst*k+q;
			cout<<lst<<" ";
		}
		x=4-w-z;
		for(j=0; j<x; j++)
		{
			lst++;
			f=rand()%4+1;
			lst=lst*(f+1);
			cout<<lst<<" ";
		
		}
		cout<<w;
		cout<<"\n";
	}
	return 0;
}
