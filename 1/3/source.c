#include <stdio.h>

void madd(void);

int main(void){
	madd();
	return 0;
}

void madd(void)
{
	int a[100], b[100];
	int i;
	
	for(i=0; i<100; i++)
	{
		a[i]=i-50;
		b[i]=i+2;
		printf("%d %d\n", a[i], b[i]);
	}
	
	int sum[100];
	
	for(i=0; i<100; i++)
	{
		sum[i]=a[i]+b[i];
		printf("%d\n", sum[i]);
	}
}
