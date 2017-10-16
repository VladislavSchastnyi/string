#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main (int argc,char* argv[])
{
  for(int i=0;i<strlen(argv[1]);i++) {
        if ((char)argv[1][i] == (char)argv[2][0]) {
        cout<<i+1;
        cout<< ",";
        }
  }

return 0;
}
