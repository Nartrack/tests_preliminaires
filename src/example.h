using namespace std;

class famille {
    private:
        string nom;
    public:
        famille(string nom);
        string getNom();
        void setNom(string);
        void hello_nom();
};

class famille_part : public famille {
    private:
        string particule;
    public:
        famille_part(string particule, string nom);
        string getParticule();
        void setParticule(string);
        void hello_nom();
};


class personne {
    private:
        string prenom;
        famille fam;
    public:
        personne(string prenom, famille fam);
        personne(string prenom, string nom);
        personne(string prenom,string particule, string nom);
        string getPrenom();
        famille getFamille();
        void setPrenom(string);
        void setFamille(famille);
        void bonjour();
};