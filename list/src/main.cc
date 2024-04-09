#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include "../../utils/print.hpp"

using namespace std;
int main(){
  vector<int> nums = {1,2,3,4,5};
  printVector(nums);
  
  /* 访问元素 */
  int num = nums[1];
  stringstream ss;
  ss << num;
  cout << ss.str() << endl;

  /* 更新元素 */
  nums[1] = 100;
  printVector(nums);

  /* 清空列表 */
  nums.clear();
  printVector(nums);
  
  /* 向尾部添加元素 */
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(3); 
  nums.push_back(4);
  nums.push_back(5);
  printVector(nums);

  /* 中间插入元素 */
  nums.insert(nums.begin()+3,6);
  printVector(nums);

  /* 删除元素 */
  nums.erase(nums.begin() + 3);
  printVector(nums);

  /* 拼接两个列表 */
  vector <int>nums1 = {10,9,8,7};
  nums.insert(nums.end(), nums1.begin(),nums1.end());
  printVector(nums);

  /* 列表排序 */
  sort(nums.begin(),nums.end());
  cout << "排序后的列表";
  printVector(nums);
} 

