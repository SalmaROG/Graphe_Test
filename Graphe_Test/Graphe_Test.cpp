#include <iostream>
#include"Graphe.h"
int main() {
    Graphe graphe;
    int choix;

    do {
        cout << endl;
        cout << "Menu :" << endl;
        cout << "1. Ajouter un sommet" << endl;
        cout << "2. Ajouter une arete" << endl;
        cout << "3. Afficher le graphe" << endl;
        cout << "4. Quitter" << endl;
        cout << "Entrez votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1: {
            int sommet;
            cout << "Entrez la valeur du sommet : ";
            cin >> sommet;
            graphe.ajouterSommet(sommet);
            break;
        }
        case 2: {
            int u, v;
            cout << "Entrez le sommet source : ";
            cin >> u;
            cout << "Entrez le sommet destination : ";
            cin >> v;
            graphe.ajouterArete(u, v);
            break;
        }
        case 3: {
            graphe.afficher();
            break;
        }
        case 4: {
            cout << "Au revoir !" << endl;
            break;
        }
        default:
            cout << "Choix invalide. Réessayez." << endl;
        }
    } while (choix != 4);

    return 0;
}

