#include"bill.h"
void billslip(bill b)
{
	FILE *fptr;
	
   fptr=fopen("E:\\MedicalStoreManagement\\billdb.txt","a");
   fprintf(fptr,"%d\t%s\t%s\t%d\t%d\t%d\t%s\t%d\n",b.billno,b.custname,b.medname,b.medqty,b.medrate,b.day,b.month,b.year);
   fclose(fptr);
   printf("Billslip save successfully.....................");	

};
