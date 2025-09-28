#include <stdio.h>
int main(){
	int a,b,c,price; float dis;
	char size,type,ans;
	printf(" Welcome to Velvet Palace \n\nEnter the number respective to your order \n 1. for Burger Hub \n 2. for Ice cream parlour \n 3. for Coffee shop\n ");
	scanf ("%d",&a);
	switch (a){
		case 1:printf("Please visit Burger section For your Order");
		break;
		case 2: printf("\nplease visit Ice cream section for your Order ");
		break;
		case 3: printf("\nWelocme to coffee center \n\nChoose the coffee size \n S for small(2$) \n M for meduim(4$) \n L for large(8$)\n ");
		scanf (" %c",&size);
		switch(size){
			case 's' :
			case 'S':
			printf("How many do you want ");
			scanf("%d",&b);
			if (b>1){
				printf("Check Our combo effects \n  1st :buy 2 small to get 1 small FREE \n 2nd :buy 3 or more small, get 1 samll coffee  with snacks  FREE!\n\n");
				printf("\nChoose the offer 1st or 2nd  : ");
				scanf("%d",&c);
				if (c==1){
					price = 2*2;
					dis = price;
					printf("You have got 1 Small coffe free !");
				}
				if (c>=2){
					price = 2*b;
					dis = price ;
					printf("\nYou have got the 1 small coffee with snacks for FREE ");
				}
			}
			else if (b==1){
				price = 2;
				dis = price;
			}
			printf("\n\nYou total bill is %.2f $",dis);
			break;
			case 'M':
			case 'm': printf("\nHow many do you want ");
			scanf("%d",&b);
			if (b>1){
				printf("Check Our combo offer \n 1st :buy 2 Medium get 1 Small coffee with snacks FREE! \n  2nd : buy 3 or more meduim Get a chance in play area and 10%% discount ");
				printf("Choose the offer ");
				scanf("%d",&c);
				
				if (c==1){
					price = 4*c;
					printf("\nYou have got the 1 Small coffee with snacks for FREE ");
					price = 4*b;
					dis = price;
				}
				if (c>=2){
					printf("\nYou have got the entry in Play area and 10%% discount ");
					price = 4*b;
					dis = price*0.9;
					
				}
				}
			else {
					price = 4*b;
					dis = price;
					
				}
				printf(" \n\nYour total bill is %.2f$",dis);
				break;
				case 'l':
				case 'L':printf("How many do you want ");
			scanf("%d",&b);
			if (b>1){
				printf("\nCheck Our combo effects \n Offer :  You have Got 15%% discount ");
					price = 8*b;
					dis = price*0.85;
				}
				
				
				else if (b==1) {printf("\nYou have got Noo discount ");
					price = 8*b;
					dis = price;
					
					
					 }
					 else {printf("Invalid input");return 0;
					 }
					 printf("\n\nyour total bill is %.2f$",dis);
					
				break;
				default : printf("\nInvalid input ");
				
			}
			break; 
			default : printf("\nInvalid Input ");
			
				
			
		}
	
	}

