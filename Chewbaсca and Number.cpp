#include<iostream>
using namespace std;
int main()
{
  int n,rev=0;
  cin>>n;
  while(n!=0)
  { if(n%10>4){
     rev=rev*10+(9-(n%10));
     n/=10;
    }
    else{
      rev=rev*10+n%10;
      n/=10;
    }
  }
  while(rev!=0)
  {
    n=n*10+(rev%10);
    rev/=10;
  }
  cout<<n;
}