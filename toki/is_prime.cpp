#include <iostream>

using namespace std;

bool IsPrime(int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}


int main() {
  int N;

  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    int x;
    scanf("%d", &x);

    bool prime = true;
    
    prime = IsPrime(x);

    if (prime) {
      printf("YA\n");
    } else {
      printf("BUKAN\n");
    }
  }
  return 0;
}