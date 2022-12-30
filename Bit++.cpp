#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n;
  string s;
  cin>>n;
  static int X=0;
  for(int i=n;i>=1;i--){
        cin>>s;
        if(s=="++X"||s=="X++")
          X=X+1;
        else if(s=="--X"||"X--")
          X=X-1;
            }
  cout<<X;
  return 0;    
}