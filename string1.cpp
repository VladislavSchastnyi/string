#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main (int argc,char* argv[])
{
  for(int i=0;i<strlen(argv[1]);i++)
  cout<<argv[1][i];
  for(int j=0;j<strlen(argv[2]);j++)
  cout<<argv[2][j];
  cout<<endl;


return 0;
}

