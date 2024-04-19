#include "../../utils/common.hpp"

class ArrayQueue {
  private:
    int *nums;
    int front;
    int queSize;
    int queCapacity;
  public:
    ArrayQueue(int capacity) {
      nums = new int[capacity];
      queCapacity = capacity;
      front = queSize = 0;
    }

    ~ArrayQueue() {
      delete []nums;
    }

    int capacity() {
      return queSize;
    }

    int size() {
      return queSize;
    }
    
    bool isEmpty() {
      return size() == 0;
    }

    void push(int num) {
      if(queSize == queCapacity) {
        cout << "队列满了" << endl;
        return;
      }

      int rear = (front + queSize) % queCapacity;
      nums[rear] = num;
      queSize++;

    }

    int pop() {
      int num = peek();
      front = (num + front) % queCapacity;
      queSize--;
      return num;
    }

    int peek(){
      if(isEmpty()){
        throw out_of_range("队列为空");
      }
      return nums[front];
    }

    vector<int> toVector(){
      vector<int> arr(queSize);
      for (int i = 0, j = front; i < queSize; i++, j++){
        arr[i] = nums[j % queCapacity];
      }
      return arr;
    }
};

int main() {
  int capacity = 10;
  
  ArrayQueue *queue = new ArrayQueue(capacity);
  queue->push(1);
  queue->push(2);
  queue->push(3);
  queue->push(4);

  cout << "队列 queue = ";
  printVector(queue->toVector());

  int peek = queue->peek();
  cout << "队首元素 peek = " << peek << endl;

  peek = queue->pop();
  cout << "出队元素 pop = " << peek << ",出队后queue = ";
  printVector(queue->toVector());

  bool empty = queue->isEmpty();
  cout << "队列是否为空 = " << empty << endl;

  for(int i = 0; i < queue->size(); i++){

  }
}
