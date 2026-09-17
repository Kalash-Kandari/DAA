#include <stdio.h>

int main() {
    int nums[] = {1,2,3,4,5,6,7};
    int n = sizeof(nums)/sizeof(nums[0]);
    int k = 3;
    k %= n;

    for(int i = 0; i < n/2; i++) {
        int t = nums[i];
        nums[i] = nums[n-1-i];
        nums[n-1-i] = t;
    }

    for(int i = 0; i < k/2; i++) {
        int t = nums[i];
        nums[i] = nums[k-1-i];
        nums[k-1-i] = t;
    }

    for(int i = 0; i < (n-k)/2; i++) {
        int t = nums[k+i];
        nums[k+i] = nums[n-1-i];
        nums[n-1-i] = t;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
}
