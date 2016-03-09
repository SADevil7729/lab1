#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Input a number:";
cin>>a;
cout<<a<<" ";
while(a!=1)
{
if(a%2==0)
{
a=a/2;
}
else
{
a=a*3+1;
}
cout<<a<<" ";
}
cout<<"\n";
return 0;
}
