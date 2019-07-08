#pragma once

#include <ostream>
#include <stdexcept>

template <typename T>
class Vector
{
  T* array;
  int size;

public:
  Vector(int size = 10);
  ~Vector();

  inline int GetSize() const;
  T& operator[](int index) const;
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Vector<T>& v);

template <typename T>
Vector<T>::Vector(int size)
{
  array = new T[size];
  this->size = size;
  for (int index = 0; index < GetSize(); ++index)
  {
    array[index] = T();
  }
}

template <typename T>
Vector<T>::~Vector()
{
  delete[] array;
}

template <typename T>
int Vector<T>::GetSize() const
{
  return size;
}

template <typename T>
T& Vector<T>::operator[](int index) const
{
  if (index < 0 || index >= size)
  {
    throw std::out_of_range("index out of range");
  }
  return array[index];
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const Vector<T>& v)
{
  for (int index = 0; index < v.GetSize(); ++index)
  {
    os << v[index] << " ";
  }
  return os;
}
