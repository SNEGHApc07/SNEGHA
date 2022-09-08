#include<stdio.h>
int main()
{
	int tot,stf,std,def;
	printf("enter the total number of users:",tot);
	scanf("%d",&tot);
	
	printf("enter total staff user:",stf);
	scanf("%d",&stf);
	def=stf/3;
	std=tot-stf-def;
	printf("the student users are: %d",std);
	
}
