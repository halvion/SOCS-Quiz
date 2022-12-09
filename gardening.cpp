#include<stdio.h>

int main(){
	
	int gardenX, gardenY, change;
	scanf("%d %d", &gardenX, &gardenY);
	
	int garden[100][100];
	
	for(int row = 0; row<gardenX ; row++)
	{
		for(int column = 0; column<gardenY ; column++)
		{
			scanf("%d", &garden[row][column]);
		}
	}
	scanf("%d", &change);
	while(change>0){
		
		int axisX, axisY, newChange;
		scanf("%d %d %d", &axisX, &axisY, &newChange);
		garden[axisX-1][axisY-1] = newChange;
		change--;
	}
	
	for(int row = 0; row<gardenX ; row++)
	{
		for(int column = 0; column<gardenY ; column++)
		{
			if(column == gardenY-1){
				printf("%d", garden[row][column]);
			}
			else{
				printf("%d ", garden[row][column]);
			}
		}
		printf("\n"); 
	}
	
	
	return 0;
}
