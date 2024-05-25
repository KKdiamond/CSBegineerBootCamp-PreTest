#include<iostream>
using namespace std;
int main()
{

  for(int i=1;i<=100;i++)
  {
    int flag=0;
    if((i%3)==0)
    {
      flag=1;
      cout<<"Fizz";
    }
    if((i%5)==0)
    {
      flag=1;
      cout<<"Buzz";
    }
    if(flag==0)
    cout<<i;

    cout<<endl;
  }
  return 0;
}
