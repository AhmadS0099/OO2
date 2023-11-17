#include "ProcessFile.h"
#include <iostream>

ProcessFile::ProcessFile()
{
}

ProcessFile::~ProcessFile()
{
}

void ProcessFile::process(std::ifstream& cInput)
{
    int32_t count; 
    cInput.read((char*)&count, sizeof(int32_t));

    for (int i = 0; i < count; i++) 
    {
        int32_t type; 
        cInput.read((char*)&type, sizeof(int32_t)); 

        switch (type) 
        {
        case LONG: 
        {
            int32_t value; 
            cInput.read((char*)&value, sizeof(int32_t)); // read the value
            std::cout << value << std::endl; 
            break;
        }
        case SHORT:
        {
            int16_t value; 
            cInput.read((char*)&value, sizeof(int16_t)); 
            std::cout << value << std::endl; 
            break;
        }
        case DOUBLE: 
        {
            double value; 
            cInput.read((char*)&value, sizeof(double)); 
            std::cout << value << std::endl; 
            break;
        }
        case FLOAT:
        {
            float value; 
            cInput.read((char*)&value, sizeof(float));
            std::cout << value << std::endl; 
            break;
        }
        default: // if the type is invalid
        {
            std::cerr << "Invalid type: " << type << std::endl;
            break;
        }
        }
    }
}
