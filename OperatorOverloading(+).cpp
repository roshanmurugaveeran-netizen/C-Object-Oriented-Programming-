#include <iostream>
using namespace std;

class Test {
public:
    int x;

    Test operator+(Test t) {
        Test temp;
        temp.x = x + t.x;
        return temp;
    }
};

int main() {
    Test t1, t2, t3;
    t1.x = 5; t2.x = 10;

    t3 = t1 + t2;
    cout << t3.x;
}