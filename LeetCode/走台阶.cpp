//#include<iostream>
//#include<unordered_map>
//#include<map>
//using namespace std;
////问题描述：
////有一座高度是10级台阶的楼梯，从下往上走，
////每跨一步只能向上1级或者2级台阶。要求用程序来求出一共有多少种走法。
//
////解法一：递归求解
//
//int getClimbWays1(int n)
//{
//	if (n < 1) { return 0; }
//	if (n == 1) { return 1; }
//	if (n == 2) { return 2; }
//	return getClimbWays1(n - 1) + getClimbWays1(n - 2);
//
//}
//
////解法二：动态规划--备忘录法
//
//int getClimbWays2(int n, unordered_map<int,int>memory)
//{
//	
//	if (n < 1) { return 0; }
//	if (n == 1) { return 1; }
//	if (n == 2) { return 2; }
//	if (memory.count(n)==1)
//	{
//		return memory[n];
//	}
//	else
//	{
//		int value = getClimbWays2(n - 1, memory) + getClimbWays2(n - 2, memory);
//		memory[n] = value;
//		return value;
//	}
//}
//
//int main()
//{
//	unordered_map<int ,int> ma;
//	//ma.insert(make_pair(2, 3));
//	//ma.insert(make_pair(2, 6));
//	int v = getClimbWays1(10);
//
//	return 0;
//
//}