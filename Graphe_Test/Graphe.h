#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Graphe {
private:
    map<int, vector<int>> adj;

public:

    //Ajouter un sommet
    void ajouterSommet(int sommet);

    //Ajouter une arête (u -> v)
    void ajouterArete(int u, int v);

    //Afficher le graphe
    void afficher();
};

