////����һ���������飬����Ҫ��ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
////��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�
//ʾ�� 1:
//�������� nums = [1, 1, 2],
//
//����Ӧ�÷����µĳ��� 2, ����ԭ���� nums ��ǰ����Ԫ�ر��޸�Ϊ 1, 2��
//
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//ʾ�� 2:
//���� nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4],
//
//����Ӧ�÷����µĳ��� 5, ����ԭ���� nums ��ǰ���Ԫ�ر��޸�Ϊ 0, 1, 2, 3, 4��
//
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//˵�� :
//Ϊʲô������ֵ��������������Ĵ��������� ?
//��ע�⣬�����������ԡ����á���ʽ���ݵģ�����ζ���ں������޸�����������ڵ������ǿɼ��ġ�
////����������ڲ��������� :
//// nums ���ԡ����á���ʽ���ݵġ�Ҳ����˵������ʵ�����κο���
////int len = removeDuplicates(nums);
//
//// �ں������޸�����������ڵ������ǿɼ��ġ�
//// ������ĺ������صĳ���, �����ӡ�������иó��ȷ�Χ�ڵ�����Ԫ�ء�
////for (int i = 0; i < len; i++) {
//	//print(nums[i]);
////}
#include<stdio.h>
#include<Windows.h>

int removeDuplicates(int* nums, int numsSize) {
	int i = 0;
	int j = 0;
	if (numsSize == 0)
	{
		return 0;
	}
	if (numsSize == 1)
	{
		return 1;
	}
	while (j<numsSize)
	{
		j++;
		while (j<numsSize&&nums[j] <= nums[i])
		{
			j++;
		}
		i++;
		if ((i != j)&&i<numsSize&&j<numsSize)
		{
			int tmp = nums[i];
			nums[i] = nums[j];
			nums[j] = tmp;
		}
	}
	return i;
}

int main()
{
	int nums[] = { 1, 2};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
	int len = removeDuplicates(nums, numsSize);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", nums[i]);
	}
	system("pause");
	return 0;
}