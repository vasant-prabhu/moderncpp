#include<iostream>
#include<conio.h>
#include <string.h>
using namespace std;
int main()
{
char arr[7]="vasant";
int len=strlen(arr);
cout<<"len is"<<len<<endl;
len--;
char temp;
for (int i=0;i<=(len/2);i++)
{
 	temp = arr[i];
 	arr[i] = arr[len-i];
 	arr[len-i] = temp;
}

cout<<"reversed -- "<<arr<<endl;

/*
for (auto it=s1.begin();it!=s1.end();it++)
{
cout<<*it;
}
*/

getch();
return 0;
}

