#include <iostream> 
#include <cmath> 
using namespace std; 
 
int main() 
{ 
    double z, a = 0; 
    double b = 1; 
    int i = 7; 
    int k = i; 
    double x = i; 
    
 
    do { 
        a += cos(pow(x, 3)) / 2.1 + cos(pow(x, 2)) / 1.1 - 8.3 * sin(3 * x + 1);
        k++; 
    } while (k < i + 5); 
    do { 
        b *= sin(pow(x, 2)) * cos(pow(x, 3)) - sin(x) + 5.2;
        k++; 
    } while (k < i + 8); 
    z = pow(a , b); 
    cout << "i = " << i << " a = " << a << " b = " << b << " z = " << int(z) << endl; 
    return 0; 
}
