#include<iostream>
#include<conio.h>
#include<map>
#include<string>
using namespace std;
int main()
{
   using namespace std;
   map<string,pair<int,int>>mymap;
   mymap.insert({"a",{5,3}});
   mymap.insert({"b",{7,23}});
   mymap.insert({"c",{1,63}});
   mymap.insert({"d",{22,113}});
   
   
   /* traditional approach 
   for (auto it=mymap.begin();it!=mymap.end();it++)
   {
      cout<<it->first<<"  "<<(it->second).first<<"  "<<(it->second).second<<endl;
   }
   */
   
   /*c++17 feature -- structured binding -have to compile it in ubuntu. use --std=c++1z --doesnt work in dev c++. */

   for (auto it=mymap.begin();it!=mymap.end();it++)
   {
   
      auto [v1,v2]=it->second;
      cout<<it->first<<"  "<<v1<<"  "<<v2<<endl;
   }


   
   return 0;
}

