#include <stdio.h>
//折半查找问题,例如查找6
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int left = 0;
	int right = sizeof(a) / sizeof(a[0]);
	int mid = 0;
	int k = 5;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] > k) {
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("%d", mid);
			break;
		}
	}
	if(left>right)
		printf("不存在");
	}
