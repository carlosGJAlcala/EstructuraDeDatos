#include "Data.hpp"

Data::Data()
{
    data = "*";
}

Data::Data(char* p_data)
{
    data = p_data;
}

void Data::setData(char* p_data)
{
    data = p_data;
}

char* Data::getData()
{
    return data;
}

Data::~Data()
{
}
