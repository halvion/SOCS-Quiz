#include<stdio.h>

char saatyangIndah[1000][1000];

int main(){
	
	int sizeSky;
	scanf("%d", &sizeSky);
	for(int row=0;row<sizeSky;row++){
		scanf("%s", saatyangIndah[row]);
	}
	for(int row=sizeSky-1;row>=0;row--){
		for(int column=sizeSky-1;column>=0;column--){
			printf("%c", saatyangIndah[row][column]);
		}
		printf("\n");
	}
	
	return 0;
}