//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
////解放一：递归求解
//int lps1(const char*str, int length)
//{
//	if (length == 0 || str == nullptr) { return 0; }
//	if (length == 1) { return 1; }
//	int longest = 0;
//	int start = 0;
//	int end = length - 1;
//	if (str[start] == str[end])
//	{
//		longest = lps1(str + 1, length - 2) + 2;
//	}
//	else
//	{
//		longest = max(lps1(str + 1, length - 1), lps1(str, length - 1));
//	}
//	return longest;
//}
////解法二：动态规划
//int lps2(const char *str, int length)
//{
//	vector<vector<int>> dp(length, vector<int>(length, 1));
//
//	for (int i = length-2; i >=0; i--)
//	{
//		for (int j = i+1; j < length; j++)
//		{
//			if (str[i]==str[j])
//			{
//				dp[i][j] = dp[i +1][j-1] + 2;
//			}
//			else
//			{
//				dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
//			}
//			
//
//		}
//
//	}
//	return dp[0][length - 1];
//}
//
//
//int main()
//{
//	char str[] = "cabbead";
//	int n = strlen(str);
//	int res = lps2(str, n);
//	cout << res;
//
//
//
//	cin.get();
//}