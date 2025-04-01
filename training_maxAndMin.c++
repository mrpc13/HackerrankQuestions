#include <iostream>
using namespace std;
 
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    
    int max, min;
    
    // Finding Maximum
    if (x >= y && x >= z) {
        max = x;
    } else if (y >= x && y >= z) {
        max = y;
    } else {
        max = z;
    }
 
    // Finding Minimum
    if (x <= y && x <= z) {
        min = x;
    } else if (y <= x && y <= z) {
        min = y;
    } else {
        min = z;
    }
 
    printf("%d %d", min, max);
}
