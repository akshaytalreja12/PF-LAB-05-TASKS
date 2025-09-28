#include <stdio.h>
int main (){
	char lit,tm;
	
	printf("Welcome to Road safety Mechanism\n\n");
	printf("Enter the Signal type \n R for Red \n Y for Yellow \n G for Green \n ");
	scanf("%c",&lit);
	switch (lit){
		case 'g':
		case 'G': printf("Go!!");
		break;
		case 'Y':
		case 'y': printf("Get Ready !");
		break;
		case 'R':
		case 'r': printf("Enter the time of day \n Is it before 22:00 PUT B \n Is it 22:00 or after PUT A ");
		scanf(" %c",&tm);
		if (tm=='A' || tm =='a'){
			printf("Stop But NIGHT CAUTION ALLOWED!");
		}
		else if (tm =='b'|| tm=='B'){
			printf("Stop and Wait!!");
		}
		break;
	}
	return 0;
	}
