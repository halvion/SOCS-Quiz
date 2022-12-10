#include<stdio.h>

int main(){
	
	char kataPertama[7][21];
	
	for(int i = 0; i<6 ; i++)
	scanf("%s[^\n]", kataPertama[i]);
	
	for(int i = 0; i<6 ; i++){
		printf("%sszs ", kataPertama[i]);
		if(i==2)
		printf("\n");
	}
	printf("\n");
	
	return 0;
}