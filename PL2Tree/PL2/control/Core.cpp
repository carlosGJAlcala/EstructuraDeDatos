#include "Core.hpp"
#include <cstdlib>

#include <fstream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <cstdlib>

#include <iostream>

#include <cstdio>
#include <vector>
using namespace std;
using std::cout;
using std::endl;
using std::fstream;
using std::ofstream;
using std::string;
// Stack* stack;
Tree* tree;
List** listaList;
int profundidad;
char* palabra;
int conpalabra;
Core::Core()
{
    profundidad = 0;
    tree = new Tree();
    conpalabra = 0;
    palabra = new char[conpalabra];
    conpalabra = -1;
    // stack = new Stack();
}

Core::~Core()
{
}

Tree* Core::getTree()
{
    return tree;
}
bool Core::dictionaryTest(Tree* tree, char* c)
{
    bool resultado = false;
    Node* nodocursor = tree->getRoot();
    int a = 0;

    for(int i = 0; i < strlen(c); i++) {

        nodocursor = tree->buscarchar(nodocursor, c[i]);

        if(nodocursor == nullptr) {
            resultado = false;
            break;
        } else {

            nodocursor = nodocursor->getleftmostchild();

            resultado = true;
        }
    }
    return resultado;
}

void Core::dictionaryTreeInfo(Tree* tree)
{
    int numbernodes = tree->getNumberNodes();
    cout << "\nthe number of node is:\n";
    cout << numbernodes;
    cout << "\n";
    int numberdepth = tree->getDepth();
    cout << "\nthe number of depth is:\n";
    cout << numberdepth;
    cout << "\n";
}
void Core::stringGeneration(int num)
{
    lista = new List();
    listaList = new List*[10000];
    int numberword = 0;
    int numChar = 0;
    string word = "";
    Queue* queue = new Queue(num);
    int cd = 0;
    char chardinamico;
    int numaleatorio;
    int prob[] = { 0, 0, 0, 20, 30, 40, 50, 60, 70, 80, 90, 95, 100 };
    int contadorC = 0;

    while(numberword < num) {
        numaleatorio = rand() % 101;
        numberword++;
        if(numaleatorio > prob[contadorC]) {
            // genero un caracter asci de forma aleatoria, las letras en Asci van desde el 65 hasta 165 por eso le sumo
            // 65
            numChar = rand() % 26 + 97;
            contadorC++;
            chardinamico = numChar;
            queue->enqueue(numChar);
        } else {

            contadorC = 0;
            cd = 0;
            queue->enqueue(32);
            // chardinamico = new char[cd];
        }
    }
    // una vez acabado cada palabra es extraida y buscada en el dicionario

    int a;
    char* chardinamico1 = new char[cd];
    bool existe = false;
    ofstream Guardar;
    string name;
    cout << "\nwrite name for file  that contain your found words\n";
    cin.clear();
    cin.sync();
    getline(cin, name);
    Guardar.open(name, ios::trunc);

    for(int i = 0; i < queue->size(); i++) {

        a = queue->dequeue();
        if(a == 32) {

            chardinamico1[cd] = '\0';
            // cout << ' ';
            // cout << chardinamico1;

            existe = dictionaryTest(tree, chardinamico1);
            if(existe) {
                Guardar << chardinamico1 << "\n";
                // cout <<chardinamico1<<"-";
                lista->insert(chardinamico1);
                memset(chardinamico1, 0, cd);
                cd = 0;
            } else {
                memset(chardinamico1, 0, cd);
                cd = 0;
            }

        } else {

            chardinamico1[cd] = a;
            cd++;
        }
        queue->enqueue(a);
    }

    Guardar.close();
    Element* iterator = new Element();
    iterator = lista->getInicial();
    char* chara;
    List* listaiterator;
    for(int i = 0; i < 10000; i++) {
        listaList[i] = new List();
    }
    for(int i = 0; lista->getLenght(); i++) {
        chara = iterator->getElementData();
        cout << chara;
        int numberhash = funcHash(chara);
        listaiterator = listaList[numberhash];
        //miramos el tema de las colisiones
        if(listaiterator->getLenght() > 0) {
            if(chara == listaiterator->getInicial()->getElementData()) {
                listaiterator->insert(chara);
            } else {
                bool salir = true;
                int contador = numberhash;
                do {

                    listaiterator = listaList[contador];
                    if(listaiterator->getLenght() > 0) {
                        if(chara == listaiterator->getInicial()->getElementData()) {
                            salir = false;
                        }
                    }
                    contador = (contador + 1) % 10000;
                } while((listaiterator->getLenght() > 0) && (salir));
                listaiterator->insert(chara);
            }

        } else {
            listaiterator->insert(chara);
        }

        memset(chara, 0, strlen(chara));
        if(i < lista->getLenght() - 1) {
            cout << "-";
        }

        if(iterator->getElementPointer() == nullptr) {
            break;
        } else {
            iterator = iterator->getElementPointer();
        }
    }
    // miro duplicados
    char* primero;
    char* temp;
    for(int i = 0; i < 10000; i++) {
        int numberTamayo = listaList[i]->getLenght();
        if(numberTamayo > 0) {
            List* listaDuplicado = listaList[i];
            Element* actual = listaDuplicado->getInicial();
            cout << "\nthe elemen found in the list is:\n";
            cout << actual->getElementData();
            cout << "\nthis repet in the list:\n";
            cout << listaDuplicado->getLenght();
        }
    }
}
void Core::reverseDictionary(Tree* tree)
{
    // preorder
    // raiz
    Node* inicial = tree->getRoot();
    Stack* stack = new Stack();
    conpalabra = 0;
    palabra = new char[conpalabra];
    palabra[conpalabra] = '\0';
    preorder(inicial, palabra, stack);
    while(!stack->empty()) {
        cout << stack->pop();
        cout << "\n";
    }
}
void Core::preorder(Node* node, char* palabra, Stack* stack)
{
    char* nuevapalabra = new char[strlen(palabra)];
    conpalabra = strlen(palabra);
    for(int i = 0; i < conpalabra; i++) {
        nuevapalabra[i] = palabra[i];
    }

    char a = node->getElement()->getData();
    nuevapalabra[conpalabra] = a;
    nuevapalabra[conpalabra + 1] = '\0';

    if(node->getleftmostchild() != nullptr) {

        preorder(node->getleftmostchild(), nuevapalabra, stack);
    }
    if(node->getleftmostchild() == nullptr) {

        stack->push(nuevapalabra);
        memset(nuevapalabra, 0, strlen(nuevapalabra));
    }

    if(node->getrightsibling() != nullptr) {

        preorder(node->getrightsibling(), palabra, stack);
        memset(palabra, 0, strlen(palabra));
    }
}
void Core::saveDictionary(Tree tree)
{
}
void Core::loadDictionary(char* caract)
{

    letras = 0;
    Node* nodecursor = tree->getRoot();
    // mientras el puntero de caracteres sea distinto a fin de texto
    // cout<< caract;
    for(int i = 0; i < strlen(caract); i++) {
        // voy encapsular cada cadena de texto (conjunto de nodos), hasta que haya un espacio, el espacio va significar

        if((caract[i] == ' ')) {
            nodecursor = tree->getRoot();
            letras = 0;
        }

        else {
            if(letras > 0) {

                if(nodecursor->getleftmostchild() == nullptr) {
                    letras++;
                    contador = tree->getNumberNodes();
                    contador++;
                    tree->setNumberNodes(contador);
                    nodecursor->setleftmostchild(caract[i]);
                    nodecursor = nodecursor->getleftmostchild();
                } else {
                    letras++;
                    nodecursor = nodecursor->getleftmostchild();
                    nodecursor = tree->create(nodecursor, caract[i]);
                }
            } else {
                letras++;
                nodecursor = tree->create(nodecursor, caract[i]);
            }
        }
    }
}

