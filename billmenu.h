#include<stdlib.h>
#include<string.h>
#include"billslip.h"
#include"showbill.h"
void billmenu()
{

  	int choice;
  	int size;
  	struct bill *b;
  	
  		do{
		  printf("\n1:Enter Bill Data \n");	
		  printf("2:Show Bill\n");
		  printf("Enter Your Choice\n");
		  scanf("%d",&choice);
  	 		int i;
  	 		switch(choice)
  			{

			case 1:
				
				printf("Enter Medicine Count\n");
				scanf("%d",&size);
				b=(struct bill*)malloc(sizeof(bill)*size);
			    for(int i=0;i<size;i++)
				{
			    printf("1:Enter Bill number\n");
			    scanf("%d",&b[i].billno);
			    printf("2:Enter Customer name\n");
			    scanf("%s",&b[i].custname);
			    printf("3:Enter Medicine Name\n");
			    scanf("%s",&b[i].medname);
			    printf("4:Enter Medicine Quantity\n");
			    scanf("%d",&b[i].medqty);
			    printf("5:Enter Medicine Medicine Rate\n");
			    scanf("%d",&b[i].medrate);
				printf("6:Enter Day\n");
				scanf("%d",&b[i].day);
				printf("7:Enter Month\n");
				scanf("%s",&b[i].month);
				printf("8:Enter Year\n");
				scanf("%d",&b[i].year);	
			    	billslip(b[i]);
				}
			
			    	break;
			    	
			    	case 2:
			    		{
			    			printf("Enter Bill count\n");
			    			showbill();
			    			break;
						}
						
						default: printf("\n wrong choice");	
					}
				}while(choice!=3);
}



