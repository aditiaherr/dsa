//Name -Aditi Aher
//SYCOA07
//hashing
#include <iostream>
using namespace std;
struct employee
{
int id,dob,key,n;
long int phone;
string name;
float salary;
};
class hashtable
{
int id,dob,key,n;
long int phone;
string name;
float salary;
employee table[10];
public:
int read()
{
int i,n;
cout<<"enter the number of employees"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter name of employee:\n";
cin>>table[i].name;
cout<<"enter id of employee:\n";
cin>>table[i].id;
cout<<"enter telephone number of employee:\n";
cin>>table[i].phone;
cout<<"enter date of birth of employee:\n";
cin>>table[i].dob;
cout<<"enter salary of employee:\n";
cin>>table[i].salary;
}
return n;
}
void display(int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"name of employee is:"<<table[i].name<<endl;
cout<<"employee id is:"<<table[i].id<<endl;
cout<<"date of birth of employee is:"<<table[i].dob<<endl;
cout<<"phone number of employee is:"<<table[i].phone<<endl;
cout<<"salary of employee is:"<<table[i].salary<<endl;
}
}
void deletion()
{
int x,i;
cout<<"enter id to be deleted:"<<endl;
cin>>x;
for(i=0;i<10;i++)
{
if (x==table[i].id)
{
table[i].id=-1;
table[i].key=-1;
table[i].name="";
}
}
cout<<"deleted sucessfully!!"<<endl;
}
void search()
{
int ikey,j;
cout<<"enter the key to be found:"<<endl;
cin>>ikey;
for(j=0;j<10;j++)
{
if(ikey==table[j].id)
{
cout<<"FOUND"<<endl;
}
}
}
};
int main()
{
int ch,end;
hashtable obj1;
while(ch!=4)
{
cout<<endl;
cout<<"1.read data"<<endl;
cout<<"2.Search data"<<endl;
cout<<"3.delete data"<<endl;
cout<<"4.veiw table"<<endl;
cout<<"5.exit"<<endl;
cin>>ch;
int N;
switch(ch)
{
case 1:
N=obj1.read();
break;
case 2:
obj1.search();
break;
case 3:
obj1.deletion();
break;
case 4:
obj1.display(N);
break;
case 5:
cout<<"exit";
break;
default:
cout<<"Invalid input"<<endl;
}
}
return 0;
}
