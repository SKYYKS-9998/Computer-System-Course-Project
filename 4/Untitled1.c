#include <stdio.h>

 
int main(void){
	char c;
	int f12Flag;
	int stu_no_flag;
	int count; 
if(stu_no_flag==0)
{
	if(c == '2' && (count == 1 || count == 3 || count == 5 || count == 8 || count == 10))
	{
		count++;
		if(count == 11)
		{
			stu_no_flag=1;
			count=0;
		}
	}
	else if(c == '0' && (count == 2 || count == 4))
		count++;
	else if(c == '1' && (count == 6 || count == 7))
		count++;
	else if(c == '6' && count == 9)
		count++;
}
else if(stu_no_flag==1)
{
	if(c == '2' && (count == 1 || count == 3 || count == 5 || count == 8 || count == 10))
		count++;
	else if(c == '0' && (count == 2 || count == 4))
		count++;
	else if(c == '1' && (count == 6 || count == 7))
		count++;
	else if(c == '6' && count == 9)
		count++;
	else if(c == '-' && count == 11)
	{
		count++;
		stu_no_flag=0;
	}
	else if((c > 47 && c < 58) && count == 0)
		stu_no_flag=0;
}

if(f12Flag && stu_no_flag && (c == 'z' || c == 'g'))
	c='*';
}

