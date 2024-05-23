#include <stdio.h>

int main(void){
	char command;
	int max_course=5;
	int course[max_course]={0};
	int num_course;
	printf("Welcome to course registration system!\n");
	do {
		printf(" Enter 'r' for a new course regitration");
		scanf("%c",&command);
		

		if (command=='r'){
		int course_code;
		printf("Enter the 5-digit course code: ");
		scanf("%d",&course_code);
		while (10000>course_code && 100000<=course_code){
			course_code=0;
			printf("Enter the 5-digit course code: ");
               		scanf("%d",&course_code);
			}
		printf("%d",course_code);
		}
		}while(command=='q');
		


	}	


		

	return 0;
}
