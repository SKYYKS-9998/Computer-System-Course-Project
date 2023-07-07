#include <stdio.h>

int main(void)
{
	int src[2048][2048]={0};
	int dst[2048][2048];
	int i, j;
	for(j=0; j<2048; j++)
		for(i=0; i<2048; i++)
			dst[i][j]=src[i][j];
	return 0;
}


