//#include<iostream>
//#include<vector>
//#include<algorithm>
///*
//��Ŀ��������һ���������飬����ÿ�����Ĵ�С��ʹ�����ڵ��������Ĳ����һ������������target
//������ÿ�����Ĵ���Ϊ����ǰ��Ĳ�ľ���ֵ�����������֮����С�Ƕ��١��������Ĵ�С������100.��
//��������[1, 4, 2, 3]��target=1����С�ĵ��������ǵ���Ϊ[2, 3, 2, 3]����������֮����2������2��
//*/
//
//using namespace std;
//int MinAdjustmentCost1(const int *num, const int  &target,int length)
//{
//	vector<vector<int>> memory(length, vector<int>(100));//����һ����ά����������¼
//	for (int i=0;i<100;i++)
//	{
//		memory[0][i] = abs(num[0] - i);//��ʼ����һ��
//	}
//	for (int  i = 1; i < length; i++)
//	{
//		int min_i = 1000;//��¼ÿһ������С��ֵ
//		for (int j = 0; j <100 ; j++)
//		{
//			int minValue=1000;
//			//����������ݲ���0��100�ڣ���continue
//			for (int z = -target; z <=target; z++)
//			{
//				if (j+z<0||j+z>=100)
//				{
//					continue;
//				}
//			if (minValue>memory[i-1][j+z]+abs(j - num[i]))
//			{
//				minValue = memory[i - 1][j + z]+abs(j-num[i]);
//			}
//				
//
//			}
//			memory[i][j] = minValue;
//		}
//	}
//	int result = 1000;
//	for (int i = 0; i <100; i++)
//	{
//		result=result>memory[length-1][i]?memory[length-1][i]:result ;//��ʼ����һ��
//	}
//	return result;
//}
//
////�Ľ�����������Ľⷨ��֪��ÿһ���е�����ֻ��������һ�У���ֻ��Ҫ������鼴���������
//int MinAdjustmentCost2(const int *num, const int  &target, int length)
//{
//	vector<vector<int>> memory(2, vector<int>(100));//����һ����ά����������¼
//	for (int i = 0; i < 100; i++)
//	{
//		memory[0][i] = abs(num[0] - i);//��ʼ����һ��
//	}
//	for (int i = 1; i < length; i++)
//	{
//		int min_i = 1000;//��¼ÿһ������С��ֵ
//		for (int j = 0; j < 100; j++)
//		{
//			int minValue = 1000;
//			//����������ݲ���0��100�ڣ���continue
//			for (int z = -target; z <= target; z++)
//			{
//				if (j + z < 0 || j + z >= 100)
//				{
//					continue;
//				}
//				if (minValue > memory[0][j + z] + abs(j - num[i]))
//				{
//					minValue = memory[0][j + z] + abs(j - num[i]);
//				}
//
//
//			}
//			memory[1][j] = minValue;
//		}
//		memory[0] = memory[1];
//	}
//	int result = 1000;
//	for (int i = 0; i < 100; i++)
//	{
//		result = result > memory[0][i] ? memory[0][i] : result;//��ʼ����һ��
//	}
//	return result;
//}
//
//int main()
//{
//	int num[] = { 1,4,2,3 };
//	int c = MinAdjustmentCost2(num, 1, 4);
//
//}