#include "Data.hpp"


Data::Data()
{
}

Data::Data(int p_data)
{
    data = p_data;
}

void Data::setData(int p_data){
    data = p_data;
    }

int Data::getData(){
    return data;
    }

Data::~Data()
{
}
