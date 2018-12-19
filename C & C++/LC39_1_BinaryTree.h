#ifndef BST_H
#define BST_H

typedef struct  Tree
{
	int data;
	struct Tree * left;
	struct Tree * right;
}TREE_T;

TREE_T * Create(int noOfNodes);
TREE_T * Insert(TREE_T * root, int data);
_Bool Search(TREE_T * root,int data);
void Preorder(TREE_T * root);
void Inorder(TREE_T * root);
void Postorder(TREE_T * root);
int Leafcount(TREE_T* root);
int Nonleafcount(TREE_T * root);
_Bool Checkidentical(TREE_T * r1,TREE_T* r2);
void Free(TREE_T * root);
_Bool CheckBalanced(TREE_T *root);//LC39_HW1
int Depth(TREE_T *root);//LC39_HW1
void Mirror(TREE_T * root);
#endif
