#include <iostream>
#include <string>

using namespace std;
int main ()
{
  int arr[3][3];
  for(unsigned i=0; i!=3; ++i) {
  	for(unsigned ii=0; ii!=3; ++ii) {
  		scanf("%d", &arr[i][ii]);
  	}
  }
  for(unsigned i=0; i!=3; ++i) {
  	for(unsigned ii=0; ii!=3; ++ii) {
  		printf("%d\n", arr[ii][i]);
  	}
  	printf("\n");
  }

  return 0;
}