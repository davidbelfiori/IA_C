#include <stdlib.h>
#include <stdio.h>


float potenze (int *v,int x,int n){
	int tx=1;
	float y=0;
	for (int i = 0; i < n; ++i)
	{
		y+= v[i]*tx;
		tx*=x;
	}
	return y;
}


int main(int argc, char const *argv[])
{
	int v[]= {2,2,2};
	printf("%f \n",potenze(v,1,3) );
	return 0;
}