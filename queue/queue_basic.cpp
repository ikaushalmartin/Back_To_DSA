#include<iostream>
using namespace std;

class queue{
    int *arr;
    int front;
    int rear;
    int size;
public:
    queue(int size){
        this->size=size;
        arr=new int[size];
        front =0;
        rear=-1;
       
    }

    void push(int element){
    
        if(rear<=size-1){
            rear++;
            arr[rear]=element;
        }else{cout<<"queue overflow";}
    }

    void pop(){
        if(front<rear && front <size){
            front++;

            if(front==rear){
                front=0;
                rear=0;
            }


        }else{
            cout<<"queue is empty";
        }
    }

    int front_ele(){

        if(front<=rear && front<size){
                return arr[front];
        }
        else{
            cout<<"queue is empty"<<endl;
            return -1;
        }
    }

    int rear_ele(){
        if(front<=rear && rear<size){
              return arr[rear]; 
        }else{
            cout<<"qqueue is full";
            return -1;
        }
      
    }
};

int main(){
    queue q(8);

    q.push(5);
    q.push(2);
    q.push(3);
    q.push(4);

    q.pop();
     
    cout<<q.front_ele()<<endl<<q.rear_ele();


}