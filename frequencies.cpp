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


<<<<<<< Updated upstream
int main(int argc, char *argv[]){
  if(argc != 2){
    std::cerr << "Please provide a string to test for trigrams" <<endl;
    exit(EXIT_FAILURE)
  }
  else{
    std::string str = argv[1];
    frequencies(str);
    std::cout << Vec << endl;
    return 0
  }
=======

int main(){
  for(unsigned int x = 0; x <= (unsigned int) Vec.size()-3; x++){
    std::cout << Vec[x] <<std::endl;
  }
  std::string str = "   ";
  //std::cout << Vec;
  return 0;
>>>>>>> Stashed changes
}
