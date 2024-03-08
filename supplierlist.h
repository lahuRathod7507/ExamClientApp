#include<stdio.h>
void supplierlist()
{
	FILE *fptr;
	supplier s;
	fptr=fopen("supplierdb.txt","r");
	while(fscanf(fptr,"%d%s%s%ld%s",&s.s_id,&s.s_name,&s.s_city,&s.s_mono,&s.s_email)!=-1)
	{
			printf("%d\t%s\t%s\t%ld\t%s\n",s.s_id,s.s_name,s.s_city,s.s_mono,s.s_email);
	}
}
