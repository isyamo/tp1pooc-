<<<<<<< HEAD
#include "Book.hpp"
#include "Library.hpp"
=======
#include "BankAccount.hpp"
>>>>>>> cffb09d25c7111464da90539e7306876bdfb7f42
#include <iostream>

int main() {

<<<<<<< HEAD
	Library maBibliotheque;

	// Création de livres
	Book l1("Le Dernier Jour d'un Condamne", "Victor Hugo", "978-207040", 1829);
	Book l2("Antigone", "Jean Anouilh", "978-207036", 1944);

	// Test d'ajout
	std::cout << "<<< Ajout des livres >>>\n";
	maBibliotheque.ajouterLivre(l1);
	maBibliotheque.ajouterLivre(l2);

	// Test d'ajout avec doublon d'ISBN (doit afficher une erreur)
	std::cout << "\n<<< Test de doublon d'ISBN >>>\n";
	Book l3("Autre livre", "Auteur X", "978-207040", 2020);
	maBibliotheque.ajouterLivre(l3);

	// Lister les livres
	std::cout << "\n";
	maBibliotheque.listerLivres();

	// Test de recherche par ISBN
	std::cout << "\n<<< Recherche par ISBN (978-207036) >>>\n";
	const Book *trouve = maBibliotheque.trouverParISBN("978-207036");
	if (trouve != nullptr) {
		std::cout << "Livre trouvé : ";
		trouve->afficher();
	} else {
		std::cout << "Livre non trouvé.\n";
	}
=======
	std::cout << "<<< Test 1 : Création des comptes >>>" << std::endl;

	BankAccount c1; // Utilisation du  constructeur par défaut

	BankAccount c2("7076-1234-5678-90", 300.0); // Utilisation du  constructeur paramétré

	c1.afficher();
	c2.afficher();

	std::cout << "\n<<< Test 2 : Opérations sur le compte c2 >>>" << std::endl;
	c2.deposer(150.0);
	c2.deposer(-50.0); // affiche une erreur sur std::cerr

	c2.retirer(100.0);
	c2.retirer(1000.0); // affiche une erreur de fonds insuffisants
	c2.retirer(-20.0);  // affiche une erreur de montant négatif

	std::cout << "\n<<< Test 3 : État final >>>" << std::endl;
	c2.afficher();

	std::cout << "\n<<< Test 4 : Utilisation des Getters >>>" << std::endl;
	std::cout << "Numéro récupéré : " << c2.getNumero() << std::endl;
	std::cout << "Solde récupéré : " << c2.getSolde() << " DH " << std::endl;
>>>>>>> cffb09d25c7111464da90539e7306876bdfb7f42

	return 0;
}
