#ifndef DATA_HPP
#define DATA_HPP

class Data
{
private:
    char* data;
    

public:
    Data();
    Data(char* p_data);
    char* getData();
    void setData(char* p_data);
    ~Data();

};

#endif // DATA_HPP
