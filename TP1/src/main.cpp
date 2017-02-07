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

	HashMap map;

	std::string word;

	ifstream file;
  file.open (argv[1]);
  if (!file.is_open()) return 0;

  //cout << argv[1] << endl;

	while (file >> word) {
		if(word != " ") {
			map.compteur(word);
		}
	}


  //utilisation normale

  return 0;
}
