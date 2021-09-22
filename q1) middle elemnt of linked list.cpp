#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node()
    {
        this->next = NULL;
    }
};

void Center(Node *node)
{
    Node *temp = node;
    
    int count=0;
    while(node!=NULL)
    {
        count++;
        cout<<node->data<<", ";
        node = node->next;
    }
    int mid=count/2;

    while(mid--)
    {
        temp=temp->next;
    }
    cout<<"Middle Element: "<<temp->data<<endl;
}

int main()
{
	int n1,n2,n3,n4,n5,n6,n7;
	cout<<"Enter 1st element \t";
	cin>>n1;
    Node *head = new Node();
    head->data = n1;
    
	cout<<"Enter 2nd element \t";
	cin>>n2;
    Node *first = new Node();
    first->data = n2;

	cout<<"Enter 3rd element \t";
	cin>>n3;
    Node *second = new Node();
    second->data = n3;
    
    cout<<"Enter 4th elemen \t";
	cin>>n4;
	Node *third = new Node();
	third->data = n4;
	
	cout<<"Enter 5th element \t";
	cin>>n5;
	Node *fourth = new Node();
	fourth->data = n5;
	
	cout<<"Enter 6th element \t";
	cin>>n6;
	Node *fifth = new Node();
	fifth->data = n6;
	
	cout<<"Enter 7th element \t";
	cin>>n7;
	Node *sixth = new Node();
	sixth->data = n7;
	

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    


    Center(head);

    return 0;
}
