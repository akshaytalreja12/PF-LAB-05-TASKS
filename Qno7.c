#include <stdio.h>
int main(){
char a1,a2,a3,a4;
float a,b,c;
printf("Welcome to Portal \n Enter your Attendance Percentage : ");
scanf ("%f",&a);
if (a >= 75 && a <=100 ){
	printf("Have you cleared the midterm examination : (p for pass / f for fail)  ");
	scanf(" %c",&a1);
	if (a1=='p' || a1=='P'){
		printf("Is your exam fee paid\?(y for Yes / n for No )"); 
		scanf(" %c",&a2);
		if (a2 == 'y' || a2=='Y'){
			printf("You are eligible For exams ");
		}else if(a2 =='N' || a2 =='n'){
			printf("Please clear your fee dues to appear in the Final exam ");
		}
		else {
			printf("Invalid Input");
		}
	}
	else if (a1 == 'f' || a1=='F'){
		printf("You are not eligible ");
		}
		else {printf("Invalid input ");
		} 
}
else {
	printf("You are not eligible");
}
	return 0;
}
