#include<stdio.h>

int main() {
	
	int num_subjects;
	printf("Enter num of subjetcs : "); 
	scanf("%d",&num_subjects);
	int subject = 1;
	int marks;
	int sum = 0;
	float avg;
	
	while(subject <= num_subjects)
	{		
		while(subject <= num_subjects)
		{
			printf("enter marks of subject %d : ", subject);
			scanf("%d", &marks);
			
			for(int i = 1; i <= num_subjects; i++)
			{
				sum = sum + marks;
				break;
			}
			
			break;
		}
		
		subject ++;
	}
	
	printf("sum : %d\n", sum);
	avg = sum / num_subjects;
	printf("avg is : %f", avg);
	
	
	return 0;
}