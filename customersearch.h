#include<stdio.h>
 int getcustomer(int cid)
{
	FILE *fptr;
	fptr=fopen("customerdb.txt","r");
	int flag=0;
	customer c;
	while(fscanf(fptr,"%d%s%s%ld%s",&c.id,&c.name,&c.city,&c.mono,&c.email)!=-1)
	{
		if(c.id==cid)
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
	{
	printf("%d\t%s\t%s\t%ld\t%s\n",c.id,c.name,c.city,c.mono,c.email);
	return 1;
	}
	else{
		return 0;
	}
}
