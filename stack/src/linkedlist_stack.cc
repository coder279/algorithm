#include <iostream>
#include "../../utils/list_node.hpp"
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
};
