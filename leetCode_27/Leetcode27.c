//给定一个数组nums和一个值val，你需要原地移除所有数值等于val的元素，不要使用额外的数组空间，你必须
//在原地修改输入数组并在使用O(1)额外空间的条件下完成。
//元素的顺序可以改变，你不需要考虑数组中超出新长度后面的元素


//param : 数组，数组长度，要删的值
void  removeElements(int a[],int arrLength,int value)
{
	int count = 0;
	int begin = 0;
	int end = arrLength - 1;

	while (begin<=end)
	{
		
		while (begin < arrLength && a[begin] != value)
			begin++;
		while (end>=0&&a[end]==value)
		{
			count++;
			end--;
		}

		int temp = a[begin];
		a[begin] = a[end];
		a[end] = temp;
	}
	return arrLength - count;
}
