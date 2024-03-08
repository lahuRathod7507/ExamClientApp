#include<stdlib.h>
#include<string.h>
#include"addmedical.h"
#include"medicallist.h"
#include"searchmedicalname.h"
void medicalmenu()
{

  	int choice;
  	int size;
  	
  	do{
  		printf("\n1:Enter Medicine Data \n");
		printf("2:View Medical List\n");
		printf("3:Search Medicine Name\n");
		printf("0:exit\n");  		
  		printf("Enter your choice->\n");
  		scanf("%d",&choice);
  		int i;
  		switch(choice)
  		{
  			case 0: exit(0);
			  		break;

			case 1:
				struct medical *m;
				printf("Enter Medicine Count\n");
				scanf("%d",&size);
				m=(struct medical*)malloc(sizeof(struct medical)* size);
			    printf("1:Enter Medicine id\n");
			    scanf("%d",&m[i].m_id);
			    printf("2:Enter Medicine name\n");
			    scanf("%s",&m[i].m_name);
			    printf("3:Enter Medicine Rack Number\n");  
			    scanf("%d",&m[i].m_rno);
			    printf("4:Enter Medicine Cabinet Number\n");
			    scanf("%d",&m[i].m_cabno);
				printf("5:Enter Medicine Supplier Name\n");
			    scanf("%s",&m[i].m_splname);
			    printf("6:Enter Medicine Company Name\n");
			    scanf("%s",&m[i].m_comname); 
				printf("7:Enter Medicine Bill Number\n");
			    scanf("%d",&m[i].m_billno);
				printf("8:Enter Medicine Cost\n");
			    scanf("%d",&m[i].m_mcost); 
				printf("9:Enter Medicine Quantity\n");
			    scanf("%d",&m[i].m_qty);
				printf("10:Enter Medicine sale\n");
			    scanf("%d",&m[i].m_sale);
				printf("11:Enter Purchase Date\n");
			    scanf("%s",&m[i].m_purdate);
				printf("12:Enter Expiry Date\n");
			    scanf("%s",&m[i].m_expdate);
				printf("13:Enter Manufacture Date\n");	
			    scanf("%s",&m[i].m_manudate);	    
			   addmedical(m[i]);
			  
			  		break;	
			  		
			  	case 2:
			  		{
			  			medicallist();
			  			break;
			  			
					 }
				
				case 3:
					
						{
			  		
					char m_name[50];
 					printf("\nEnter Medicine Name for search\n");
 					scanf("%s",&m_name);
 					char result=searchmedicalname(m_name);
 					if(result)
 					{
 						printf("Medical Found");
					}
					 else{
				 		printf("Medical not Found");	
						}
						break;
					}
					
						
					
			default: printf("\n wrong choice");	
//			break;
		}
	  }while(choice<4);
  	
}



