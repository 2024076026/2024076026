#include <stdio.h>
#include <string.h>

void my_strcat(char *s1,char * s2){
	int i,j;
	for(i=0; s1[i] !=0;i++);
		
	for(j=0;s2[j] !=0;i++,j++){
	s1[i]= s2[j];
	}

}
int main(){
	char c_code[8]="ITE1014",c_id[6]="13047",
	 c_name[65]="Intro_to_SW_Design", csv[256]="";
	
	strcat(csv,c_code);
	strcat(csv,",");
	strcat(csv,c_id);
	strcat(csv,",");
	strcat(csv,c_name);

	printf("%s\n", csv);
	return 0;
}	
