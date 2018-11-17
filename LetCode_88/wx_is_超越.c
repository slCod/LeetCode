

/*
����������������nums1,nums2,��nums2�ϲ���nums1�У�ʹ��nums1��Ϊһ����������
��nums1���㹻��Ŀռ䣩


*/

#include <stdio.h>
#include <stdlib.h>


void printArr(int *arr, int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		printf("%d,", *(arr + i));
	}
}

//����Ĭ�ϴ�С�����˳��
//Solution 1:ʹ�ö���Ŀռ�
void merge(int *nums1, int m, int *nums2, int n)
{	
	int newLength = m + n;
	int* saveArr = (int *)malloc(sizeof(int)*newLength);
	int curIndex = 0;
	int i=0, j = 0;

	while (curIndex < newLength)
	{
		if (i < m && j < n)
		{

			if (nums1[i] < nums2[j])
			{
				saveArr[curIndex] = nums1[i];
				i++;

			}
			else
			{
				saveArr[curIndex] = nums2[j];
				j++;
			}
		}
		else 
		{
			if (i >= m)
			{
				saveArr[curIndex] = nums2[j];
				j++;
			}
			else
			{
				saveArr[curIndex] = nums1[i];
				i++;
			}

		}

		curIndex++;
	}

	printArr(saveArr, newLength);
	system("pause");
}

void main()
{
	int arr1[] = { 1, 4 ,7,8,10};
	int arr2[] = { 2, 5, 6, 8, 10, 12 };

	int arr1Length = sizeof(arr1) / sizeof(int);
	int arr2Length = sizeof(arr2) / sizeof(int);

	merge(arr1, arr1Length, arr2, arr2Length);
}


