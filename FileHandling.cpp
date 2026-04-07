#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("data.txt");
    out << "Hello Roshan";
    out.close();

    ifstream in("data.txt");
    string text;
    in >> text;

    cout << "File Data: " << text;
    in.close();
}