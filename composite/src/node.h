#ifndef __node_h
#define __node_h

#include <string>
#include <memory>
#include <list>

class Node {
protected:
    std::string name = "";
    static int level;   // 输出层的计数器
    std::list<std::shared_ptr<Node>> childElements;

public:
    Node(const std::string &name): name(name) {}

    virtual void operation() = 0;

    virtual void add(std::shared_ptr<Node> comp); 

    virtual void remove(std::shared_ptr<Node> comp); 

    virtual void getChild(); 

    const std::string &getName() const;
};

#endif
