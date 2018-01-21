#include<iostream>
using namespace std;
typedef struct bstnode
{
	struct bstnode *lchild;
	int data;
	struct bstnode *rchild;
}*BSTPTR;
BSTPTR T;
void BSTcreate(BSTPTR &T,int k)
{
	if(T==NULL)
	{
		T=new(bstnode);
		T->data=k;
		T->lchild=NULL;
		T->rchild=NULL;
	}
	if(k<T->data)
	{
		BSTcreate(T->lchild,k);
	}
	if(k>T->data)
	{
		BSTcreate(T->rchild,k);
	}
}
void order(BSTPTR &T)
{
	if(T!=NULL)
	{
		order(T->lchild);
		cout<<T->data;
		order(T->rchild);
	}
}
int main()
{
int choice,y,k;
	do
	{
		cout<<"enter the choice";
		cout<<"1:create 2:print";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"enter data";
				cin>>k;
				BSTcreate(T,k);
				break;
			case 2:
				order(T);
				break;
		}
		cout<<"Do you want to continue or not ";
		cout<<"1:yes ,0:no";
		cin>>y;
	}while(y!=0);
return 0;
}

