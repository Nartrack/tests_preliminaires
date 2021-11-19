#include <string>
#include <iostream>
#include "example.h"
using namespace std;

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

int add(int i, int j) {
    return i + j;
}

string hello(string name) {
    string x;
    cout << "Please type something "<<"displayed using c++ cout : ";
    cin >> x;
    cout << "you entered : "+x;
    return "hello VERSION MODIFIEE 10"+name;
    
}