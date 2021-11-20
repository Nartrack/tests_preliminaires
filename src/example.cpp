#include <pybind11/pybind11.h>
#include <iostream>
#include "example.h"
using namespace std;

famille::famille(string nom) : nom(nom) {}

string famille::getNom() {
    return nom;
}

void famille::setNom(string lenom){
 nom = lenom;
}

void famille::hello_nom()
{
    cout << "Bonjour la famille " << this->getNom() << " !\n";
}


famille_part::famille_part(string particule,string nom) : famille(nom), particule(particule) {}

string famille_part::getParticule() {
    return particule;
}

void famille_part::setParticule(string part) {
    particule = part;
}

void famille_part::hello_nom()
{
    famille::hello_nom();
    cout << "ou devrais-je dire " << this->getParticule() << " " << this->getNom();
    fflush(stdout);
}

personne::personne(string prenom, famille fam) : prenom(prenom), fam(fam) {}

personne::personne(string prenom, string nom) : prenom(prenom), fam(famille(nom)) {}

personne::personne(string prenom, string particule, string nom) : prenom(prenom), fam(famille_part(particule, nom)) {}

string personne::getPrenom() {
    return prenom;
}

famille personne::getFamille() {
    return fam;
}

void personne::setPrenom(string n_prenom) {
    prenom = n_prenom;
}

void personne::setFamille(famille la_fam) {
    fam = la_fam;
}

void personne::bonjour() {
    cout << "Bonjour " << this->getPrenom() << " " << this->getFamille().getNom();
}

namespace py = pybind11;