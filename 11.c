#include <stdio.h>

int main() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    int k = 0;

    for(int i = 1; i < n; i++) {
        if(nums[i] != nums[k]) {
            k++;
            nums[k] = nums[i];
        }
    }

    for(int i = 0; i <= k; i++) {
        printf("%d ", nums[i]);
    }
}
