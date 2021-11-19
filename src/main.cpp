#include <pybind11/pybind11.h>
#include <string>
#include "example.h"
#include "example.cpp"
using namespace std;

namespace py = pybind11;

PYBIND11_MODULE(main, m) {
    m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------

        .. currentmodule:: python_example

        .. autosummary::
           :toctree: _generate

           add
           subtract
    )pbdoc";

    m.def("add", &add, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc",
    py::arg("i") = 1, py::arg("j") = 2);

    //notation plus courte pour les arguments
    using namespace pybind11::literals;
    m.def("subtract", [](int i, int j) { return i - j; }, R"pbdoc(
        Subtract two numbers

        Some other explanation about the subtract function.
    )pbdoc", "i"_a=1, "j"_a=2);

    m.def("hello", &hello, R"pbdoc(
        returns a string with hello and the name input of the user
        )pbdoc");

    m.attr("la_reponse") = 42;
    py::object monde = py::cast("le Monde");
    m.attr("quoi") = monde;

#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}
