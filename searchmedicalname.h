#include<stdio.h>
#include<string.h>
 char searchmedicalname(char *m_name)
{
	FILE *fptr;
	fptr=fopen("medicaldb.txt","r");
	int flag=0;
	medical m;
	while(fscanf(fptr,"%d%s%d%d%s%s%d%d%d%d%s%s%s",&m.m_id,&m.m_name,&m.m_rno,&m.m_cabno,&m.m_splname,&m.m_comname,&m.m_billno,&m.m_mcost,&m.m_qty,&m.m_sale,&m.m_purdate,&m.m_expdate,&m.m_manudate)!=-1)    
	{
		if(strcmp(m.m_name,m_name)==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
	{
	printf("%d\t%s\t%d\t%d\t%s\t%s\t%d\t%d\t %d\t%d\t%s\t%s\t%s\n",m.m_id,m.m_name,m.m_rno,m.m_cabno,m.m_splname,m.m_comname,m.m_billno,m.m_mcost,m.m_qty,m.m_sale,m.m_purdate,m.m_expdate,m.m_manudate);       
	return 1;
	}
	else{
		return 0;
	}
}
