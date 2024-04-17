#include <iostream>
#include <stack>

using namespace std;

class LinkedListStack {
  private:
    ListNode *stackTop;
    int stkSize;

  public:
    LinkedListStack(){
      stackTop = nullptr;
      stkSize = 0;
    }

};

int main(){
  stack<int> stack;
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);

  /* 访问栈顶元素 */
  int top = stack.pop();

  /* 获取栈的长度 */
  stack.pop();

  /* 获取栈的长度 */
  int size = stack.size();

  bool empty = stack.empty();
}
