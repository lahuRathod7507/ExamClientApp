#include<stdlib.h>
void customermenu()
{

  	int choice;
  	int size;
  	struct customer *c;
  	do{
  		printf("\n1:Enter Customer Data\n");
  		printf("2:Search Customer By Id\n");
  		printf("3:Search Customer By Name\n");
  		printf("4:Customer List\n");
  		printf("5:Customer Update\n");
		printf("0:exit\n");  		
  		printf("Enter your choice->\n");
  		scanf("%d",&choice);
  		
  		switch(choice)
  		{
  			case 0: exit(0);
			  		break;

			case 1:
				printf("Enter customer count\n");
				scanf("%d",&size);
				c=(struct customer*)malloc(sizeof(customer)*size);
			   
			    for(int i=0;i<size;i++){
			      //scanf("%d%s%s%ld%s",&c[i].id,&c[i].name,&c[i].city,&c[i].mono,&c[i].email);
			      
			    printf("1:Customer id\n");
			    scanf("%d",&c[i].id);
			    
			    printf("2:Customer name\n");
			    scanf("%s",&c[i].name);
			    
			    printf("3:Customer city\n");
			    scanf("%s",&c[i].city);
			    
			    printf("4:Customer Mobile no.\n");
			    scanf("%ld",&c[i].mono);
			    
			    printf("5:Customer Email\n");
			    scanf("%s",&c[i].email);
			    
			      addcustomer(c[i]);
				  }	
			  		break;	
			
			case 2: 
			{
			int cid;
 				printf("\nEnter customer id for search\n");
 				scanf("%d",&cid);
 				int result=searchcustid(cid);
 				if(result)
 				{
 					printf("Customer Found");
				 }
				 else{
				 	printf("Customer not Found");
				}
					break;
			}
			case 3:
				{
					char cname[50];
 				printf("\nEnter customer Name for search\n");
 				scanf("%s",&cname);
 				char result=searchcustname(cname);
 				if(result)
 				{
 					printf("Customer Found");
				 }
				 else{
				 	printf("Customer not Found");

				}
					break;
			}
					  
			case 4: 
			{
				customerlist();
			  		break;
				}
					  
			case 5:
					break;		  
			
			default: printf("\n wrong choice");	
		}
	  }while(choice!=6);
  	
  	
  }
