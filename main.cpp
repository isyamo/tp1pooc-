#include "BankAccount.hpp"
#include <iostream>

int main() {

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

	return 0;
}
