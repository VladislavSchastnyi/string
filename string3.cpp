#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main (int argc,char* argv[])
{
  for(int i=0;i<strlen(argv[1]);i++)
        if ((char)argv[1][i] == (char)argv[2][0]) argv[1][i] = argv[3][0];
  for (int i=0;i<strlen(argv[1]);i++) cout<< argv[1][i];
        cout<<endl;
return 0;
}
