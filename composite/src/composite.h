#ifndef __composite_h
#define __composite_h

#include "node.h"

class Composite: public Node {
public:
    Composite(const std::string &name): Node(name) {}

    void add(std::shared_ptr<Node> comp) override;

    void remove(std::shared_ptr<Node> comp) override;

    void operation() override;
};

#endif
