#include <stdio.h>



int main(){
	char cmd;
	int loop=1;
	int course[5]={0,};
	//0,의 의미 : 5개의 공간을 0으로 채운다는 의미
	int idx=0;
	while(loop){
		printf("'r':registration , 'q':quit\n");
		scanf(" %c",&cmd);
		switch(cmd){
			case 'r':
				scanf("%d",&course[idx++]);
				break;
			case 'q':
				loop=0;
				break;
	}
	}
	for (int i=0; i < sizeof(course)/sizeof(int); i++){
		//if (course[i] !=0){
		if (course[i]){
		printf("[%d]:%d\n",i+1,course[i]);
	}
	}
	return 0;
}
