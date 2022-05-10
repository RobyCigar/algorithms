/*
https://www.youtube.com/watch?v=Fkg8VaiYgjU

Preprocessing directive
#define tidak menaruh ke dalam memori, melainkan mengganti PI dengan valuenya secara langsung

segala sesuatu yang ada #(hash) nya adalah preprocessing
*/
#include <bits/stdc++.h>

// macro merubah nilai dengan nama
#define ID 1
#define PI 3.14159265358979323846
// macro untuk fungsi
#define KUADRAT(x) (x*x)
#define MAX(a, b) ((a > b) ? a : b)

// preprocessing directive if else
#if ID == 1
    #define BAHASA "Indonesia"
#else
    #define BAHASA "English"
#endif

using namespace std;

int main(int argc, char const *argv[]) {
    cout << "Nilai PI: " << PI << endl;    
    cout << "Bahasa: " << BAHASA << endl;    
    cout << "Kuadrat: " << KUADRAT(4) << endl;
    cout << "Max: " << MAX(4, 20) << endl;

    #undef BAHASA // mengubah bahasa indonesia mengjadi bahasa inggris
    #define BAHASA "Inggris"
    return 0;
} 