#include <iostream>    
using namespace std;

int fib(long long int n){    
  if(n == 0) 
    return 0;
  if(n == 1)
    return 1;

  return fib(n-1) + fib(n-2);
}  
int main(){    
  long long int n;    
  cout << "Enter the number of elements: ";    
  cin >> n;

  cout << "here's your fib numbers : \n";
  cout << fib(n) << "\n";

  return 0;  
}  