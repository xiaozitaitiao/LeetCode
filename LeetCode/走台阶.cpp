//#include<iostream>
//#include<unordered_map>
//#include<map>
//using namespace std;
////����������
////��һ���߶���10��̨�׵�¥�ݣ����������ߣ�
////ÿ��һ��ֻ������1������2��̨�ס�Ҫ���ó��������һ���ж������߷���
//
////�ⷨһ���ݹ����
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
////�ⷨ������̬�滮--����¼��
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