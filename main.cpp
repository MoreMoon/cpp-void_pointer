#include <iostream>
#include<string.h>

void modify(void* ptr)
{
    char* temp = new char[50];
    strcpy(temp,"testing");
    __ptr=(void*)temp;
    std::cout<<"__ptr="<<(char*)__ptr<<endl;
}

int main()
{
    char* str;
    modify(str);
    cout<<"str="<<str;
    return 0;
}