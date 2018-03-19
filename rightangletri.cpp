#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
 int a[3],x,y;
 for(int i=0;i<3;i++)
 {
 cin>>a[i];
 }
sort(a,a+3);
 x=pow(a[2],2);
 y=pow(a[0],2) + pow(a[1],2);
 if(x==y)
 {
     cout<<"yes";
 }
 else
 {
     cout<<"no";
 }
 return 0;
}
