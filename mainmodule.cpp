#include<stdio.h>
#include"addcustomer.h"
#include"searchcustid.h"
#include"searchcustname.h"
#include"customerlist.h"
#include"customermenu.h"
#include"suppliermenu.h"
#include"medicalmenu.h"
#include"billmenu.h"
#include"showabout.h"
#include<stdlib.h>
  int main()
  {
  	int choice;
  	int size;
  	struct customer *c;
  	do{
  		printf("\n1:Customer Menu\n");
  		printf("2:Medical Menu\n");
  		printf("3:Supplier Menu\n");
  		printf("4:Bill Slip\n");
  		printf("5:About Menu\n");
		printf("0:exit\n");  		
  		printf("Enter your choice->\n");
  		scanf("%d",&choice);
  		
  		switch(choice)
  		{
  			case 0: exit(0);
  			break;

			
			case 1:
				{
					customermenu();
				break;
				}
				
			case 2:
				{
					medicalmenu();
				break;
				}
				
			case 3:
				{
				suppliermenu();
				break;
				}
				
				case 4:
					{
						billmenu();
					break;
					}
					  
			case 5:{
			
					showabout();
					break;	
				}
			
			default: printf("\n wrong choice");	
		}
	  }while(choice<=6);
  	
  	return 0;
  }
