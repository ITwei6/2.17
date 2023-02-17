#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////消失的数字
//int missingNumber(int* nums, int numsSize) {
//    int ret = 0;
//    int i = 0;
//    for (i = 0; i < numsSize + 1; i++)
//    {
//        ret += i;
//    }
//    int j = 0;
//    for (j = 0; j < numsSize; j++)
//    {
//        ret -= nums[j];
//    }
//    return ret;
//}
//int main()
//{
//  
//    int nums[5] = { 0,1,2,3,5 };
//    int ret1 = missingNumber(nums, 5);
//	return 0;
//}
//轮转数组
//void rotate(int* nums, int sz, int k)
//{
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		//第一步将最后一个数字拿走
//		int tmp = nums[sz - 1];
//		//第二步将前面的数字整体往后覆盖
//		for (int i = sz-1; i>0; i--)
//		{
//			nums[i] = nums[i-1];
//		}
//		//第三步将保存的最后的数字放在第一位上
//		int i = 0;
//		nums[i] = tmp;
//	}
//}
//3步逆转法;
//void reserve(int* left, int* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int nums[10] = {1,2,3,4,5,6,7};
//	int k = 3;
//	/*rotate(nums,7, k);*/
//	//先逆转左边
//	reserve(nums, nums + (7-k) - 1);
//	//再逆转右边
//	reserve(nums + (7 - k), nums + 6);
//	//再逆转整体
//	reserve(nums, nums + 6);
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	return 0;
//}
//void fun(int n, int m)
//{
//	int count = 0;
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			count++;
//		}
//	}
//}
//void BubbleSort(int* arr, int n)
//{
//	int i = 0;
//	int exchange = 0;
//
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = i; j < n - i - 1; j++)
//		{
//			if (arr[i > arr[i + 1]])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}
//int main()
//{
//
//	int count = 0;
//	int i, j;
//	for (i = 0; i <100; i++)
//	{
//		count++;
//	}
//	return 0;
//}
//int Fac(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return Fac(n - 1) * n;
//}
int Fib(int n)
{
	if (n < 3)
		return 1;
	return Fib(n - 1) + Fib(n - 2);
}