void Core::saveFile(char* caract)
{
    ofstream ficheroSalida;
    string name;
    cout << "\n write name for file \n";
    cin.clear();
    cin.sync();

    getline(cin, name);
    ficheroSalida.open(name, ios::out);
    for(int j = 0; j < strlen(caract); j++) {

        ficheroSalida << caract[j];
    }
    ficheroSalida.close();
}
void Core::loadFile()
{

    int depth = tree->getDepth();
    string name;
    cout << "\nwrite name for file that you want to load in the tree \n";
    cin.clear();
    cin.sync();

    getline(cin, name);
// si no lo encuntra utilizar 

    ifstream input_file(name, std::ifstream::in);
    vector<char> bytes;

    char byte = 0;

    int cd = 0;
    char* chardinamico = new char[cd];
    if(input_file.is_open()) {
        while(input_file.get(byte)) {
            if((byte == '\n') || (byte == ' ')) {

                chardinamico[cd++] = '\0';
                if(strlen(chardinamico) > depth) {
                    tree->setDepth(strlen(chardinamico));
                    depth = strlen(chardinamico);
                }
                loadDictionary(chardinamico);
                cd = 0;
                memset(chardinamico, 0, strlen(chardinamico));

            } else {

                chardinamico[cd++] = byte;
            }
        }
    }
}

void Core::saveFileQueue(Queue* _queue)
{
    ofstream Guardar;
    string name;
    cout << "\n write name for file \n";
    cin.clear();
    cin.sync();

    getline(cin, name);
    Guardar.open(name, ios::trunc);
    while(!_queue->isEmpty()) {
        char l = _queue->dequeue();
        Guardar << l;
    }
    Guardar.close();
}
int Core::funcHash(char* charhash)
{
    int numero = (int)charhash % 10000;
    return numero;
}