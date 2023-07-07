#include <stdio.h>

int a;
int func4(int w1, int w0);

int main(void)
{
	scanf("%d", &a);
	printf("%d\n", func4(a,6));
	return 0; 
}

int func4(int w1, int w0)
{
	if(w0==0)
		return 0;
	int w19=w0;
	w0=w1;
	if(w19==1)
		return w1;
	int w20=w1;
	int w21;
	w0=w19-1;
	w0=func4(w1, w0);
	w21=w20+w0;
	w1=w20;
	w0=w19-2;
	w0=func4(w1,w0);
	w0+=w21;
	return w0;
}
