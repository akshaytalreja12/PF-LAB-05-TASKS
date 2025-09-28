#include <stdio.h>
int main(){
	printf("The Evaluation of (a&b)|(a^b) is provided below:\n");
	printf("THe first step would be (a&b) \n let a=5 and b=2\n\n");
	printf("The & operator will show true if both value of binary are true else false \n like binary value of 5 is 101 \n and binary value of 2 is  010");
	printf("\n the final answer is like  000 ");
	printf("\n\n The second step would be (a^b) \n the ^ opertaor will works the opposite of & operator \n the value of 5 is 101 \n the value of 2 is 010");
	printf("\nThe answer will be 111 \nbecause both value are different resulting true !");
	printf("\n\nThe last step would be | operator between these two\nThis will show true value if one them is true or both\n");
	printf("example (5&2)=000 and (5^2)=111\n the | operator will work like this \n (000) | (111) = 111  which means true ");
}
