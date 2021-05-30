#include<iostream>
#include<conio.h>
using namespace std;

template <class T,class Y>
auto add(T x,Y y)->decltype(x+y)
{
 return (x+y);
}

template<>
auto add<int,float>(int x,float y)->decltype(x+y)
{
   cout<<"hello"<<endl;
   return (x+y);
}


int main()
{
float a=5.3,b=6.3;
cout<< add(a,b)<<endl;
float x=5,y=6;
cout<< add(x,y)<<endl;

int w=2;
float e=1.5;
cout<< add(w,e)<<endl;


getch();
return 0;
}

