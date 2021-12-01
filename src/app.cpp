#include <pybind11/pybind11.h>
#include "example.cpp"
using namespace std;

namespace py = pybind11;
PYBIND11_MODULE(app, m)
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

    py::class_<famille>(m, "famille")
        .def(py::init<string &>())
        .def_property("nom", &famille::getNom, &famille::setNom)
        .def("hello_nom", &famille::hello_nom);
    py::class_<famille_part, famille>(m, "famille_part")
        .def(py::init<string, string &>())
        .def_property("particule", &famille_part::getParticule, &famille_part::setParticule)
        .def("hello_nom", &famille_part::hello_nom);
    py::class_<personne>(m, "personne")
        .def(py::init<string, famille &>())
        .def(py::init<string, string &>())
        .def(py::init<string, string, string &>())
        .def_property("prenom", &personne::getPrenom, &personne::setPrenom)
        .def_property("famille", &personne::getFamille, &personne::setFamille)
        .def("bonjour", &personne::bonjour);

#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}