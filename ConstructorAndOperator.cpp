#include <iostream>

using namespace std;

class T{
  public:
  T();
  T(int n);
  ~T();
  T(T&a);
  T& operator=(const T &a);
  void set(const int *a, int n);
  void print();
  private:
  int *arr;
  int size;
};
T::T() : size(0)
{
    arr = new int(size);
    arr = NULL;
}
T::T(int n) : size(n)
{
    arr = new int[n];
}
T::~T()
{
    delete[] arr;
}
T::T(T&a)
{
    size = a.size;
    arr = new int[size];
    for(int i=0;i<size;i++)
    {
        arr[i] = a.arr[i];
    }
}
T& T::operator=(const T&a)
{
    if(this!=&a)
    {
        delete[] arr;
        size = a.size;
        arr = new int[size];
        for(int i=0;i<size;i++)
        {
            arr[i] = a.arr[i];
        }
    }
    
    return *this;
}
void T::set(const int *a, int n)
{
    delete[] arr;
    size = n;
    arr = new int[size];
    for(int i=0;i<size;i++)
    {
        arr[i] = a[i];
    }
}
void T::print()
{
    if(!size)
    {
        cout<<"N"<<endl;
    }
    else
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    cout<<"Hello World"<<endl;

    T b;
    b.print();
    
    T a(10);
    int *arr = new int[10];
    
    for(int i=0;i<10;i++)
    {
        arr[i] = i * 10;
    }
    
    a.set(arr,10);
    a.print();
    
    b = a;
    b.print();
    
    delete[] arr;
    

    return 0;
}



