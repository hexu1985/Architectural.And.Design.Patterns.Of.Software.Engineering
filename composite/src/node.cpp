#include "node.h"
#include <iostream>

int Node::level = 0;

void Node::add(std::shared_ptr<Node> comp) {
    std::cout << "Child-method not implemented!" << "\n";
}

void Node::remove(std::shared_ptr<Node> comp) {
    std::cout << "Child-method not implemented!" << "\n";
}

void Node::getChild() {
    std::cout << "Child-method not implemented!" << "\n";
}

const std::string &Node::getName() const {
    return name;
}
