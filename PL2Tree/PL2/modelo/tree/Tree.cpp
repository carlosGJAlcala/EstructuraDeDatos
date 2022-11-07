#include "Tree.hpp"

Tree::Tree()
{
    numbernode = 0;
    depht = 0;
    Label* label = new Label();
    label->setData('*');
    root = new Node();
    root->setElement(label);
}

Tree::~Tree()
{
}

Node* Tree ::leftMostChild(Node* node)
{
    if(node->getleftmostchild() == nullptr) {
        return node;
    } else {
        Node* nuevoNodo = node->getleftmostchild();
        leftMostChild(nuevoNodo);
    }
}

Node* Tree::getRoot()
{
    return root;
}

void Tree::setRoot(Node* node)
{
    root = node;
}
void Tree::makeNull(Node* node)
{
    // Recorremos el arbol de forma postorden para borrar como ultimo elemento el nodo raiz
    // post orden izq-derecho- raiz
}
// inserta nodos hijos dependiendo si hay nodos dentro del
Node* Tree::create(Node* node, char p_data)
{
    Node* nuevonode = buscarchar(node, p_data);
    if(nuevonode != nullptr) {
        return nuevonode;
    } else {

        while((node->getrightsibling() != nullptr)) {
            node = node->getrightsibling();
        }
        numbernode++;

        node->setrightsibling(p_data);

        return node->getrightsibling();
    }
}
Node* Tree::buscarchar(Node* node, char a)
{
    Node* resultado = nullptr;
    Label* ele = nullptr;
    if(node == nullptr) {
        return resultado;
    }
    ele = node->getElement();
    char dato = ele->getData();
    if(dato == a) {
        resultado = node;
    } else {
        while((node->getrightsibling() != nullptr)) {
            node = node->getrightsibling();
            if(node->getElement()->getData() == a) {
                resultado = node;
                break;
            }
        }
    }

    return resultado;
}
int Tree::getNumberNodes()
{
    return numbernode;
}
void Tree::setNumberNodes(int number)
{
    numbernode = number;
}
int Tree::getDepth()
{
    return depht;
}
void Tree::setDepth(int number)
{
    depht = number;
}