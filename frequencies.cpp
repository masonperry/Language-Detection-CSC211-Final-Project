#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>

using namespace std;
std::vector<int> Vec(19682);

void index(int tri, std::vector<int> Vec){
  Vec[tri] ++;
}
//Explain
void frequencies(std::string seq){
  //std::vector<std::string> newseq;
  int tri = 0;
  for(unsigned int x = 0; x <= (unsigned int) seq.length()-2; x ++){
    if (seq.length() < 2){
      break;
    }
    //Makes the trigram, while checking frequencies using bases.
    if (seq[x] == 32){
      seq[x] = 96;
    }
    else if (seq[x+1] == 32){
      seq[x+1]= 96;
    }
    else if (seq[x+2] == 32){
      seq[x+2]= 96;
    }
    else{
      tri += ((seq[x] - 96) * (pow)(27,2));
      std::cout << tri << std::endl;
      tri += ((seq[x+1] - 96) * 27);
      std::cout << tri << std::endl;
      tri += (seq[x+2] - 96);
      std::cout << tri<< std::endl;
    }
    index(tri, Vec);
  }
}
  for(vec, ,  )


int main(){

  std::string str = "zzz";
  //std::cout << Vec;
  return 0;
}
