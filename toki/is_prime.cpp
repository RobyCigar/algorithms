#include <iostream>

using namespace std;

bool is_prime(int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}


int main() {
  int N;

  scanf("%d", &N);
  
  while(N--){
    int x;
    bool prime;

    scanf("%d", &x);
    
    prime = is_prime(x);

    prime ? printf("YA\n") : printf("BUKAN\n");
  }
  return 0;
}