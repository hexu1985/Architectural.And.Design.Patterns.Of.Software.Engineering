#ifndef __leaf_h
#define __leaf_h

#include "node.h"

class Leaf: public Node {
public:
    Leaf(const std::string &name): Node(name) {}

    void operation() override;
};

#endif
