#include <iostream>
#define MAX_SIZE 5
using namespace std;
 
class Queue {
private:
int myqueue[MAX_SIZE], front, rear;
     
public:
Queue(){
front = -1;
rear = -1;
    }
     
bool isFull(){
if(front == 0 && rear == MAX_SIZE - 1){
return true;
        }
return false;
    }
     
bool isEmpty(){
if(front == -1) return true;
else return false;
    }
     
void enQueue(int value){
if(isFull()){
cout << endl<< "Queue is full!!";
        } else {
if(front == -1) front = 0;
rear++;
myqueue[rear] = value;
cout << value << " ";
        }
    }
int deQueue(){
int value;
if(isEmpty()){
cout << "Queue is empty!!" << endl; } else { value = myqueue[front]; if(front >= rear){
rear = -1;
            }
cout << endl << "Deleted => " << value << " from myqueue";
return(value);
        }
    }     
void displayQueue()
    { 
int i;
if(isEmpty()) {
cout << endl << "Queue is Empty!!" << endl;
        }
else {
cout << endl << "Front = " << front;
cout << endl << "Queue elements : ";
for(i=front; i<=rear; i++)
cout << myqueue[i] << "\t";
cout << endl << "Rear = " << rear << endl;
        }
    }
};
int main()
{
    Queue myq;
     
myq.deQueue();
     
cout<<"Queue created:"<<endl; 
myq.enQueue(10); 
myq.enQueue(20); 
myq.enQueue(30); 
myq.enQueue(40); 
myq.enQueue(50); 
myq.enQueue(60);
myq.displayQueue();
myq.deQueue();
myq.displayQueue();
     
return 0;
}

