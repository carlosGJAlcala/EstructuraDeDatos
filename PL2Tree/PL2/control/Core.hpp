#ifndef CORE_HPP
#define CORE_HPP

#include "../modelo/list/List.hpp"
#include "../modelo/queue/Queue.hpp"
#include "../modelo/stack/Stack.hpp"
#include "../modelo/tree/Tree.hpp"
class Core
{
public:
    int contador;
    int letras;
    Core();
    ~Core();
    void loadtree();
    bool dictionaryTest(Tree* tree, char* c); // busca una palabra en un dicionario.
    void dictionaryTreeInfo(Tree* tree);      // devuelve el max de nodos  y la profundidad del arbol
    void stringGeneration(int num);           // genera 50K de char string con las reglas que venga el pdf
    void reverseDictionary(Tree* tree);       // da la vuelta a un dicionario
    void saveDictionary(Tree tree);           // sirve para guardar el dicionario
    void loadDictionary(char* caract);        // carga el dicionario en un arbol
    void saveFile(char* caract);
    void loadFile();
    int funcHash(char*);
    void preorder(Node* node, char* palabra, Stack* stack);

    void saveFileQueue(Queue* _queue);

    List* lista;

    Tree* getTree();
};

#endif // CORE_HPP
