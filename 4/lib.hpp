#ifndef LIB_H
#define LIB_H

namespace lib
{
typedef int data;
struct Node {
    data value;
    Node* next;
};

struct List {
    Node* start = nullptr;
};

static Node* createNode(data&);
static void addNode2List(List&, Node*);
static bool isListEmpty(List&);

void addValue2List(List&, data&);
void print(List&);

}  // namespace lib

#endif