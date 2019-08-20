#include <iostream>
#include <unordered_set>
using namespace std;
//全排列算法
void permutation(char *str,int length)
{
	if (str == nullptr) { return; }
	if (str[0]=='\0')
	{
		cout << str- length << endl;
		return;
	}
	int i = 0;
	while (str[i]!='\0')
	{
		char temp = str[i];
		str[i] = str[0];
		str[0] = temp;
		permutation(str + 1, length);
		temp = str[i];
		str[i] = str[0];
		str[0] = temp;
		i++;

		
	}
}

//去重复的全排列算法
void permutation2(char *str, int length)
{
	if (str == nullptr) { return; }
	if (str[0] == '\0')
	{
		cout << str - length << endl;
		return;
	}
	int i = 0;
	unordered_set<char> hashSet;
	while (str[i] != '\0')
	{
		
		if (hashSet.count(str[i])==0)
		{
			hashSet.insert(str[i]);
			char temp = str[i];
			str[i] = str[0];
			str[0] = temp;
			permutation2(str + 1, length);
			temp = str[i];
			str[i] = str[0];
			str[0] = temp;
			
		}
		i++;
		
	}
}
int main()
{
	char str[] = "abb";
	permutation2(str,3);


}