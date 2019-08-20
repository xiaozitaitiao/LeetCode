//#include <iostream>
//#include <vector>
//
//using  std::vector;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//	
//};
//class Solution {
//public:
//	TreeNode* reConstructmybinaryTree(vector<int> pre, vector<int> vin) 
//	{
//	
//		if (vin.size()==0)
//		{
//			return nullptr;
//		}
//		TreeNode *root=new TreeNode(pre[0]);
//		for(int i=0;i<vin.size();i++)
//		{
//			if (vin[i]==pre[0])
//			{
//				root->left = reConstructmybinaryTree(vector<int>(pre.begin()+1, pre.begin() + i+1), vector<int>(vin.begin(), vin.begin() + i));
//				root->right = reConstructmybinaryTree(vector<int>(pre.begin()+i+1, pre.end()), vector<int>(vin.begin()+i+1, vin.end()));
//				break;
//			}
//			
//		}
//		return root;
//		
//	}
//};
//
//
//int main()
//{
//	vector<int > pre = {1,2,4,7,5};
//	vector<int> vin = {4,2,7,1,5};
//	Solution s;
//	TreeNode *root=s.reConstructmybinaryTree(pre, vin);
//
//	std::cout << root->left->left->val;
//}