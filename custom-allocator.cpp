#include<iostream>
#include<conio.h>
#include <vector>
using namespace std;

	  //write a custom allocator
template <class T>
class MyAlloc: public allocator<T>
{
   //override the allocate and deallocate functions
T *allocate(size_t size)
{
cout<<"allocated size is"<<size<<endl;
 return new T[size];
}

void deallocate(T *ptr,size_t size)
{
cout<<"deallocated size is"<<size<<endl;
 delete[]ptr;
}

};


int main()
{
std::vector< int,MyAlloc<int> >vec;
vec.push_back(20);
vec.push_back(10);
vec.push_back(40);
vec.push_back(54);vec.push_back(33);

for (auto &i : vec)
{
   cout<<i<<endl;
}

getch();
return 0;
}

