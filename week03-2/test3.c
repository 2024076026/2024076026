#include <stdio.h>
#include <string.h>




//void Upper(char *str){
//	int i;
//	for(i=0;txt[i] !=0;i++){
//		if('a<=txt[i]&&txt[i]<='z'){
//			txt[i]-=('a'-'A');
//		}
//	}
//}

void upper(char* str){
	while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}


int main(){
	char txt[]= "Market brace for Nvidia earnings : What to know "
	"this week";
	//char res[256];
	//strcopy(res, txt);
	//upper(res);
	upper(txt);
	printf("%s",txt);	
	return 0;
}	
