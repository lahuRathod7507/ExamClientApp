#include<stdio.h>
void medicallist()
{
	FILE *fptr;
	medical m;
	fptr=fopen("medicaldb.txt","r+");
	while(fscanf(fptr,"%d\t%s\t%d\t%d\t%s\t%s\t%d\t%d\t %d\t%d\t%s\t%s\t%s\n",&m.m_id,&m.m_name,&m.m_rno,&m.m_cabno,&m.m_splname,&m.m_comname,&m.m_billno,&m.m_mcost,&m.m_qty,&m.m_sale,&m.m_purdate,&m.m_expdate,&m.m_manudate)!=-1)	      
	{
		printf("%d\t%s\t%d\t%d\t%s\t%s\t%d\t%d\t%d\t%d\t%s\t%s\t%s\n",m.m_id,m.m_name,m.m_rno,m.m_cabno,m.m_splname,m.m_comname,m.m_billno,m.m_mcost,m.m_qty,m.m_sale,m.m_purdate,m.m_expdate,m.m_manudate);
	}
}
