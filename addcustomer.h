#include"customer.h"
void addcustomer(customer c)
  {
	FILE *fptr;
   fptr=fopen("E:\\MedicalStoreManagement\\customerdb.txt","a");
   fprintf(fptr,"%d\t%s\t%s\t%ld\t%s\n",c.id,c.name,c.city,c.mono,c.email);
   fclose(fptr);
   printf("Customer save successfully.....................");	
  }
