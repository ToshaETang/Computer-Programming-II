//?A?B

#include<stdio.h>
#define STRINGLEN 5

int main(){
	char s1[STRINGLEN];
	char s2[STRINGLEN];
	int A=0;
	int B=0;
	
	scanf("%s", s1);
	//printf("%c",s1[0]);
	scanf("%s", s2);
	
	for(int i=0; i<4; i=i+1){
		//A
		if(s1[i]==s2[i]){
			A=A+1;	
		}
		else if(s1[i]==s2[0] || s1[i]==s2[1] || s1[i]==s2[2] || s1[i]==s2[3]){
			B=B+1;
		}
	}
	
	printf("%dA%dB",A,B);
	
}///
