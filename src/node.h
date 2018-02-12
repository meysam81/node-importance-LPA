#ifndef NODE_H
#define NODE_H

#include <vector>
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>


#include "network.h"

using namespace std;

class Node
{
private:
    int label;
    int kShell; // k-shell decomposition value
    int degree;
    float nodeInfluence;
    float labelInfluence;
    int newLabel;

public:
    Node();
    Node(int label);

    friend class Network;
};


#endif // NODE_H
