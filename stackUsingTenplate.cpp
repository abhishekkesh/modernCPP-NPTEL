#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack
{
private:
  vector<T> v;
  int topIndex;

public:
  Stack(int size)
  {
    v.resize(size);
    topIndex = -1;
  }

  void push(T data)
  {
    if (topIndex + 1 < v.size())
    {
      v[++topIndex] = data;
    }
  }

  int top() const
  {
    if (topIndex >= 0)
    {
      return v[topIndex];
    }
  }
  int size() const
  {
    return topIndex + 1;
  }
  bool isEmpty() const
  {
    return topIndex == -1;
  }
  void pop()
  {
    if (topIndex >= 0)
    {
      --topIndex;
    }
  }
};