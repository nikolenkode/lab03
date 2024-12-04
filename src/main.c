#include <stdio.h>
int main(){
	int FirstNumber = 0;
	int SecondNumber = 0;
	printf("Enter your first number:\n");
	scanf("%d", &FirstNumber);
	printf("Enter your second number:\n");
	scanf("%d", &SecondNumber);
	int Count = SecondNumber - FirstNumber + 1;
	int Summ = (Count*(FirstNumber+SecondNumber))/2;
	
	printf("\nSum from %d to %d is %d\n", FirstNumber, SecondNumber, Summ);

return 0;
}
