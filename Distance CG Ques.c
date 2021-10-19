#include<stdio.h>
int main()
{
	float d,s,h,value;
	scanf("%f\n%f\n%f",&d,&s,&h);
	if((d<0) || (s<0) || (h<0))
	{
		printf("Invalid Input");
	}
	else
	{
		value=(d/s);
		if(value<=h)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
	return 0;
}
