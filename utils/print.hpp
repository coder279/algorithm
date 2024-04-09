#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


/** 
 * 字符串拼接
 * 
 * @param delim
 * @param vec  
 * 
 * @return 
 */
template <typename T> string strJoin(const string &delim, const T &vec){
  ostringstream os;
  for(const auto &i : vec){
    if(&i != &vec[0]){
      os << delim;
    }
    os << i;
  }
  return os.str();
}


/** 
 * 获取vector字符串形式
 * 
 * @param list
 * 
 * @return 
 */
template <typename T> string getVectorString(vector<T> &list){
  return "["+ strJoin(", ", list) +"]";
}

template <typename T> void printArray(T *arr, int n){
  cout << "[";
  for(int i = 0; i < n - 1; i++){
    cout << arr[i] << endl;
  }
  if(n >= 1)
    cout << arr[n-1] << endl;
  else
    cout << "]" << endl;
}

template <typename T> void printVector(vector<T> list){
  cout << getVectorString(list) << endl;
}
