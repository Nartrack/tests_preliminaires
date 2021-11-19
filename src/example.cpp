#include <pybind11/pybind11.h>
#include <iostream>
#include "example.h"
using namespace std;

hello::hello(string nom) : nom(nom)
{
    
}
void hello::hello_nom()
{
    cout << "Hello " << nom << " !";
}

hello_plus::hello_plus(string nom) : hello(nom)
{

}

void hello_plus::hello_nom()
{
    this->nom = "Loulou";
    hello_nom();
    cout << "et toi ?";
}

namespace py = pybind11;


