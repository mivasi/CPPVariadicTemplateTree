#include <iostream>
#include "Node.h"

using std::cout;
using std::string;

int main() {
    Node level2(3.4);
    Node level1(10, &level2);
    Node root(string("something"), &level1);

    cout << root.getNext()->getNext()->getData();
}