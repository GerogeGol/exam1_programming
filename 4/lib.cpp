#include "lib.hpp"

#include <iostream>

namespace lib
{

Node* createNode(data& value)
{
    return new Node{value, nullptr};
}

void addNode2List(List& list, Node* node)
{
    if (isListEmpty(list)) {
        list.start = node;
        return;
    }
    Node* iter = list.start;
    while (iter->next) {
        iter = iter->next;
    }
    iter->next = node;
}

bool isListEmpty(List& list)
{
    return !list.start;
}
void addValue2List(List& list, data& value)
{
    Node* node2Add = createNode(value);
    addNode2List(list, node2Add);
}

void print(List& list)
{
    if (isListEmpty(list)) {
        return;
    }
    Node* iter = list.start;
    while (iter->next) {
        std::cout << iter->value << " -> ";
        iter = iter->next;
    }
    std::cout << iter->value << std::endl;
}

}  // namespace lib