/*You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.*/

#include<stdio.h>

int single(int *nums, int n){
    int left=0, right = n-1;

    while(left < right){
        int mid = left + (right-left) /2;

        if(mid%2 ==  1)mid--;

        if(nums[mid] == nums[mid+1]) {
            left = mid+2;
        } else {
            right = mid;
        }
    }
    return nums[left];
}


int main() {
    int nums1[] = {1,1,2,3,3,4,4,8,8};
    int n1 = sizeof(nums1)/sizeof(nums1[0]);

    printf("Single element: %d", single(nums1, n1));

    return 0;
}