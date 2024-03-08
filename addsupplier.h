#include"supplier.h"
void addsupplier(supplier s)
  {
	FILE *fptr;
   fptr=fopen("E:\\MedicalStoreManagement\\supplierdb.txt","a");
   fprintf(fptr,"%d\t%s\t%s\t%ld\t%s\n",s.s_id,s.s_name,s.s_city,s.s_mono,s.s_email);
   fclose(fptr);
  }
