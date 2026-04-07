#include <iostream>
using namespace std;

class Demo {
private:
    int x;

public:
    Demo() {
        x = 10;
    }

    friend void show(Demo d);
};

void show(Demo d) {
    cout << "Value: " << d.x;
}

int main() {
    Demo obj;
    show(obj);
}