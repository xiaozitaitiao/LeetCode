//#include"mybinaryTree.h"
//#include<queue>
//using namespace std;
//template<class E>
//mybinaryTreeNode<E>* mybinaryTree<E>::root = nullptr;
//template<class E>
//mybinaryTree<E>::mybinaryTree()
//{
//
//}
//template<class E>
//mybinaryTree<E>::~mybinaryTree()
//{
//
//}
//template<class E>
//void mybinaryTree<E>::preOrder(mybinaryTreeNode<E>* t)
//{
//	if (t != nullptr)
//	{
//		cout << t->element;
//		preOrder(t->leftChiid);
//		preOrder(t->rightChild);
//	}
//}
//
//template<class E>
//void mybinaryTree<E>::inOrder(mybinaryTreeNode<E>* t)
//{
//	if (t != nullptr)
//	{
//		inOrder(t->leftChiid);
//		cout << t->element;
//		inOrder(t->rightChild);
//	}
//}
//template<class E>
//void mybinaryTree<E>::postOrder(mybinaryTreeNode<E>* t)
//{
//	if (t != nullptr)
//	{
//		postOrder(t->leftChiid);
//		postOrder(t->rightChild);
//		cout << t->element;
//	}
//}
//
//template<class E>
//void mybinaryTree<E>::levelOrder(mybinaryTreeNode<E>* t)
//{
//	if (t != nullptr)
//	{
//		queue<mybinaryTreeNode<E>* > q;
//		q.push(t);
//		while (!q.empty())
//		{
//			mybinaryTreeNode<E> *temp = q.front();
//			cout << temp->element;
//			q.pop();
//			if (temp->leftChiid != nullptr)
//			{
//				q.push(temp->leftChiid);
//			}
//			if (temp->rightChild != nullptr)
//			{
//				q.push(temp->rightChild);
//			}
//		}
//	}
//}
//
//template<class E>
//int mybinaryTree<E>::getNodeNum(mybinaryTreeNode<E>* t)
//{
//	if (t == nullptr)
//	{
//		return 0;
//	}
//	return getNodeNum(t->leftChiid) + getNodeNum(t->rightChild) + 1;
//}
//template<class E>
//void mybinaryTree<E>::setRoot(mybinaryTreeNode<E>* r)
//{
//	root = r;
//	treeSize = getNodeNum(r);
//}
//
//template<class E>
//int mybinaryTree<E>::treeDepth(mybinaryTreeNode<E>* t)
//{
//	if (t == nullptr)
//	{
//		return 0;
//	}
//	int leftDepth = treeDepth(t->leftChiid);
//	int rightDepth = treeDepth(t->rightChild);
//	return (leftDepth > rightDepth) ? (leftDepth + 1) : (rightDepth + 1);
//}
//template<class E>
//void mybinaryTree<E>::erase()
//{
//	dispose(root);
//}
//
//template<class E>
//void mybinaryTree<E>::dispose(mybinaryTreeNode<E>* t)
//{
//	if (t != nullptr)
//	{
//		dispose(t->leftChiid);
//		dispose(t->rightChild);
//		delete t;
//	};
//}