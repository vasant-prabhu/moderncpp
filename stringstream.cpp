#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
  using namespace std;
   
  map<string,int> mymap;
 // string str("The Moon is a barren, rocky world without air and water. It has dark lava plain on its surface. The Moon is filled wit craters. It has no light of its own. It gets its light from the Sun. The Moo keeps changing its shape as it moves round the Earth. It spins on its axis in 27.3 days stars were named after the Edwin Aldrin were the first ones to set their foot on the Moon on 21 July 1969 They reached the Moon in their space craft named Apollo II.");
  string str("Preeti Pai Dhruv Prabhu Preeti Pai Dhruv Prabhu Preeti Pai Dhruv Prabhu Preeti Pai Dhruv Prabhu Preeti Pai Dhruv Prabhu ");
  stringstream ss(str);
  string word;
  while ( ss>>word )
  {
     mymap[word]++;
  }
  
  for (auto it=mymap.begin();it!=mymap.end();it++)
  {
     cout<<it->first<<"--->"<<it->second<<endl;
  }
  return 0;
}

