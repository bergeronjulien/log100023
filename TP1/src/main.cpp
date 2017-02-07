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

	std::string word;
	
	ifstream file;
  file.open (argv[0]);
  if (!file.is_open()) return 0;
    
  // cout << argv[0] << endl;
	
	while (file >> word) {
  	cout <<  word << endl;
	}

  //utilisation normale
  HashMap hmap;
  hmap.put("v1",1);
  hmap.put("v3",1);
  hmap.put("v11",1);
  hmap.put("v13",13);
  
  int value;
  bool res = hmap.get("v13", value);
  if (res)
    cout << value << endl;
  
  hmap.remove("v1");
  res = hmap.get("v1", value);
  if (res)
    cout << "ERROR: " << value << endl;

  std::vector<std::string> keys=hmap.getKeys();
  for(int i=0;i<keys.size();i++){
    cout << keys[i] << endl;
  }
  
  return 0;
}

