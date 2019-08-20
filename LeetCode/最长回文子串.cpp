//#include<iostream>
//using namespace std;
////解法一：动态规划：时间复杂度O(N*N)
//int getLongestPalindrome1(const char *str, int length)
//{
//	if (str == nullptr) { return 0; }
//	if (length == 1) { return 1; }
//	int **dp=new int *[length];
//	int start, end;
//	int longest = 1;
//	for (int i=0;i<length;i++)
//	{
//		dp[i] = new int[length];
//	}
//	for (int i = 0; i < length; i++)
//	{
//		dp[i][i] = 1;
//		if (i<length-1)
//		{
//			if (str[i] == str[i + 1])
//			{
//				dp[i][i + 1] = 1;
//				longest = 2;
//			}
//		}
//		
//	}
//	for (int i=0;i<length;i++)
//	{
//		for (int j=i+2;j<=length;j++)
//		{
//			if (str[i]==str[j])
//			{
//				dp[i][j] = dp[i + 1][j - 1];
//				if (dp[i][j]==1)
//				{
//					int temp = j - i + 1;
//					if (longest<temp)
//					{
//						longest = temp;
//						start = i;
//						end = j;
//					}
//				}
//				else
//				{
//					dp[i][j] = 0;
//				}
//			
//
//			
//			}
//		}
//	}
//
//	return longest;
//}
////解法二：中心扩散法: 时间复杂度O(N*N)
//int counts(const char*str, int length, int mid)
//{
//	int left = mid - 1;
//	int right = mid + 1;
//	while (str[mid]==str[right])
//	{
//		right++;
//	}
//	while (left>=0&&right<length&&str[left]==str[right])
//	{
//		left--;
//		right++;
//	}
//	return right - left - 1;
//}
//int getLongestPalindrome2(const char *str, int length)
//{
//	if (str == nullptr) { return 0; }
//	if (length == 1) { return 1; };
//	int longest=1;
//	for (int i=0;i<length;i++)
//	{
//		
//			int temp = counts(str, length, i);
//			if (temp>longest)
//			{
//				longest = temp;
//			}
//		
//
//	}
//	return longest;
//}
//int main()
//{
//	char str[] = "cbbaggg";
//	int count= getLongestPalindrome2(str, 7);
//
//
//}