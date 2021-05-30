#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int val=10;
int val2=15;
int &ref = val;

//cout<<ref<<endl;

ref = val2;
cout<<val;
getch();
return 0;
}

