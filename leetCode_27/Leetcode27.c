//����һ������nums��һ��ֵval������Ҫԭ���Ƴ�������ֵ����val��Ԫ�أ���Ҫʹ�ö��������ռ䣬�����
//��ԭ���޸��������鲢��ʹ��O(1)����ռ����������ɡ�
//Ԫ�ص�˳����Ըı䣬�㲻��Ҫ���������г����³��Ⱥ����Ԫ��


//param : ���飬���鳤�ȣ�Ҫɾ��ֵ
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
