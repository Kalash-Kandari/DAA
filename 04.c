//Given an integer array arr and a target value target, find the indices of two elements whose sum equals target.  Assume exactly one valid pair exists, and the same element cannot be used twice.
#include<stdio.h>

int main() {
    int arr[]={2,7,11,5};
    int target;
    printf("Enter target value: ");
    scanf("%d", &target);
    int length = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i < length; i++){
        for(int j =0; j < length; j++){
            if(arr[i]+arr[j] == target){
                printf("[%d, %d]", i, j);
                return 0;
            }
        }
    }
    return 0;
}