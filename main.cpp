#include <iostream>
#include "Node.h"

using std::cout;
using std::string;

int main() {
    Node<float, void> level2(3.4);
    Node<int, float, void> level1(10, &level2);
    Node<string, int, float, void> root(string("something"), &level1);

    cout << root.getNext()->getNext()->getData();
}