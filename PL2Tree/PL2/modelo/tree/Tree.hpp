#ifndef TREE_HPP
#define TREE_HPP
#include "../ds/Node.hpp"
class Tree
{
private:
    Node* root;
    int numbernode;
    int depht;
public:
    Tree();
    ~Tree();
    Node* getParent(Node* node);
    Node* leftMostChild(Node* node);
    Node* rightSibling(Node* node);
    Node* getRoot();
    void setRoot(Node* node);
    void makeNull(Node* node);
    Node* create(Node* nodeS,char p_data);
    void setleftMostChild(char a);
    int getNumberNodes();
    void setNumberNodes(int number);
    int getDepth();
    void setDepth(int number);
    Node* buscarchar(Node* node,char a);
};

#endif // TREE_HPP
