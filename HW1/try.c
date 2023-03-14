#include<stdio.h>
#include<string.h>
#define SL 100
int main(void){

	char B[SL];
	char b;
	
	while((b=getchar())!='\n'){
		strcat(B,b);
		printf("B = %s\n",B);
	}
	printf("-----B = %s\n",B);

}
