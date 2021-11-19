using namespace std;

class hello
{
public:
    string nom;
    hello(string nom);
    void hello_nom();
};

class hello_plus : public hello
{
public:
    hello_plus(string nom);
    void hello_nom();
};