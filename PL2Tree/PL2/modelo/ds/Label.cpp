#include "Label.hpp"
char data;

Label::Label()
{
    data = '*';
}
Label::Label(char p_data)
{
    data=p_data;
}

Label::~Label()
{
    
}
char Label::getData(){
    return data;
}
void Label::setData(char p_data){
    data=p_data;
}
