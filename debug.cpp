#ifndef DEBUG 
#define DEBUG 1 // set debug mode
#endif

#if DEBUG
#define log(...) {\
    char str[100];\
    sprintf(str, __VA_ARGS__);\
    std::cout << "[" << __FILE__ << "][" << __FUNCTION__ << "][Line " << __LINE__ << "] " << str << std::endl;\
    }
#else
#define log(...)
#endif
#include<iostream>
int main()
{

if(1==0)
{

std::cout<<"hello";

}
log(">>> debug...");
}