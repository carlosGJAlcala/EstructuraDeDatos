#ifndef LABEL_HPP
#define LABEL_HPP

class Label
{
private:
    char data;

public:
    Label();
    Label(char p_data);
    ~Label();

    char getData();
    void setData(char p_data);
};

#endif // LABEL_HPP
