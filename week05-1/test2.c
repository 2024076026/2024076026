#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int num1, num2,op,answer;
	char opreations[]={'+','-','*'};
	int input;
	srand(time(NULL));
	num1=(rand()%198)-99;
	num2=(rand()%198)-99;
	op =rand()%3;
	printf("%d  %c  %d = ",num1,opreations[op] ,num2);
	switch(op){
		case 0:
			
			answer=num1 +num2;
			break;
		case 1:
			answer= num1-num2;
			break;
		case 2:
			answer= num1 * num2;
			break;
	}
	scanf("%d",&input);
	
	if (answer==input){
		printf("pass");
	}else{
		printf("fail");
	}
	return 0;
}	
