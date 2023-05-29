#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int start;
    int back;
    int size;
    int *arr;
    CircularQueue(int n){
        start=-1;
        back=-1;
        size=n;
        arr=new int[size];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
      if ((start == 0&&back == size - 1 ) || (back == (start-1)%(size - 1))) {
      return false;
      }else if(start==-1){
          back=0;
          start=0;
          
      }else if(back==size-1 && start!=0){
          back=0;
          
      }else{
          back++;
      }

      arr[back]=value;
      return true;


    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(start == -1 ){
            return -1;
        }
        int ans=arr[start];
 arr[start]=-1;
        if (start == back) {
        start=back=-1;
        }
        else if(start ==size-1){
            start =0;
        }else{
            start++;
        }
        return ans;
    }
};

int main(){

}