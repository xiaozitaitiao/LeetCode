//#include"mybinaryTree.cpp"
//
//struct info
//{
//	int Depth;
//	int MaxPath;
//};
//info findMaxPath(mybinaryTreeNode<char>*t)
//{
//	info temp;
//	if (t == nullptr)
//	{
//
//		temp.Depth = 0;
//		temp.MaxPath = 0;
//		return temp;
//	}
//	info rightTemp = findMaxPath(t->rightChild);
//	info leftTemp = findMaxPath(t->leftChiid);
//	int maxValue = max(rightTemp.MaxPath, leftTemp.MaxPath);
//	temp.MaxPath = (rightTemp.Depth + leftTemp.Depth + 1) > maxValue ? (rightTemp.Depth + leftTemp.Depth + 1) : maxValue;
//	temp.Depth = rightTemp.Depth > leftTemp.Depth ? (rightTemp.Depth + 1) : (leftTemp.Depth + 1);
//	return temp;
//}
//void convertNode(mybinaryTreeNode<char>*pNode, mybinaryTreeNode<char>**pLastNode)
//{
//	if (pNode == nullptr) { return; }
//	mybinaryTreeNode<char>*pCurrent = pNode;
//	if (pNode->leftChiid!=nullptr)
//	{
//		convertNode(pNode->leftChiid, pLastNode);
//	}
//	pCurrent->leftChiid = *pLastNode;
//	if (*pLastNode!=nullptr)
//	{
//		(*pLastNode)->rightChild = pCurrent;
//	}
//	*pLastNode = pCurrent;
//	if (pCurrent!=nullptr)
//	{
//		convertNode(pCurrent->rightChild, pLastNode);
//	}
//
//}
//int main()
//{
//	mybinaryTree<char> tree;
//	mybinaryTreeNode<char> *root = new mybinaryTreeNode<char>('F');
//	root->leftChiid = new mybinaryTreeNode<char>('G');
//	root->leftChiid->leftChiid = new mybinaryTreeNode<char>('H');
//	root->leftChiid->rightChild = new mybinaryTreeNode<char>('M');
//	root->leftChiid->rightChild->rightChild = new mybinaryTreeNode<char>('I');
//	root->leftChiid->rightChild->rightChild->leftChiid = new mybinaryTreeNode<char>('P');
//	root->leftChiid->leftChiid->leftChiid = new mybinaryTreeNode<char>('A');
//	root->rightChild = new mybinaryTreeNode<char>('J');
//	//root->rightChild->leftChiid = new mybinaryTreeNode<char>('K');
//	//root->rightChild->rightChild = new mybinaryTreeNode<char>('L');
//	//root->rightChild->leftChiid->rightChild = new mybinaryTreeNode<char>('B');
//	tree.setRoot(root);//设置根节点
//	int treeSize = tree.getNodeNum();//获取树中节点个数
//	int treeDepth = tree.treeDepth();//获取树深度
//	//////////////////遍历树////////////////////
//	cout << endl << "前序遍历";
//	tree.preOrder();
//	cout << endl << "中序遍历";
//	tree.inOrder();
//	cout << endl << "后序遍历";
//	tree.postOrder();
//	cout << endl << "层序遍历";
//	tree.levelOrder();
//	///////////////////////////////////////////
//	info result = findMaxPath(root);//获取二叉树节点的最大路径长
//
//
//
//
//
//
//}