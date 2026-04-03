#include<iostream>
#include<stdexcept>
using namespace std;
void divide(int a,int b) {
    if(b==0) {
        throw runtime_error("Division be zero is not allowed");
    }
    cout << "Result:" << a/b << "\n";
}
int main() {
   int age;
   try {
       cout << "Enter your age:";
       cin.exceptions(ios::failbit);
       cin >> age;
       cout << "Your age is:" << age;
   }
   catch(...) {
       cout << "You have entered wrong input";
   }
   return 0;
}