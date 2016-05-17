#include <cstdlib>
#include <iostream>

using namespace std;

class DynamicArray{
private:
    string *dynamicArrayPtr;
    int size;
};

DynamicArray(){
    delete[] *dArrayPtr;
    size = 0;
}

void DynamicStringArray::addEntry(string newStr){
    string *nArray = new string[size + 1];

    for(int x = 0; x < size; ++x){
        nArray[x] = dArrayPtr[x];
    }

    delete[] dArrayPtr;
    dArrayPtr = nArray;
    nArray[size];
    ++size;
}

int main(int argc, char *argv[])
{

    string *dynamicArray = new string[size + 1];

    system("PAUSE");
    return EXIT_SUCCESS;
}