#include <iostream>
using namespace std;
class abc {
    public:
    int a,b;
    float result;
    void getData() {
        cout << "Enter 2 numbers:";
        cin >> a >> b;
        result = 0;
    }
    void displayData() {
        cout << "Result: " << result;
    }
};
class calculation : public abc {
    public:
    void add() {
        result = a+b;
    }
    void sub() {
        result = a-b;
    }
    void mul() {
        result = a*b;
    }
    void div() {
        result = a/b;
    }
    void mod() {
        result = a%b;
    }
};
int main() {
    int op;
    calculation obj;
    obj.getData();
    cout << "1.Add\n2.Sub\n3.Multiply\n4.Divsion\n5.Mod\nSelect: ";
    cin >> op;
    
    switch(op) {
        case 1:
               obj.add();
               break;
        case 2:
               obj.sub();
               break;
        case 3:
               obj.mul();
               break;
        case 4:
               obj.div();
               break;
        case 5:
               obj.mod();
               break;    
        default:
               cout << "Enter an valid number!";
    }
    obj.displayData();
    return 0;
}