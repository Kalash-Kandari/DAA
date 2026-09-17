//Input a number from the user and print
//a. Number of 1 and number of 0 in its binary representation.
//b. Number of consecutive 1 in the binary representation
#include<stdio.h>
#include<math.h>


int main(){
    int num[] = {1, 1, 0, 1, 1, 1};
    int length = sizeof(num)/sizeof(num[0]);

    int count_0 = 0;
    int count_1 = 0;
    int currentcount = 0;
    int maxcount =0;
    

     for(int i=0; i<length; i++){
        if(num[i] == 1){
            count_1++;
            currentcount++;
            if(currentcount>maxcount){
                maxcount = currentcount;
            }
        } else{
            count_0++;
            currentcount = 0;
        }
     }
    printf("Numbers of Zero: %d\nNumbers of One: %d\n", count_0, count_1);
    printf("Number of consecutive 1's: %d", maxcount);
    return 0;
}