#include <pybind11/pybind11.h>
#include "example.cpp"
using namespace std;

namespace py = pybind11;
PYBIND11_MODULE(main, m)
{
    m.doc() = R"pbdoc(
        Pybind11 main plugin
        -----------------------

        .. currentmodule:: main

        .. autosummary::
           :toctree: _generate

           add
           subtract
    )pbdoc";

    py::class_<hello>(m, "hello")
        .def(py::init<string &>())
        .def("hello_nom", &hello::hello_nom);
    py::class_<hello_plus>(m, "hello_plus")
        .def(py::init<string &>())
        .def("hello_nom", &hello::hello_nom);

#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}