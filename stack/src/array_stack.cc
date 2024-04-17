#include "../../utils/common.hpp"

class ArrayStack {
  private:
    vector<int> stack;

  public:
    /* 获取栈长度 */
    int size(){
      return stack.size();
    }

    /* 判断栈是否为空 */
    bool isEmpty(){
      return stack.size() == 0;
    }

    void push(int num){
      stack.push_back(num);
    }

    int pop(){
      int num = top();
      stack.pop_back();
      return num;
    }

    int top(){
      if(isEmpty()){
        throw out_of_range("栈为空");
      }
      return stack.back();
    }

    vector<int> toVector(){
      return stack;
    }
};


int main(){
  ArrayStack *stack = new ArrayStack();

  /* 元素入栈 */
  stack->push(1);
  stack->push(2);
  stack->push(3);
  stack->push(4);
  stack->push(5);
  cout << "栈 stack =";
  printVector(stack->toVector());

  int top = stack->top();
  cout << "栈顶元素 top =" << top << endl;

  top = stack->pop();
  cout << "元素出栈 pop=" << top << endl;

  bool empty = stack->isEmpty();
  cout << "栈是否为空" << empty << endl;
}
