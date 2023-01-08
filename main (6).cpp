#include <iostream>
using namespace std;
#define N 5
int stack1[N],stack2[N];
int top1=-1,top2=-1;
int count=0;
int push1(int data1)
  {
  	if(top1==N-1)
  	{
  		cout<<"stack is full: "<<endl;
	  }
	  else
  	top1=top1+1;
  	stack1[top1]=data1;
  }
  int push2(int data2)
  {
  	if(top2==N-1)
  	{
  		cout<<"stack is full: "<<endl;
	  }
	  else
  	top2=top2+1;
  	stack2[top2]=data2;
  }
   int pop1()
{
  return stack1[top1--];
}
 int pop2()
{
  return stack2[top2--];
}
int enqueue(int x)
{
push1(x);
count++;	
}
int dequeue(){
	int i,a,b,c;
	if(top1==-1 && top2==-1)
	{
		cout<<"queue is empty : "<<endl;
	}
	else
	for(i=0; i<=count; i++)
	{
		a=pop1();
		push2(a);
	}
	b=pop2();
	cout<<"the value which is poped is : "<<b<<endl;
	count--;

	for(int i=0; i<=count; i++)
	{
		c=pop2();
		push1(c);
	}
}
	int display()
	{
		if(top1==-1)
		{
			cout<<"queue is empty! "<<endl;
		}
		else 
		for(int i=0; i<=top1; i++)
		{
			cout<<"the value in the queue is : "<<stack1[top1]<<endl;
		}
	}
  int main(){
  	enqueue(10);
  	enqueue(20);
  	enqueue(30);
  	dequeue();
  	display();	
  }

