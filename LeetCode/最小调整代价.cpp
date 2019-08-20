//#include<iostream>
//#include<vector>
//#include<algorithm>
///*
//题目描述：给一个整数数组，调整每个数的大小，使得相邻的两个数的差不大于一个给定的整数target
//，调整每个数的代价为调整前后的差的绝对值，求调整代价之和最小是多少。（整数的大小不超过100.）
//对于数组[1, 4, 2, 3]和target=1，最小的调整方案是调整为[2, 3, 2, 3]，调整代价之和是2。返回2。
//*/
//
//using namespace std;
//int MinAdjustmentCost1(const int *num, const int  &target,int length)
//{
//	vector<vector<int>> memory(length, vector<int>(100));//定义一个二维数组做备忘录
//	for (int i=0;i<100;i++)
//	{
//		memory[0][i] = abs(num[0] - i);//初始化第一行
//	}
//	for (int  i = 1; i < length; i++)
//	{
//		int min_i = 1000;//记录每一行中最小的值
//		for (int j = 0; j <100 ; j++)
//		{
//			int minValue=1000;
//			//如果相差的数据不再0到100内，则continue
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
//		result=result>memory[length-1][i]?memory[length-1][i]:result ;//初始化第一行
//	}
//	return result;
//}
//
////改进：根据上面的解法可知，每一行中的数据只依赖于上一行，故只需要另个数组即可完成任务
//int MinAdjustmentCost2(const int *num, const int  &target, int length)
//{
//	vector<vector<int>> memory(2, vector<int>(100));//定义一个二维数组做备忘录
//	for (int i = 0; i < 100; i++)
//	{
//		memory[0][i] = abs(num[0] - i);//初始化第一行
//	}
//	for (int i = 1; i < length; i++)
//	{
//		int min_i = 1000;//记录每一行中最小的值
//		for (int j = 0; j < 100; j++)
//		{
//			int minValue = 1000;
//			//如果相差的数据不再0到100内，则continue
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
//		result = result > memory[0][i] ? memory[0][i] : result;//初始化第一行
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