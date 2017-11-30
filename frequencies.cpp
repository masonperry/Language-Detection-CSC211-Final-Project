#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>

std::string trans(std::string seq) {
  std::string result;

	for (int i = 0; i < (int) seq.length() - 2; i+=3) {
		std::string tri = seq.substr(i,3);
    //tri code 
  }
  return result;
}

std::vector<std::string> newSeq;
for(unsigned long i = 0; i<= seq.length(); i ++){
  //Makes trigram the size of 3
  tri += seq[i];
  tri += seq[i+1];
  tri += seq[i+2];

  std::cout << tri << std::endl;

  if (tri.length() < 3){
    //returns new sequence if the length of trigram is shorter than three
    return newSeq;
    break;
    }
      //Find the new Sequence
             else {
