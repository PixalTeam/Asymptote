#include <iostream>
#include <math.h>

using namespace std;

int main() {
    static double p, u, n;
    cout << "\"p\" value: ";
    cin >> p;
    u = 3;
    while (abs(u - 2) >= pow(10, -p)) {
        n += 1;
        u = (2 * n + 3) / (n + 1);
    }
    
    std::cout << n << std::endl;
    return 0;
}
