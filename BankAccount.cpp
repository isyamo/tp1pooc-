#include "BankAccount.hpp"

//constru par defaut
BankAccount::BankAccount() :
		m_numero("N/A"), m_solde(0.0) {
}

//Constru parametre
BankAccount::BankAccount(const std::string &numero, double soldeInitial) :
		m_numero(numero), m_solde(soldeInitial) {
}

// Depot
void BankAccount::deposer(double montant) {
	if (montant <= 0) {
		std::cerr << "[Erreur] Le montant à déposer doit être positif.\n";
		return;
	}
	m_solde += montant;
	std::cout << "[Info] Dépôt de " << montant
			<< " DH effectué. Nouveau solde : " << m_solde << " DH\n";
}

//Retrait
bool BankAccount::retirer(double montant) {
	if (montant <= 0) {
		std::cerr << "[Erreur] Le montant à retirer doit être positif.\n";
		return false;
	}
	if (montant > m_solde) {
		std::cerr << "[Erreur] Fonds insuffisants. Solde actuel : " << m_solde
				<< " DH\n";
		return false;
	}
	m_solde -= montant;
	std::cout << "[Info] Retrait de " << montant
			<< " DH effectué. Nouveau solde : " << m_solde << " DH\n";
	return true;
}

// Affichage
void BankAccount::afficher() const {
	std::cout << "Compte N°: " << m_numero << " | Solde: " << m_solde << " DH\n";
}


// getters
std::string BankAccount::getNumero() const {
	return m_numero;
}

double BankAccount::getSolde() const {
	return m_solde;
}
