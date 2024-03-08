#include<stdio.h>
#include<string.h>
 char searchsuppliername(char *s_name)
{
	FILE *fptr;
	fptr=fopen("supplierdb.txt","r");
	int flag=0;
	supplier s;
	while(fscanf(fptr,"%d%s%s%ld%s",&s.s_id,&s.s_name,&s.s_city,&s.s_mono,&s.s_email)!=-1)
	{
		if(strcmp(s.s_name,s_name)==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
	{
	printf("%d\t%s\t%s\t%ld\t%s\n",s.s_id,s.s_name,s.s_city,s.s_mono,s.s_email);
	return 1;
	}
	else{
		return 0;
	}
}
