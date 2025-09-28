#include <stdio.h>

	#define PIN 1223
	#define balance 5000
	#define Totalattempts 3
	
int main(){
	int pin=0, amount=0, remain=0;
	static int attempts;
	++attempts;
	printf("-------Welcome to ATM--------\n\n");
	printf("Enter the PIN Code : ");
	scanf("%d",&pin);
	
	 if (attempts > Totalattempts){
		printf("Too Many Attempts \n Account Blocked ");
		return 0;
	}
	
	if (pin==PIN){
		printf("Enter the withdraw amount =  ");
		scanf("%d",&amount);
		remain = balance - amount;
		if (amount>balance){
			printf("Insufficient Balance!!");
			return 0;
		}
		
		else { printf("%drs deducted from your account.\n",amount);
		printf("Your Remaining balance is %drs",remain);
		return 0;
		}

	}
	
	else { printf("Wrong PIN code \n");
	printf("Try again!\n\n\n");
	
	sleep(1);
	main();
	}
	return 0;
}
