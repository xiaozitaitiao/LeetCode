//#pragma once
//
//
//#include<iostream>
//#include<algorithm>
//
//
//template<class T>
//struct mybinaryTreeNode
//{
//	T element;
//	mybinaryTreeNode<T> *leftChiid;
//	mybinaryTreeNode<T> *rightChild;
//	mybinaryTreeNode<T>() { leftChiid = rightChild = nullptr; }
//	mybinaryTreeNode<T>(const T& theelement)
//	{
//		element = theelement;
//		leftChiid = rightChild = nullptr;
//	}
//	mybinaryTreeNode<T>(const T& theelement, mybinaryTreeNode<T> *left, mybinaryTreeNode<T>*right)
//	{
//		element = theelement;
//		leftChiid = left;
//		rightChild = right;
//	}
//};
//
//template<class E>
//class mybinaryTree
//{
//private:
//	static mybinaryTreeNode<E> *root;
//	int treeSize;
//	void dispose(mybinaryTreeNode<E>* t);
//public:
//	mybinaryTree();
//	~mybinaryTree();
//	void setRoot(mybinaryTreeNode<E>*r);
//	int  getNodeNum(mybinaryTreeNode<E> *t = root);
//	int size() { return treeSize; }//���Ľڵ����
//	void preOrder(mybinaryTreeNode<E>* t = root);//ǰ�����
//	void inOrder(mybinaryTreeNode<E>* t = root);//�������
//	void postOrder(mybinaryTreeNode<E>* t = root);//�������
//	void levelOrder(mybinaryTreeNode<E>* t = root);//�������
//	void erase();
//	int treeDepth(mybinaryTreeNode<E>* t = root);//�������
//
//};
//
//
