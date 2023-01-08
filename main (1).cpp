#include<iostream>
#include<stdio.h>
#define SIZE 5
using namespace std;

int head=-1;
int tail=-1;
int queue_arr[SIZE];
 
  int enqueue(int data)
  {
  	if(tail==SIZE-1)
  	{
  		cout<<"Queue Overflow "<<endl;
	  }
	  else
  	tail=tail+1;
  	queue_arr[tail]=data;
  
  if(head==-1)
  {
  	head++;
  }
  }
  int dequeue()
  {
  int value;
  if(head==-1 || head>tail)
  {
  	cout<<"Queue Underflow"<<endl;
  }
  else
  value = queue_arr[head];
  head=head+1;
  cout<<"The value which is removed: "<<value<<endl;
 
}
void display(){

if (head==-1)
{
	cout<<"Queue Underflow"<<endl;
}
else
for(int i=head; i<=tail; i++)
{
	cout<<queue_arr[i]<<endl;
}
}
void display_even(){

if (head==-1)
{
	cout<<"Queue Underflow"<<endl;
}
else
for(int i=head; i<=tail; i++)
{
	if (queue_arr[i]%2==0)
	{
	cout<<queue_arr[i]<<endl;
	}
}
}
bool is_empty()
{ 
 
 	if (head=-1 || head>tail)
 		cout<<"Queue is empty";
 }
int main()
{

enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
display();
cout<<endl;
dequeue();
display_even();
return 0;

}
