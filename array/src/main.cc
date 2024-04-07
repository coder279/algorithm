#include <iostream>
#include <random>

/* 随机获取数组中的数值 */
int randomAccess(int* nums,int size){
  int randomIndex = rand() % size;
  return nums[randomIndex];
}

/* 数组扩容 */
int *extend(int* nums, int exlen, int size){
  int *arr = new int[size + exlen];
  for(int i = 0; i < size; i++){
    arr[i] = nums[i];
  }
  delete nums;
  return arr;
}

/* 数组中插入元素 */
void insert(int* nums, int size, int index, int num){
  for(int i = size - 1; i > index; i--){
    nums[i] = nums[i - 1];
  }
  nums[index] = num;
}

/* 删除元素 */
void remove(int* nums, int size, int index){
}

int main() {
  int size = 5;
  int *arr = new int[size]{1, 2, 3, 4, 5};
  int num = randomAccess(arr, size);
  std::cout << num << std::endl;
  // 数组扩容
  int *arr2 = extend(arr, 5, size);
  for(int i = 0; i < sizeof(arr2); i++){
    std::cout << arr2[i] << std::endl;
  }
  
  insert(arr2, 10, 6, 99);
  for(int i = 0; i < sizeof(arr2); i++){
    std::cout << arr2[i] << std::endl;
  } 
  return 0;
}
