#include<stdio.h>
int main()
{
	int number, previousPrime, nextPrime, nearestPrime, i, count;
	
	while(1){
		
		printf("Enter a number: ");
		scanf("%d", &number);
		
		if(number == 0 || number == 1){
			printf("Enter a number greater than 1\n");
		}
		else{
		previousPrime = number - 1;
		nextPrime = number + 1;
		
		while(previousPrime != 0){
			count = 0;
			for(i = 1; i <= previousPrime; i++){
				if(previousPrime % i == 0){
					count++;
				}
			}
			if(count == 2){
				printf("Previous prime of %d is %d\n", number, previousPrime);
				break;
			}
			else{
				previousPrime--;
			}
		}
		
		while(nextPrime != 0){
			count = 0;
			for(i = 1; i <= nextPrime; i++){
				if(nextPrime % i == 0){
					count++;
				}
			}
			if(count == 2){
				printf("Next prime of %d is %d\n", number, nextPrime);
				break;
			}
			else{
				nextPrime++;
			}
		}
		
		if((number - previousPrime) > (nextPrime - number)){
			nearestPrime = nextPrime;
			printf("Nearest prime of %d is %d", number, nearestPrime);
			break;
		}
		else{
			nearestPrime = previousPrime;
			printf("Nearest prime of %d is %d", number, nearestPrime);
			break;
			}
		}
	}
}
