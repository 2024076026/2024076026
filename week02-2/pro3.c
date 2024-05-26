#include <stdio.h>


void r_scan(){
	char c;
	scanf("%c",&c);
	if (c=='\n'){
		return;
	}
	r_scan();
	printf("%c",c);
}

int main(void){
	r_scan();
	printf("\n");
	return 0;
}

