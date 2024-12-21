#include "Graphe.h"

//Ajouter un sommet
void Graphe::ajouterSommet(int sommet)
{
    if (adj.find(sommet) == adj.end())
    {
        adj[sommet] = {};
        cout << "Sommet " << sommet << " ajoute." << endl;
    }
    else 
    {
        cout << "Sommet " << sommet << " existe deja." << endl;
    }
}

//Ajouter une arête (u -> v)
void Graphe::ajouterArete(int u, int v)
{
    if (adj.find(u) != adj.end() && adj.find(v) != adj.end()) 
    {
        adj[u].push_back(v); 
        cout << "Arete ajoutee : " << u << " -> " << v << endl;
    }
    else 
    {
        cout << "Erreur : un ou les deux sommets n'existent pas." << endl;
    }
}

//Afficher le graphe
void Graphe::afficher()
{
    cout << "Representation du graphe :" << endl;
    for (const auto& sommet : adj) {
        cout << sommet.first << " -> ";
        for (int voisin : sommet.second) {
            cout << voisin << " ";
        }
        cout << endl;
    }
}

