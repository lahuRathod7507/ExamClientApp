#include<stdio.h>
void customerlist()
{
	FILE *fptr;
	customer c;
	fptr=fopen("customerdb.txt","r");
	while(fscanf(fptr,"%d%s%s%ld%s",&c.id,&c.name,&c.city,&c.mono,&c.email)!=-1)
	{
			printf("%d\t%s\t%s\t%ld\t%s\n",c.id,c.name,c.city,c.mono,c.email);
	}
}
