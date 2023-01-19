#include <cstdio>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream file("text.txt", ios::in | ios::out);
  // cout << file.good();

  char a;
  while (!file.eof()) {
    file.read(&a, sizeof(char));
    cout << a << "  final de la linea " << endl;
  }
}
