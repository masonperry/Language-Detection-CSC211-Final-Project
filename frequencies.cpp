#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>

int Index(std::string tri){
  int arr[19683] = {0};
  std::string i;
    arr[i] += 1;
  return arr;
}

std::string trans(std::string seq){
  std::vector<std::string> newseq;
  std::string tri = []
  for(unsigned j = 0; j<= (int) seq.length(); j++){
    //Makes the trigram, while checking frequencies.
    tri += seq[j]-96;
    tri += seq(([j+1]-96)*27);
    tri += seq(([j+2]-96)*27^2);
    if (tri.length())< 3 {break;}
  return tri;
  }
}
