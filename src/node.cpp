#include "node.h"

Node::Node()
{
    Node(0);
}

Node::Node(int label)
{
    this->label = label;
    this->kShell = 0;
    this->degree = 0; // no edges in the beginning
    labelInfluence = 0;
    newLabel = 0;
}
