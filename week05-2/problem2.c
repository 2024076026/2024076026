#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char** argv){
	char op;
	int num1, num2;
	
	op = argv[2][0];
	num1 = atoi(argv[1]);	
	num2= atoi(argv[3]);	
	
	switch(op){
		case '+':
		printf("%d %c %d = %d\n", num1, op, num2, num1+num2);
		break;
		case '-':
		printf("%d %c %d = %d\n", num1, op, num2, num1-num2);
		break;
		case '*':
		printf("%d %c %d = %d\n", num1, op, num2, num1*num2);
		break;
	}
	return 0;
}
