#include "../../utils/common.hpp"

class LinkedListStack {
  
  private:
    ListNode *stackTop;
    int stkSize;
  
  public:
    LinkedListStack(){
      stackTop = nullptr;
      stkSize = 0;
    }
    
    ~LinkedListStack(){
      freeMemoryLinkedList(stackTop);
    }
    
    int size(){
      return stkSize;
    }

    bool isEmpty(){
      return size() == 0;
    }

    void push(int num){
      ListNode *node = new ListNode(num);
      node->next = stackTop;
      stackTop = node;
      stkSize++;
    }

    int top(){
      if(isEmpty())
        throw out_of_range("栈为空");
      return stackTop->val;
    }

    int pop(){
      int num = top();
      ListNode *tmp = stackTop;
      stackTop = stackTop->next;
      delete tmp;
      stkSize--;
      return num;
    }

    vector<int> toVector(){
      ListNode *node = stackTop;
      vector<int> res(size());
      for( int i = res.size() - 1; i >= 0; i-- ){
        res[i] = node->val;
        node = node->next;
      }
      return res;
    }
};

int main(){
  LinkedListStack *stack = new LinkedListStack();
  
  stack->push(1);
  stack->push(2);
  stack->push(5);
  stack->push(4);
  cout << "栈 stack = ";
  printVector(stack->toVector());

  auto top = stack->top();

  cout << "出栈元素 pop = " << top << endl;

  int size = stack->size();
  cout << "栈的长度 size = " << size << endl;

  bool empty = stack->isEmpty();
  cout << "栈是否为空" << empty <<endl;
  
  delete stack;
}
