#include <stdio.h>

int func4(int x, int y, int z);

int main(void)
{
	printf("%d\n", func4(14, 0, 12));
	return 0;
}

int func4(int x, int y, int z) //edx=x. esi=y, rdi=z
{
	int a=(x-y)/2; 
	int b=a+y; 
	if(b>z)
	{
		a=func4(b-1,y,z);
		a*=2;
		return a;
	}
	a=0;
	if(b<z)
	{
		a=func4(x,b+1,z);
		a=2*a+1;
		return a;
	}
	return a;
}
