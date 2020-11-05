//#include<iostream>
//using namespace std;
//struct node
//{
//	int data;
//	node* LeftNode;
//	node* RightNode;
//	
//};
//class Tree
//{
//public:
//	node* root;
//	Tree()
//	{
//		root = NULL;
//	}
//	void insert_node(int);
//	void display(node* r);
//	void PreOrder(node* r); //(NLR)
//	void inOrder(node* r); //(LNR)
//	void PostOrder(node* r); //(LRN)
//	void Search(int);
//	void IsEmpty();
//	node* deleteNode(node* r, int v);
//};
//void Tree::insert_node(int val)
//{
//	node* new_node = new node;
//	new_node->data = val;
//	new_node->LeftNode = NULL;
//	new_node->RightNode = NULL;
//	node* temp = root;
//	if (root == NULL)
//	{
//		root = new_node;
//	}
//	while (temp!=NULL)
//	{
//		
//		 if (root->data == new_node->data)
//		{
//			break;
//		}
//
//		else if (new_node->data < temp->data && temp->LeftNode == NULL)
//		{
//			temp->LeftNode = new_node;
//			break;
//		}
//		else if (new_node->data < temp->data )
//		{
//			temp = temp->LeftNode;
//		}
//		else if (new_node->data > temp->data && temp->RightNode == NULL)
//		{
//			temp->RightNode = new_node;
//			break;
//		}
//		else
//		{
//			temp = temp->RightNode;
//		}
//
//	}
//	
//}
//
//
//void Tree::PreOrder(node* r) //(NLR)
//{
//	if (r == NULL)
//	{
//		return;
//	}
//	cout << r->data << "  ";
//	 PreOrder(r->LeftNode);
//	 PreOrder(r->RightNode);
//
//}
//void Tree::display(node* r)
//{
//	if (r == NULL)
//	{
//		return;
//	}
//	inOrder(r->LeftNode);
//	cout << r->data << "  ";
//	inOrder(r->RightNode);
//}
//void Tree::inOrder(node* r)// (LNR)
//{
//	if (r == NULL)
//	{
//		return;
//	}
//	inOrder(r->LeftNode);
//	cout << r->data<<"  ";
//	inOrder(r->RightNode);
//	
//}
//void Tree::PostOrder(node* r)// (LRN)
//{
//	if (r == NULL)
//	{
//		return;
//	}
//	PostOrder(r->LeftNode);
//	
//	PostOrder(r->RightNode);
//
//	cout << r->data << "  ";
//
//}
//void Tree::Search(int val)
//{
//	bool flag=false;
//	if (root == NULL)
//	{
//		cout << "There is no Data in your Tree Data Structure" << endl;
//		return;
//	}
//	node* temp = root;
//	while (temp != NULL)
//	{
//		if (temp->data == val)
//		{
//			cout << "Data Found" << endl;
//			flag = true;
//			return;
//		}
//		else if (val>temp->data )
//		{
//			temp = temp->RightNode;
//		}
//		else
//		{
//			temp = temp->LeftNode;
//		}
//	}
//	if (flag == false)
//	{
//		cout << "No such Data exist in your Tree" << endl;
//	}
//}
//void Tree::IsEmpty()
//{
//	if (root == NULL)
//	{
//		cout << "Your Tree is Empty" << endl;
//	}
//	else
//	{
//		cout << "Your tree is not Empty" << endl;
//	}
//}
//
//
//node*Tree:: deleteNode(node* r, int v)
//{
//	
//	if (r == NULL) {
//		return NULL;
//	}
//	
//	else if (v < r->data) {
//		r->LeftNode = deleteNode(r->LeftNode, v);
//	}
//	
//	else if (v > r->data) {
//		r->RightNode = deleteNode(r->RightNode, v);
//	}
//	else {
//		
//		if (r->LeftNode == NULL) {
//			node* temp = r->RightNode;
//			delete r;
//			return temp;
//		}
//		else if (r->RightNode == NULL) {
//			node* temp = r->LeftNode;
//			delete r;
//			return temp;
//		}
//		else {
//			node* current = r->RightNode;
//
//			while (current->LeftNode != NULL) {
//				current = current->LeftNode;
//			}
//			
//
//			node* temp = current;
//			r->data = temp->data;
//			r->RightNode = deleteNode(r->RightNode, temp->data);
//			
//		}
//	}
//	return r;
//}
//int main()
//{
//	Tree obj;
//	int opt, val = 1;
//	do
//	{
//
//
//		cout << "Insert()	---> Press 1" << endl
//			<< "Delete()	---> Press 2" << endl
//			<< "Search()	---> Press 3" << endl
//			<< "IsEmpty()	---> Press 4" << endl
//			<< "Display()	---> Press 5" << endl
//			<< "PreOrder()	---> Press 6" << endl
//			<< "inOrder()	---> Press 7" << endl
//			<< "PostOrder()	---> Press 8" << endl
//			<< "Exit()		---> Press 0" << endl;
//		cin >> opt;
//		switch (opt)
//		{
//		case 1:
//		{
//			while (val != 0000)
//			{
//
//				cout << "Enter the Element You want to insert/ Enter 0000 To exit: " << endl;
//				cin >> val;
//				if (val != 0000)
//				{
//
//
//					obj.insert_node(val);
//				}
//			}
//
//			break;
//		}
//		case 2:
//		{
//			int x;
//			cout << "Enter the Value You want to Delete" << endl;
//			cin >> x;
//			obj.deleteNode(obj.root,x);
//			cout << "          DELETED!" << endl;
//			break;
//		}
//		case 3:
//		{
//			int a;
//			cout << "Enter the value You want to Search" << endl;
//			cin >> a;
//			obj.Search(a);
//			break;
//		}
//		case 4:
//		{
//			obj.IsEmpty();
//			break;
//		}
//		case 5:
//		{
//			cout << "*****Data in your tree*****" << endl;
//			obj.display(obj.root);
//			cout << endl;
//			break;
//		}
//		case 6:
//		{
//			cout << "Pre Order Data printing: " << endl;
//			obj.PreOrder(obj.root);
//			cout << endl;
//			break;
//		}
//		case 7:
//		{
//			cout << "IN Order Data printing: " << endl;
//			obj.inOrder(obj.root);
//			cout << endl;
//			break;
//		}
//		case 8:
//		{
//			cout << "Post Order Data printing: " << endl;
//			obj.PostOrder(obj.root);
//			cout << endl;
//			break;
//		}
//		default:
//		{
//			cout << "Select the Correct Option" << endl;
//		}
//
//
//		}
//	} while (opt != 0);
//}