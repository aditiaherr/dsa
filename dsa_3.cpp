//Name -Aditi Aher
//SYCOA07
//doubly linked list
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node
{
int info;
struct node *next;
struct node *prev;
}*start;
class double_llist
{
public:
void create_list(int value)
{
struct node *s, *temp;
temp = new(struct node);
temp->info = value;
temp->next = NULL;
if (start == NULL)
{
temp->prev = NULL;
start = temp;}
else
{
s = start;
while (s->next != NULL)
s = s->next;
s->next = temp;
temp->prev = s;
}
}
void add_begin(int value)
{
if (start == NULL)
{
cout<<"First Create the list."<<endl;
return;
}
struct node *temp;
temp = new(struct node);
temp->prev = NULL;
temp->info = value;
temp->next = start;
start->prev = temp;
start = temp;
cout<<"Element Inserted"<<endl;
}
void add_after(int value, int position)
{
if (start == NULL)
{
cout<<"First Create the list."<<endl;return;
}
struct node *tmp, *q;
int i;
q = start;
for (i = 0;i < position - 1;i++)
{
q = q->next;
if (q == NULL)
{
cout<<"There are less than ";
cout<<position<<" elements."<<endl;
return;
}
}
tmp = new(struct node);
tmp->info = value;
if (q->next == NULL)
{
q->next = tmp;
tmp->next = NULL;
tmp->prev = q;
}
else
{
tmp->next = q->next;
tmp->next->prev = tmp;
q->next = tmp;
tmp->prev = q;
}
cout<<"Element Inserted"<<endl;}
void delete_element(int value)
{
struct node *tmp, *q;
/*first element deletion*/
if (start->info == value)
{
tmp = start;
start = start->next;
start->prev = NULL;
cout<<"Element Deleted"<<endl;
free(tmp);
return;
}
q = start;
while (q->next->next != NULL)
{
/*Element deleted in between*/
if (q->next->info == value)
{
tmp = q->next;
q->next = tmp->next;
tmp->next->prev = q;
cout<<"Element Deleted"<<endl;
free(tmp);
return;
}
q = q->next;
}
/*last element deleted*/
if (q->next->info == value){
tmp = q->next;
free(tmp);
q->next = NULL;
cout<<"Element Deleted"<<endl;
return;
}
cout<<"Element "<<value<<" not found"<<endl;
}
void display_dlist()
{
struct node *q;
if (start == NULL)
{
cout<<"List empty,nothing to display"<<endl;
return;
}
q = start;
cout<<"The Doubly Link List is :"<<endl;
while (q != NULL)
{
cout<<q->info<<" <-> ";
q = q->next;
}
cout<<"NULL"<<endl;
}
double_llist()
{
start = NULL;
}
};int main()
{
int choice, element, position,size;
double_llist dl;
cout<<"Enter the size :";
cin>>size;
for(int i=0;i<size;i++)
{
cout<<"Enter the element: ";
cin>>element;
dl.create_list(element);
cout<<endl;
}
while (1)
{
cout<<"1.Add at begining"<<endl;
cout<<"2.Add at position"<<endl;
cout<<"3.Delete"<<endl;
cout<<"4.Display"<<endl;
cout<<"5.Exit"<<endl;
cout<<"Enter your choice : ";
cin>>choice;
switch ( choice )
{
case 1:
cout<<"Enter the element: ";
cin>>element;
dl.add_begin(element);
cout<<endl;break;
case 2:
cout<<"Enter the element: ";
cin>>element;
cout<<"Insert Element at postion: ";
cin>>position;
dl.add_after(element, position);
cout<<endl;
break;
case 3:
if (start == NULL)
{
cout<<"List empty,nothing to delete"<<endl;
break;
}
cout<<"Enter the element for deletion: ";
cin>>element;
dl.delete_element(element);
cout<<endl;
break;
case 4:
dl.display_dlist();
cout<<endl;
break;
case 5:
return 0;
default:
cout<<"Wrong choice"<<endl;
}
}
return 0;
  }
