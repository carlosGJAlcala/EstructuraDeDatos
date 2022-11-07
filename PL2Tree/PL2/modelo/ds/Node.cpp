#include "Node.hpp"

Node::Node()
{
    leftmostchild = nullptr;
    rightsibling = nullptr;
    label = new Label('*');
}

Node::Node(char date)
{
    leftmostchild = nullptr;
    rightsibling = nullptr;
    label = new Label(date);
}
Node::~Node()
{
    delete[] rightsibling;
    delete[] leftmostchild;
    delete[] label;
}

Label* Node::getElement()
{
    return label;
}

void Node::setElement(Label* _label)
{
    label = _label;
}

Node* Node::getleftmostchild()
{
    return leftmostchild;
}
void Node::setleftmostchild(char p_data)
{
    leftmostchild=new Node(p_data);
}

Node* Node::getrightsibling()
{
    return rightsibling;
}
void Node::setrightsibling(char p_data)
{
      rightsibling=new Node();
      rightsibling->setElement(new Label(p_data));
}
