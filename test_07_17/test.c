#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int hs_arr1[1000] = { 0 };
    int i = 0;
    for (i = 0; i < nums1Size; i++)
    {
        hs_arr1[nums1[i]]++;
    }

    int arr[1000] = { 0 };
    int count = 0;
    int ret = 0;
    for (i = 0; i < nums2Size; i++)
    {
        if (hs_arr1[nums2[i]] != 0)
        {
            count++;
            arr[ret] = nums2[i];
            ret++;
            hs_arr1[nums2[i]] = 0;
        }
    }

    *returnSize = count;
    int* return_arr = (int*)malloc(sizeof(int) * count);
    memcpy(return_arr, arr, sizeof(int) * count);
    return return_arr;
}

//int main()
//{
//    int arr1[] = { 4,7,9,7,6,7 };
//    int arr2[] = { 5,0,0,6,1,6,2,2,4 };
//    int returnSize = 0;
//    intersection(arr1, sizeof(arr1) / sizeof(int), arr2, sizeof(arr2) / sizeof(int), &returnSize);
//
//	return 0;
//}


int pivotIndex(int* nums, int numsSize)
{
    //BF

    int i = 0;
    int left_sum = 0;
    int right_sum = 0;
    for (i = 0; i < numsSize; i++)
    {
        int j = 0;
        //×ó²à
        for (j = 0; j < i; j++)
        {
            left_sum += nums[j];
        }

        for (j = i + 1; j < numsSize; j++)
        {
            right_sum += nums[j];
        }

        if (left_sum == right_sum)
            return i;
    }

    return -1;

}

int main()
{
    int arr[] = { 1, 7, 3, 6, 5, 6 };
    pivotIndex(arr, 6);

    return 0;
}