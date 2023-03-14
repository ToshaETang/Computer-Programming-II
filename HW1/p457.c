//string replacement

#include<stdio.h>
#include<string.h>
#define STRINGLEN1 100
#define STRINGLENA 10000

int main(void){
	
	char A[STRINGLENA];//,B[STRINGLEN1]="I",C[STRINGLEN1]="She";
	char a[STRINGLEN1];//b[STRINGLEN1],c[STRINGLEN1];
	char AA[STRINGLENA];
	
////////////////////////////////////////////////////////////	
	char B[110];
	char C[110];
  fgets(B, 100, stdin);
  B[strlen(B)-1]='\0';
  //printf("B --%s--\n", B);
  
  fgets(C, 100, stdin);
  C[strlen(C)-1]='\0';
  //printf("C --%s--\n", C);
	
	int lenB = strlen(B);
	int lenC = strlen(C);
	
	while(scanf("%s", a)!= EOF){
		strcat(A,a);
		strcat(A," ");
	}
	int lenA=strlen(A);
	if(A[lenA-1]==' '){
		A[lenA-1]='\0';
	}
	strcpy(AA,A);
	
	
	int gap=lenC-lenB;
	//printf("lenB=%d\n",lenB);
	//printf("lenC=%d\n",lenC);
	//printf("lenA=%d\n",lenA);
	//printf("gap=%d\n",gap);
	
	int i=0;
	int times=0;
	while(i<lenA){
		strcpy(AA,A);
		//printf("------------------------\n");
		//printf("%s\n",A);
		int check=0;
		int end=0;
		int pasteStart=0;
		//printf("i=%d \n",i);

		for(int j=0; j<lenB; j=j+1){
			//printf(" j=%d \n",j);
			//printf("A[%d]=%c    B[%d]=%c\n",i+j,A[i+j],j,B[j]);
			
			if(A[i+j]==B[j]){
				//printf("same A[%d] = B[%d] = %c\n",i+j,j,A[i+j]);
				check = check+1; //比對字串長度
				end = i+j; //相同的詞的結尾
				//printf("check=%d\n",check);
			}
			else{
				
				//printf("different A[%d]=%c != B[%d]=%c\n",i+j,A[i+j],j,B[j]);
			}
			
			if(check == lenB){
				times=times+1; //替換次數
				//printf("START CHANGING !\n");
				for(int k=0; k<lenB+(gap); k=k+1){
					//printf("  k=%d  A[%d]=%c  C[%d]=%c\n",k,i+k,A[i+k],k,C[k]);
					A[i+k]=C[k];
					pasteStart=i+k;
				}
				//printf("%s\n",A);
				//printf("START PASTE !\n");
				for(int s= 1; s<(lenA+(gap*times)-pasteStart); s=s+1){
					//printf("1. A[%d]=%c  AA[%d]=%c\n",pasteStart+s,A[pasteStart+s],end+s,AA[end+s]);
					A[pasteStart+s]=AA[end+s];
					//printf("2. A[%d]=%c  AA[%d]=%c\n",pasteStart+s,A[pasteStart+s],end+s,AA[end+s]);
					//printf("%s\n",A);
					//printf("s = %d\n",s);
				}
			}
		}
		i=i+1;
	}
	printf("%s",A);
	
}////////

// I know I am a girl
// She know I am a girl
// She know she am a girl
// I know that I am a girl when I was young


