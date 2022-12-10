
#include<stdio.h>

void scanPattern(int arr[], int x){
    for(int i=0; i<x ; i++){
        scanf("%d", &arr[i]);
    }
}
void lockedChecker(int x, int patterns[], int y){
    int faultCheck=0;
    for(int i = 1; i<=x ; i++){
        int point = 1;
        for(int K=0; K<y ; K++){
            if(i%patterns[K]==0){
                point++;
            }
        }
        if(point%2!=0){
            printf(" %d", i);
        }
        else{
            faultCheck++;
        }
    }
    if(faultCheck==x){
        printf(" No room left!");
    }
}


int main(){
    int testCase;
    scanf("%d", &testCase);
    for(int i=0; i<testCase ; i++){
        int door, pattern, patternx[10010]={0};
        scanf("%d %d", &door, &pattern);
        
        scanPattern(patternx, pattern);
        printf("Case #%d:", i+1);
        lockedChecker(door, patternx, pattern);
        printf("\n");

    }

    return 0;
}
