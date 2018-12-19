#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "LC39_1_BinaryTree.h"

TREE_T * Create(int noOfNodes)
{
	TREE_T * root = NULL;
	for(int i=1;i<=noOfNodes;i++)
	{
		int data; printf("Enter Data:\t"); scanf("%d",&data);
		root=Insert(root,data);
	}
	return root;
}
TREE_T * Insert(TREE_T * root, int data)
{
	TREE_T * temp = NULL;
	temp = (TREE_T *) malloc(sizeof(TREE_T));
	temp->data = data;
	temp->right=temp->left = NULL;
	if(temp)
	{
		if(root)
		{
			TREE_T * trav = root;
			while(1)
			{
				if(trav->data > data)
				{
					if(trav->left)
					{
						trav = trav->left;
					}
					else
					{
						trav->left = temp;break;
					}
				}
				else
				{
					if(trav->right)
					{
						trav = trav->right;
					}
					else
					{
						trav->right = temp;break;
					}
				}
			}
		}
		else
		{
			root = temp;
		}
	}
	return root;
}
_Bool Search(TREE_T * root,int data)
{
	printf("\n%s\n",__FUNCTION__);
	if(root)
	{
		if(data == root->data)
			return true;
		if(data < root->data)
			return Search(root->left,data);
		else
			return Search(root->right,data);
	}
	else
		return false;
}
void Preorder(TREE_T * root)
{
	if(root !=NULL)
	{
		printf("%d\t",root->data);
		Preorder(root->left);
		Preorder(root->right);
	}
	
}
void Inorder(TREE_T * root)
{
	if(root)
	{
	Inorder(root->left);
	printf("%d\t",root->data);
	Inorder(root->right);
	}

}
void Postorder(TREE_T * root)
{
	if(root)
	{
	Postorder(root->left);
	Postorder(root->right);
	printf("%d\t",root->data);
	}

}
void Free(TREE_T * root)
{
	if(root)
	{
		Free(root->left);
		Free(root->right);
	}
}

int Leafcount(TREE_T* root)
{
	if(root==NULL)
	{
		return 0;
	}
	if(root->left==NULL && root->right==NULL)
	{
		return 1;
	}
	return (Leafcount(root->left)+Leafcount(root->right));
}

int Nonleafcount(TREE_T * root)
{
	if(root==NULL);
		return 0;
	if(root->left==NULL && root->right==NULL)
	{
		return 0;
	}
	if(root->left==NULL)
		return 1+Nonleafcount(root->right);
	if(root->right==NULL)
		return 1+Nonleafcount(root->left);
	return 1+Nonleafcount(root->left)+Nonleafcount(root->right);
}

_Bool Checkidentical(TREE_T * r1,TREE_T* r2)
{
	if(r1==NULL && r2 ==NULL)
		return true;
	if(r1->data == r2->data)
	{
		return Checkidentical(r1->left,r2->left)&&Checkidentical(r1->right,r2->right);
	}
	else
		return false;
}

int Depth(TREE_T *root)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;
    int ldepth = Depth(root->left);
    int rdepth = Depth(root->right);
    if(ldepth > rdepth)
        return 1+ldepth;
    else
        return 1+rdepth;
}

_Bool CheckBalanced(TREE_T *root)
{
    if(root)
    {
        if(abs(Depth(root->left) - Depth(root->right)) < 2)
            return true;
        return false;
    }
    return true;
}

void Mirror(TREE_T * root)
{
	if(root)
		return;
	Mirror(root->left);
	Mirror(root->right);
	TREE_T * temp = root->left;
	root->left = root->right;
	root->right = temp;
}

int main()
{
	TREE_T * root =NULL,*root2 = NULL;
	root = Create(7);
	Preorder(root);printf("\n");
	Inorder(root);printf("\n");
	Postorder(root);printf("\n");
	root2 = Create(7);
	Preorder(root2);printf("\n");
	Inorder(root2);printf("\n");
	Postorder(root2);printf("\n");
	int c =Leafcount(root);
	printf("Leafcount r1=%d\n",c);c=Nonleafcount(root);
	printf("NonLeafcount r1=%d\n",c);c=Leafcount(root2);
	printf("Leafcount r2=%d\n",c);c=Nonleafcount(root2);
	printf("NonLeafcount r2=%d\n",c);
	if(Search(root,6))
		printf("Found\n");
	else
		printf("Not found\n");
	if(Search(root2,1))
		printf("Found\n");
	else
		printf("Not found\n");
	if(Checkidentical(root,root2))
		printf("Identical\n");
	else
		printf("Not Identical\n");
	if(CheckBalanced(root))
		printf("Balanced\n");
	else
		printf("Not Balanced\n");
	if(CheckBalanced(root2))
		printf("Balanced\n");
	else
		printf("Not Balanced\n");
	printf("Depth=%d\n",Depth(root));
	printf("Depth=%d\n",Depth(root2));
	Mirror(root);
	Mirror(root2);
	Preorder(root);printf("\n");
	Inorder(root);printf("\n");
	Postorder(root);printf("\n");
	Preorder(root2);printf("\n");
	Inorder(root2);printf("\n");
	Postorder(root2);printf("\n");
}
