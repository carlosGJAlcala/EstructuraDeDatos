#ifndef NODE_HPP
#define NODE_HPP
#include "Label.hpp"
class Node
{
private:
    Node* leftmostchild;
    Node* rightsibling;
    Label* label;


public:
    Node();
    ~Node();
    Node(char p_data);
    Node* getleftmostchild();
    void setleftmostchild(char p_data);
    void setElement(Label* _label);
    Label* getElement();
    Node* getrightsibling();
    void setrightsibling(char p_data);

};

#endif // NODE_HPP
