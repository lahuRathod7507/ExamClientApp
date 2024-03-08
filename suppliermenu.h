#include<stdlib.h>
#include "addsupplier.h"
#include"searchsupplierid.h"
#include"searchsuppliername.h"
#include"supplierlist.h"
void suppliermenu()
{

  	int choice;
  	int size;
  	struct supplier *s;
  	do{
  		printf("\n1:Enter supplier Data\n");
  		printf("2:Search supplier By Id\n");
  		printf("3:Search supplier By Name\n");
  		printf("4:Supplier List\n");
  		printf("5:Supplier Update\n");
		printf("0:exit\n");  		
  		
  		printf("Enter your choice->\n");
  		scanf("%d",&choice);
  		
  		switch(choice)
  		{
  			case 0: exit(0);
			  		break;

			case 1:
				int i;
				printf("Enter supplier count\n");
				scanf("%d",&size);
				s=(struct supplier*)malloc(sizeof(struct supplier)*size);
			    printf("1:Supplier id\n");
			    scanf("%d",&s[i].s_id);
			    printf("1:Supplier name\n");
			    scanf("%s",&s[i].s_email);
			    printf("1:Supplier city\n");
			    scanf("%s",&s[i].s_city);
			    printf("1:Supplier Mobile no.\n");
			    scanf("%ld",&s[i].s_mono);
			    printf("1:Supplier Email\n");
			    scanf("%s",&s[i].s_email);
			    for(i=0;i<size;i++){
			     // scanf("%d%s%s%ld%s",&s[i].s_id,&s[i].s_name,&s[i].s_city,&s[i].s_mono,&s[i].s_email);
			      addsupplier(s[i]);
				  }	
				  printf("Supplier save successfully.....................\n");	

			  		break;	
			
			case 2: 
			{
			int s_id;
 				printf("\nEnter Supplier id for search\n");
 				scanf("%d",&s_id);
 				int result=searchsupplierid(s_id);
 				if(result)
 				{
 					printf("Customer Found");
				}
				 else
				{
				 	printf("Customer not Found");
				}
					break;
			}
			case 3:
				{
					char s_name[50];
 				printf("\nEnter Supplier Name for search\n");
 				scanf("%s",&s_name);
 				char result=searchsuppliername(s_name);
 				if(result)
 				{
 					printf("Supplier Found");
				 }
				 else{
				 	printf("Supplier not Found");

				}
					break;
			}
					  
			case 4: 
			{
				supplierlist();
			  		break;
				}
					  
			case 5:
		  			break;		  
			
	    	default: printf("\n wrong choice");	
		}
	  }while(choice!=6);
  	
  }
