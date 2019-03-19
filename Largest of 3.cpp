#include <iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"Enter 3 numbers.."<<endl;
 cin>>a>>b>>c;
 if(a>b && a>c)
  {
   cout<<a<<" is largest"<<endl;
  }
 if(b>a && b>c)
  {
   cout<<b<<" is greatest number"<<endl;
  }
 if(c>a && c>b)
  {
  cout<<c<<" is greatest"<<endl;
  }
return 0;
}
