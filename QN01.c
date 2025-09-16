#include <stdio.h>
int main(){
	char ch1,ch2,ch3;
	int vow=0,cons=0;
		
	printf("\nEnter the first vowel : ");
	ch1 = getchar();
	printf("You entered : ");
	putchar(ch1);
	getchar();
	printf("\nEnter the Second vowel : ");
	ch2 = getchar();
	printf("You entered : ");
	putchar(ch2);
	getchar();
	printf("\nEnter the Third vowel : ");
	ch3 = getchar();
	printf("You entered : ");
	putchar(ch3);
	if ((ch1=='a') || (ch1=='e') || (ch1=='i') || (ch1=='o') || (ch1=='u') || (ch1=='A') || (ch1=='E') || (ch1=='I') || (ch1=='O') || (ch1=='U')){
		++vow;
	}
	else {
		++cons;
	}
	if ((ch2=='a') || (ch2=='e') || (ch2=='i') || (ch2=='o') || (ch2=='u') || (ch2=='A') || (ch2=='E') || (ch2=='I') || (ch2=='O') || (ch2=='U')){
		++vow;
	}
	else {
		++cons;
	}
	if ((ch3=='a') || (ch3=='e') || (ch3=='i') || (ch3=='o') || (ch3=='u') || (ch3=='A') || (ch3=='E') || (ch3=='I') || (ch3=='O') || (ch3=='U')){
		++vow;
	}
	else {
		++cons;
	}
	printf("\n\nTotal no of vowel: %d",vow);
	printf(" \n total no of consonant : %d",cons);
	return 0;
}
