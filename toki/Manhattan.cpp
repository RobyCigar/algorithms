#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    int x1, y1, x2, y2, dst;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    dst = abs(x2-x1) + abs(y2-y1);
    printf("%d", dst);
    return 0;
}