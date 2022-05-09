#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);

    while(N--) {
        int x;
        scanf("%d", &x);
        bool agakprima = true;
        int factor = 0;

        for(int i=2; i*i <= x; i++) { 
        // i = 2, 3, 4, 5, 6, ...
            if(i*i == x) {
                factor++;
            } else if(x % i == 0) {
                factor += 2;
            }
        }

        if(factor <= 2) {
            agakprima = true;
        } else {
            agakprima = false;
        }

        if(agakprima) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }
    return 0;
}