#include<iostream>
using namespace std;
struct node
{
	int data;
	node* LeftNode;
	node* RightNode;

};
class Tree
{
public:
	node* root;
	Tree()
	{
		root = NULL;
	}
	void insert_node(int);
	void display(node* r);
	void PreOrder(node* r); 
	void inOrder(node* r); 
	void PostOrder(node* r); 
	void find(node* r,int);
	void IsEmpty();
	
};
void Tree::insert_node(int val)
{
	node* new_node = new node;
	new_node->data = val;
	new_node->LeftNode = NULL;
	new_node->RightNode = NULL;
	node* temp = root;
	if (root == NULL)
	{
		root = new_node;
	}
	while (temp != NULL)
	{

		if (root->data == new_node->data)
		{
			break;
		}

		else if ( temp->LeftNode == NULL)
		{
			temp->LeftNode = new_node;
			break;
		}
		
		else if ( temp->RightNode == NULL)
		{
			temp->RightNode = new_node;
			break;
		}
		else
		{
			temp = temp->RightNode;
		}

	}

}


void Tree::PreOrder(node* r) //(NLR)
{
	if (r == NULL)
	{
		return;
	}
	cout << r->data << "  ";
	PreOrder(r->LeftNode);
	PreOrder(r->RightNode);

}
void Tree::display(node* r)
{
	if (r == NULL)
	{
		return;
	}
	inOrder(r->LeftNode);
	cout << r->data << "  ";
	inOrder(r->RightNode);
}
void Tree::inOrder(node* r)// (LNR)
{
	if (r == NULL)
	{
		return;
	}
	inOrder(r->LeftNode);
	cout << r->data << "  ";
	inOrder(r->RightNode);

}
void Tree::PostOrder(node* r)// (LRN)
{
	if (r == NULL)
	{
		return;
	}
	PostOrder(r->LeftNode);

	PostOrder(r->RightNode);

	cout << r->data << "  ";

}
void Tree::find(node* r,int val)
	
{
	bool flag =false;
	if (r == NULL)
	{
		return;
	}
	inOrder(r->LeftNode);
	if (r->data == val)
	{
		cout << "Data Found!" << endl;
		flag = true;
	}
	inOrder(r->RightNode);


	if (flag == false)
	{
		cout << endl;
		cout << "No such Data exist in your Tree" << endl;
	}
}
void Tree::IsEmpty()
{
	if (root == NULL)
	{
		cout << "Your Tree is Empty" << endl;
	}
	else
	{
		cout << "Your tree is not Empty" << endl;
	}
}

int main()
{
	Tree obj;
	int opt, val = 1;
	do
	{


		cout << "Insert()	---> Press 1" << endl
			
			<< "Find()	---> Press 3" << endl
			<< "IsEmpty()	---> Press 4" << endl
			<< "Display()	---> Press 5" << endl
			<< "PreOrder()	---> Press 6" << endl
			<< "inOrder()	---> Press 7" << endl
			<< "PostOrder()	---> Press 8" << endl
			<< "Exit()		---> Press 0" << endl;
		cin >> opt;
		switch (opt)
		{
		case 1:
		{
			while (val != 0000)
			{

				cout << "Enter the Element You want to insert/ Enter 0000 To exit: " << endl;
				cin >> val;
				if (val != 0000)
				{


					obj.insert_node(val);
				}
			}

			break;
		}
		
		case 3:
		{
			int a;
			cout << "Enter the value You want to Search" << endl;
			cin >> a;
			obj.find(obj.root,a);
			break;
		}
		case 4:
		{
			obj.IsEmpty();
			break;
		}
		case 5:
		{
			obj.display(obj.root);
			cout << endl;
			break;
		}
		case 6:
		{
			cout << "Pre Order Data printing: " << endl;
			obj.PreOrder(obj.root);
			cout << endl;
			break;
		}
		case 7:
		{
			cout << "IN Order Data printing: " << endl;
			obj.inOrder(obj.root);
			cout << endl;
			break;
		}
		case 8:
		{
			cout << "Post Order Data printing: " << endl;
			obj.PostOrder(obj.root);
			cout << endl;
			break;
		}
		default:
		{
			cout << "Select the Correct Option" << endl;
		}


		}
	} while (opt != 0);
}