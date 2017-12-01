#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>

int Index(std::string tri){
  int i = tri[0]*27pow(0)+tri[1]*27pow(1)+tri[2]*27pow(2)
  return i
}

std::string trans(std::string seq) {
  std::vector<std::string> newseq;
  std::string tri = [];
  for(unsigned long j = 0; j<= seq.length(); j ++){
    //Makes the trigram
    tri += seq[j];
    tri += seq[j+1];
    tri += seq[j+2];
    if (tri.length())<3{
      break;
    }
    i = Index(tri);
  }
  int arr[19683] = {0};
    arr[i] += 1;


  std::string[i]
}
