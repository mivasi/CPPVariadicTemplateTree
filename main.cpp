#include <iostream>
#include "Node.h"

using std::cout;
using std::string;

int main() {
    Node<float> grandChild(3.4);
    Node<int, Node<float>> child1(10, &grandChild);
    Node<string, Node<int, Node<float>>> root(string("something"), &child1);
}