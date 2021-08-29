#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int input;
	bool is_pow = false;
	string res;

	scanf("%d", &input);
	for(int i=0; i <= 16; i++) {
		if(input == (int)pow(2, i)) {
			is_pow = true;
			break;
		}
	}

	is_pow ? printf("ya") : printf("bukan\n");
	
	return 0;
}
