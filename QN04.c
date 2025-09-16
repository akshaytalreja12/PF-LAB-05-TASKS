#include <stdio.h>
#include <math.h>
int main(){
	float r =0,area=0,circum=0,radi=0;
	float pi = 3.14;
	printf("Enter then radius =  ");
	scanf("%f",&r);
	area = pi*(pow(r,2));
	circum = 2*pi*r;
	radi = sqrt(r);
	printf("The radius = %.2f\n",r);
	printf("The Area = %.2f\n",area);
	printf("The Circumference = %.2f\n",circum);
	printf("The Square root of radius = %.2f",radi);
	return 0;
	
	
}
