#include "View.hpp"
#include <iostream>

using namespace std;

View::View()
{
}

View::~View()
{
}

void View::MainInterface()
{
    Core* core = new Core();
    Stack* stack;
    Tree* tree;
    tree = core->getTree();
    int status = 0;
    char* stringen;
    char palabra[40];
    bool findword = false;

    core->loadFile();
    do {
        cout << "Press the follow number  \n";
        cout << "1 Dictionary test. Asking to the user for a word to be searched in the dictionary \n";
        cout << "2 Dictionary tree info. This option will inform about the total number of nodes in the three and the "
                "maximum depth on it\n";
        cout << "3 String generation. Which will automatically generate a 50k char string \n";
        cout << "4 Reverse dictionary\n";
        cout << "5 Program exit\n";

        cin >> status;

        switch(status) {

        case(1):
            cout << "write of the word that you want to search in tree\n";
            cin.clear();
            cin.sync();
            cin.getline(palabra, 40);

            findword = core->dictionaryTest(tree, palabra);
            if(findword) {
                cout << "found\n";
            } else {
                cout << "no found\n";
            }
            break;

        case(2):
            core->dictionaryTreeInfo(tree);
            break;
        case(3):
        core->stringGeneration(500000);

            break;
        case(4):
            core->reverseDictionary(tree);
            break;
        case(5):
            cout << "End of the program";
            break;
        }
    } while(status != 5);
}