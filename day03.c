#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
int main()//��ʾ����ַ��������ƶ�
{
	char a[] = "Hello word";
	char b[] = "**********";
	int left = 0;
	int right = strlen(a) - 1;
	while (left <= right)
	{
		b[left] = a[left];
		b[right] = a[right];
		left++;
		right--;
		Sleep(1000);
		system("cls");
		printf("%s\n", b);
	}
	
}