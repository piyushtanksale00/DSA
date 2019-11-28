#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
bool check = true;
struct node
{
 char name[20];
 int rollNo;
 char section;
 node *next;
}*head,*lastptr;

void add()
{
 node *p;
 p=new node;
 cout<<"Enter name of student:"<<endl;
 gets(p->name);
 fflush(stdin);
 cout<<"Enter Roll Number of student:"<<endl;
 cin>>p->rollNo;
 fflush(stdin);
 cout<<"Enter section of student:"<<endl;
 cin>>p->section;
 fflush(stdin);
 p->next=NULL;

 if(check)
 {
  head = p;
  lastptr = p;
  check = false;
 }
 else
 {
  lastptr->next=p;
  lastptr=p;
 }
 cout<<endl<<"Recored Entered";
 getch();
}
void modify()
{
 node *ptr;
 node *prev=NULL;
 node *current=NULL;
 int roll_no;
 cout<<"Enter Roll Number to search:"<<endl;
 cin>>roll_no;
 prev=head;
 current=head;
 while(current->rollNo!=roll_no)
 {
  prev=current;
  current=current->next;
 }
 ptr=new node;
 fflush(stdin);
 cout<<"Enter name of student:"<<endl;
 gets(ptr->name);
 fflush(stdin);
 cout<<"Enter Roll Number of student:"<<endl;
 cin>>ptr->rollNo;
 fflush(stdin);
 cout<<"Enter section of student:"<<endl;
 cin>>ptr->section;
 fflush(stdin);
 prev->next=ptr;
 ptr->next=current->next;
 current->next=NULL;
 delete current;
 cout<<endl<<"Recored Modified";
 getch();
}
void search()
{
 node *prev=NULL;
 node *current=NULL;
 int roll_no;
 cout<<"Enter Roll Number to search:"<<endl;
 cin>>roll_no;
 prev=head;
 current=head;
 while(current->rollNo!=roll_no)
 {
  prev=current;
  current=current->next;
 }
 cout<<"\nname: ";
 puts(current->name);
 cout<<"\nRoll No:";
 cout<<current->rollNo;
 cout<<"\nSection:";
 cout<<current->section;
 getch();
}
void del()
{
 node *ptr=NULL;
 node *prev=NULL;
 node *current=NULL;
 int roll_no;
 cout<<"Enter Roll Number to Delete:"<<endl;
 cin>>roll_no;
 prev=head;
 current=head;
 while(current->rollNo!=roll_no)
 {
  prev=current;
  current=current->next;
 }
 prev->next = current->next;
 current->next=NULL;
 delete current;
 cout<<endl<<"Recored Deleted";
 getch();
}

int main()
{
 char x;
 cout<<"\n\nPress Any Key To Continue . . . ."<<endl;
 getch();
 do
 {
  system("cls");
  cout<<"1--->Press '1' to add New record:"<<endl;
  cout<<"2--->Press '2' to search a record:"<<endl;
  cout<<"3--->Press '3' to modify a record:"<<endl;
  cout<<"4--->Press '4' to delete a record:"<<endl;
  cout<<"5--->Press '5' to exit:"<<endl;
  x=getch();
  if(x=='1')
  {
   system("cls");
   add();
  }
  else if(x=='2')
  {
   system("cls");
   search();
  }
  else if(x=='3')
  {
   system("cls");
   modify();
  }
  else if(x=='4')
  {
   system("cls");
   del();
  }
  else if(x=='5')
  {
   exit(0);
  }
  else
  {
  }
 }while(x != 27);
 getch();
}
