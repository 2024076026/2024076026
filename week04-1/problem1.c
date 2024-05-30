#include <stdio.h>
#include <string.h>

struct my_str{
	char txt[16];
	size_t len;
	};
	


int main(){
	char txt[256];
	struct my_str str;
	scanf("%s", &txt[0] );
	strcpy(str.txt, txt);
	str.len = strlen(str.txt);
	printf("txt : %s , len: %lu\n",str .txt, str .len );
	return 0;
}
