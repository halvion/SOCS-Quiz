#include<stdio.h>

void swapVal(int* a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size){
    for(int index=0; index<size-1; index++){

        for (int j=index; j<size-index-1;j++){
            if(arr[j]>arr[j+1]){
                swapVal(&arr[j], &arr[j+1]);
            }
        }
    }

}
void printArr(int arr[], int size){
    for(int index=0;index<size;index++){
        printf("%d ", arr[index]);
    }
}
void mmrChecker(int totalMMR[], int MMR, int size){
    int count = 0;
    for(int index=0;index<size;index++){
        if(MMR == totalMMR[0]){
            printf("%d %d\n", totalMMR[0], totalMMR[1]);
            break;
        }
        else if(MMR == totalMMR[size-1]){
            printf("%d %d\n", totalMMR[size-1], totalMMR[size-2]);
            break;
        }
        else if(MMR == totalMMR[index]){
            printf("%d %d\n", totalMMR[index], totalMMR[index+1]);
            break;
        }
        else count++;
    }
    if(count == size){
        printf("-1 -1\n");
    }

}

int main(){

    int testCase;
    scanf("%d", &testCase);
    for(int index=0;index<testCase;index++){
        int sizeArr, mmrArr[1010]={0};
        scanf("%d", &sizeArr);
        // scanning for values to put inside of the array
            for(int index=0;index<sizeArr;index++){
            scanf("%d", &mmrArr[index]);
            }
        // Sort the array first.
        bubbleSort(mmrArr, sizeArr);
        
        
        int playerMMR;
        scanf("%d", &playerMMR);
        mmrChecker(mmrArr, playerMMR, sizeArr);
        
    }


    return 0;
}