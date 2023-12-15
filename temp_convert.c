#include<stdio.h>

int main() {
	float farenhite;
	float celsius;
	int option;
	
	while(1)
	{
		printf("\n\n1. Convert Celsius to Farenhite.\n");
		printf("2. Convert farenhite to Celsius.\n");
		printf("3. Quit.\n");
		
		printf("Entetr your choice (1 - 3).");
		scanf("%d", &option);
		
		switch(option)
		{
			case 1:
				printf("Enter value in Celsius.");
				scanf("%f",&celsius);
				farenhite = (celsius * 9/5) + 32;
				printf("Converted to farenhite : %f\n\n", farenhite);
				break;
			case 2:
				printf("Enter value in farenhite.");
				scanf("%f",&farenhite);
				celsius = (farenhite - 32) * 5/9;
				printf("Converted to celsius : %f\n\n", celsius);
				break;
			case 3:
				printf("Allah Hafiz");
				return 0;
			default:
				printf("Invalid choice! Please enter a valid option.\n");
				
		}
	}
	
	return 0;