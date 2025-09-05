#include <iostream>
using namespace std;

enum fruit {
    APPLE, BANANA = 5, ORANGE
};

int main() {


    fruit f = BANANA;
    cout << f << endl;
    
    f = ORANGE;
    cout << f;
    return 0;
}