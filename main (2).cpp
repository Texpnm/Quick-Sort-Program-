#include<iostream>
#include <stdio.h>
#define SIZE 5
using namespace std;

int head=-1;
int tail=-1;
int sum = 0;
int queue_arr[SIZE];
 
  int enqueue(int data)
  {
  	if(tail==SIZE-1)
  	{
  		cout<<"queue overflow "<<endl;
	  }
	  else
  	tail=tail+1;
  	queue_arr[tail]=data;
  	sum = sum + data;
  
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
  	cout<<"queue underflow"<<endl;
  }
  else
  value = queue_arr[head];
  head=head+1;
 
}
void display(){

if (head==-1)
{
	cout<<"queue underflow"<<endl;
}
else
for(int i=head; i<=tail; i++)
{
	cout<<queue_arr[i]<<endl;
}
}
void display_sum()
{
	if(head==-1 || head>tail )
	{
		cout<<"stack underflow! "<<endl; 
	}
	else
	cout << "The Sum is : " << sum << endl;
}

bool is_empty()
{ 
 
 	if (head=-1 || head>tail)
 		cout<<"queue is empty";
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
display_sum();
return 0;

}

