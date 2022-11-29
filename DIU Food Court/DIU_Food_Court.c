#include<stdio.h>
#include <stdlib.h>
int input();

void main(){
	
	int n,ch,cd=0,ci=0,cp=0,orderT=0,itemid,choice,qty;

	while(1)
	{	A:printf("-----<Food Order for DIU Food Court>-----\n");
		printf("\n\n\t***** Main Menu *****\n");
		printf("\t1.Create order\n");
		printf("\t2.Modify Order\n");
		printf("\t3.Generate bill\n");
		printf("\t4.Cancel order\n");
		printf("\t5.Exit\n");

		ch=input();
		system("cls"); 				//Clear screen in DEV-C++ 5.11 v
		switch(ch)
		{
			case 1:D:printf("\n\nSelect the food item\n");
					printf("Item Name 	Price(Inclusive of all Taxes)\n");
					printf("-----------------------\n");
					printf("1.Pizza         499tk\n2.Burger         250tk\n3.Puri          40tk\n4.HotDog         299tk\n5.Fries           200tk\n6.Return to Main Menu\n");
					n=input();
					switch(n)
					{
						case 1:cd++;orderT++;
						system("cls");
						printf("Pizza is ordered: Qty=%d\n",cd);
						goto D;
						break;

						case 2:ci++;orderT++;
						system("cls");
						printf("Burger is ordered: Qty=%d\n",ci);
						goto D;						
						break;

						case 3:cp++;orderT++;
						system("cls");
						printf("Puri is ordered: Qty=%d\n",cp);
						goto D;	
						break;

						case 4:cp++;orderT++;
						system("cls");
						printf("HotDog is ordered: Qty=%d\n",cp);
						goto D;	
						break;

						case 5:cp++;orderT++;
						system("cls");
						printf("Fries is ordered: Qty=%d\n",cp);
						goto D;	
						break;



						case 6:system("cls");
						goto A;
						default:printf("Invalid option\n");
						scanf("%*s");         //Prevents the possibility of infinite loop when "."(dot) is entered as input for the switch case.
						goto D;
						
						
						
					}
					break;
			case 2:if(orderT>0)
					{
						printf("\n\nCurrent Order Details\n");
						printf("Item_id Item_Description	Qty\n");
						printf("-----------------------------------\n");
						if(cd>0)
				{
						printf("111       PIZZA			%d\n",cd);
				}
						if(ci>0)
				{
						printf("112       Burger			%d\n",ci);
				}
						if(cp>0)
				{
						printf("113  	  PURI			%d\n",cp);
				}
				        if(ci>0)
				{
						printf("114       HotDog			%d\n",ci);
				}
				        if(ci>0)
				{
						printf("115       Fries			%d\n",ci);
				}

				B:while(1)
				{	printf("\nEnter your choice\n");
					printf("1.Alter order\n");
					printf("2.Return to Main Menu\n");
					choice=input();	
					
				switch(choice)
				{
				
			case 1:	printf("Enter both item_id & qty to be cancelled\n");
					scanf("%d%d",&itemid,&qty);
					system("cls");
					switch(itemid)
					{
					
				case 111:if(qty<=cd && qty>=0)
					{cd=cd-qty;
					printf("Pizza item deleted: %d \n",qty);
					}
					else {
						printf("Quantity Limit is exceeded or invalid.Try Again\n");
						goto B;
					}
					break;

				case 112:if(qty<=ci && qty>=0)
					{ci=ci-qty;
					printf("Idli item deleted: %d \n",qty);
					}
					else{
						printf("Quantity Limit is exceeded or invalid.Try Again\n");
						goto B;
					}
					break;

				case 113:if(qty<=cp && qty>=0)
					{cp=cp-qty;
					printf("Puri item deleted: %d\n ",qty);
					}
					else{
						printf("Quantity Limit is exceeded or invalid.Try Again\n");
						goto B;
					}
					break;

				case 114:if(qty<=cp && qty>=0)
					{cp=cp-qty;
					printf("HotDog item deleted: %d\n ",qty);
					}
					else{
						printf("Quantity Limit is exceeded or invalid.Try Again\n");
						goto B;
					}
					break;
 
				case 115:if(qty<=cp && qty>=0)
					{cp=cp-qty;
					printf("Fries item deleted: %d\n ",qty);
					}
					else{
						printf("Quantity Limit is exceeded or invalid.Try Again\n");
						goto B;
					}
					break;

				default:printf("Invalid Item id.Try again\n");
				goto B;	
				}
					break;

			case 2:system("cls");
			goto A;
			break;

			default:printf("Invalid choice!!!\n");
			scanf("%*s");
					goto B;		
				}
				}
						
					}
					else{
						printf("Please order First and then try again...");
					goto A;
					}
					break;

			case 3:if(orderT>0)
					{
				printf("			DIU FOOD COURT\n    	DIU,SMART CITY,AB-411\n			MOB: +88017805811\n\n");
				printf("Item Description	Qty		  Price(Tk)	  Total(Tk)\n");
				printf("-------------------------------------------------------------------\n");
				if(cd>0)
				{
				printf("   PIZZA	    %d	 X       	 499		   %d\n",cd,cd*499);
				}
				if(ci>0)
				{
				printf("   Burger		%d	 X  	  250		   %d\n",ci,ci*25);
				}
				if(cp>0)
				{
				printf("   PURI	        	%d	 X  	  40		   %d\n",cp,cp*40);
				}
				if(cp>0)
				{
				printf("   HotDog		%d	 X  	  299		   %d\n",cp,cp*299);
				}
				if(cp>0)
				{
				printf("   Fries		%d	 X  	  200		   %d\n",cp,cp*200);
				}


				printf("===================================================================\n");
				printf("		      	  SUB TOTAL   :              %d Tk\n\n",cd*499+ci*250+cp*40+cp*299+cp*200);
				printf("\t\t<---THANK YOU FOR YOUR VISIT--->\n");
				}
				else
				{
					printf("Please order First and then try again...");
					goto A;
				}
				break;

			case 4:if(orderT>0)
				{cd=0;ci=0;cp=0;orderT=0;
				printf("Order is cancelled, Thank You.\n");
				}
				else{
				printf("Please order First and then try again...");
				goto A;
				}
				break;

			case 5:
				cd=0;cp=0;ci=0;orderT=0;
				printf("Have a Good Day!!!");
				exit(0);

			default:printf("Invalid Entry.Please try again.!!!\n");
			scanf("%*s");
			goto A;
			break;
			
			}		
		}
	}
	int input() 

{ 
    int number; 
    scanf("%d", &number); 
    return (number); 
} 
