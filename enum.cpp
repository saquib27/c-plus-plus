#include <iostream>
#include <limits.h>
using namespace std;

enum fruit {
    APPLE,      
    BANANA = 5,
    ORANGE     
};

string getFruitName(fruit f) {
    switch (f) {
        case APPLE: return "APPLE";
        case BANANA: return "BANANA";
        case ORANGE: return "ORANGE";
        default: return "UNKNOWN";
    }
}

int main() {
    fruit f = BANANA;
    cout << "Enum value of BANANA: " << f << endl;
    cout << "Fruit name: " << getFruitName(f) << endl;

    f = ORANGE;
    cout << "Enum value of ORANGE: " << f << endl;
    cout << "Fruit name: " << getFruitName(f) << endl;

    cout << "Direct integer 5: " << 5 << endl;

    return 0;
}
