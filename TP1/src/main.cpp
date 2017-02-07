/*
 * File:   main.cpp
 * Author: bram
 *
 * Created on November 8, 2015, 8:39 PM
 */

#include <iostream>
#include <fstream>
#include "HashMap.h"

using namespace std;

/* Ce programme permet de générer et modifier des hmap */
int main(int argc, char** argv) {


	HashMap mymap;

	std::string word;

	ifstream file;
  file.open (argv[1]);
  if (!file.is_open()) return 0;

	while (file >> word) {
		mymap.compteur(word);
	}

  //utilisation normale

	std::vector<std::string> mykeys = mymap.getKeys();
	std::string motPopulaire = "";
	int valeur = 0;

	for(int i = 0; i < mykeys.size(); i++) {
		int value = 0;
		mymap.get(mykeys[i], value);
		if(value > valeur) {
			valeur = value;
			motPopulaire = mykeys[i];
			//cout << mykeys[i] << value << endl;
		}
	}

	cout 	<< "Le mot le plus populaire est : \""
				<< motPopulaire << "\" avec " << valeur
				<< " repetitions." << endl;


  return 0;
}
