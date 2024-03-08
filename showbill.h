#include<stdio.h>
void showbill()
{
	FILE *fptr;
	bill b;
	fptr=fopen("billdb.txt","r");
	while(fscanf(fptr,"%d%s%s%d%d%d%s%d",&b.billno,&b.custname,&b.medname,&b.medqty,&b.medrate,&b.day,&b.month,&b.year)!=-1)
	{
			printf("%d\t%s\t%s\t%d\t%d\t%d\t%s\t%d\n",b.billno,b.custname,b.medname,b.medqty,b.medrate,b.day,b.month,b.year);
	}
}
