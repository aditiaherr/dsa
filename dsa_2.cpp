//Name -Aditi Aher
//SYCOA07
//Singly linked list
#include<iostream>
using namespace std;
struct Node
{
int data;
Node *next;
};
class singlelinkedlist
{
private:
Node *header=NULL;
public:
void insertatbegin();
void insertatend();
void insertatposition();
void deleteatbegin();
void deleteatend();
void deleteatposition();
void displaylist();
};
void singlelinkedlist::insertatbegin()
{
Node* n1;
int n;
n1=new Node();
cout<<"Enter the data part of first node"<<endl;
cin>>n;
n1->data=n;
n1->next=header;
header=n1;
}
void singlelinkedlist::insertatend()
{
Node* n1;
n1=new Node();
int n;
cout<<"Enter the data part of last node"<<endl;
cin>>n;
n1->data=n;
n1->next=NULL;
if(header==NULL)
{
Node* n1;
header=n1;
}
else
{
Node *temp;
temp=header;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=n1;
}
}
void singlelinkedlist::insertatposition()
{
int p;
int count=0;
cout<<"Enter the position for new node"<<endl;
cin>>p;
Node *temp;
temp=header;
while(temp!=NULL)
{
temp=temp->next;
count++;
}
if(p>count)
{
cout<<"You can't insert any element"<<endl;
}
else if(p==1)
{
insertatbegin();
}
else
{
Node* n1;
Node *n2;
n1=new Node();
int n;
cout<<"Enter the data part of node to be added:"<<endl;
cin>>n;
n1->data=n;
Node *temp=header;
for(int i=0;i<p-2;i++)
{
temp=temp->next;
}
n1->next=temp->next;
temp->next=n1;
}
}
void singlelinkedlist::deleteatbegin()
{
Node* temp;
if(temp== NULL)
{
cout<<"doesnt exist";
}
else if(header== NULL)
{
temp= header;
}
}
void singlelinkedlist::deleteatend()
{
if(header!=NULL){
Node *temp;
Node *temp1;
temp=header->next;
temp1=header;
while(temp->next!=NULL)
{
temp1=temp;
temp=temp->next;
}
delete temp;
temp1->next=NULL;
}
else
{
cout<<"You haven't entered any element"<<endl;
}
}
void singlelinkedlist::deleteatposition()
{
Node *temp;
int count=0;
temp=header;
while(temp!=NULL)
{
temp=temp->next;
count++;
}
int n;
cout<<"Enter the position to be deleted"<<endl;
cin>>n;
if(n>count)
cout<<"You can't delete element at "<<n<<"as only";
cout<<"elements are present"<<endl;
else
{
temp=header;
for(int i=0;i<n-2;i++)
{
temp=temp->next;
}
temp->next=temp->next->next;
}
}
void singlelinkedlist::displaylist()
{
Node *temp;
temp=header;
while(temp!=NULL)
{
cout<<temp->data<<"\t"<<endl;
temp=temp->next;
}
}
int main()
{
singlelinkedlist s ;
int p=0;
while(p!=-1)
{
cout<<"Enter 1 to insert node at beginning \n";
cout<<"Enter 2 to insert node at end \n";
cout<<"Enter 3 to delete beginning node \n";
cout<<"Enter 4 to delete node at end \n";
cout<<"Enter 5 to insert node at any position \n";
cout<<"Enter 6 to delete node at any position \n";
cout<<"Enter 7 to display list\n";
cout<<"Enter 8 to exit \n";
int n;
cin>>n;
switch(n)
{
case 1:
s.insertatbegin();
break;
case 2:
s.insertatend();
break;
case 3:
s.deleteatbegin();
break;
case 4:
s.deleteatend();
break;
case 5:
s.insertatposition();
break;
case 6:
s.deleteatposition();
break;
case 7:
s.displaylist();
break;
case 8:
{
cout<<"Thankyou"<<endl;
p=-1;
}
break;
default:
cout<<"You entered wrong choice"<<endl;
break;
}
}
}
