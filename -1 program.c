#include<stdio.h>
int main()
{
	int num,sumn=0,sump=0,n=0,p=0;
	int sum,sumn_avg=0,sump_avg=0;
	scanf("%d",&num);
	while( num!=-1)
	{
		if(num<0)
		{
			sumn=sumn+num;
			n=n+1;
		}
		else
		{
			sump=sump+num;
			p=p+1;
		}
		scanf("%d",&num);
		
	}
	sumn_avg=sumn/n;
	sump_avg=sump/(float)p;
	printf("sump_avg=%f\n sump_avg=%f",sumn,sump);
}
