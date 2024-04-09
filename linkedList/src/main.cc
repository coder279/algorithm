#include <iostream>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr){}
};

/** 
 * 链表插入数据
 *
 * @param n0
 * @param p 
 */
void insert(ListNode *n0, ListNode *p){
  ListNode *n1 = n0->next;
  p->next = n1;
  n0->next = p;
}

/** 
 * 链表删除数据
 * 
 * @param n0
 */
void remove(ListNode *n0){
  if(n0->next == nullptr){
    return;
  }
  ListNode *p = n0->next;
  ListNode *n1 = p->next;
  n0->next = n1;
  delete p;
}

/** 
 * 遍历链表
 * 
 * @param head 
 * @param index
 * 
 * @return 
 */
ListNode *access(ListNode *head, int index){
  for(int i = 0; i < index; i++){
    if(head == nullptr){
      return nullptr;
    }
    head = head->next;
  }
  return head;
}

/** 
 * 查找链表的数据
 * 
 * @param head  
 * @param target
 * 
 * @return 
 */
int find(ListNode *head, int target){
  int index = 0;
  while (head != nullptr){
    if (head->val == target){
      return index;
    }
    head = head->next;
  }
  return index;
}

int main(){
  ListNode *n0 = new ListNode(1);
  ListNode *n1 = new ListNode(2);
  ListNode *n2 = new ListNode(3);
  ListNode *n3 = new ListNode(4);
  ListNode *n4 = new ListNode(5);

  // 构造节点
  n0->next = n1;
  n1->next = n2;
  n2->next = n3;
  n3->next = n4;

  return 0;
}
