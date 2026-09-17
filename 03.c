//Given an array of daily temperatures, find the length of the longest consecutive strictly increasing streak.
#include<stdio.h>

int main(){

    int arr[]={10, 12, 15, 14, 16, 18, 20};
    int length = sizeof(arr)/sizeof(arr[0]);
    int count = 1;
    for(int i=0; i < length-1; i++){
        if(arr[i+1]>arr[i]){
            count+=1;
        } else if (arr[i+1]<arr[i]){
            count = 1;
        }
    }
    printf("longest consecutive streak of temeratures is: %d\n", count); 
    return 0;
}

