#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>

using namespace std;
//Mikayla Gempp, Mason Perry

//Explain
vector<int> frequencies(std::string seq){
  int tri = 0;
  std::vector<int> miniVec(19682);
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
      tri += ((seq[x+1] - 96) * 27);
      tri += (seq[x+2] - 96);
    }

    miniVec.push_back(tri);
  }
  return miniVec;
}

int main(int argc, char *argv[]){
  if(argc != 2){
    std::cerr << "Please provide a string to test for trigrams" <<endl;
    exit(EXIT_FAILURE);
  }
  else {
    std::string str = argv[1];

    std::vector<int> Vec = frequencies(str);

    for(int i = 0; i < 19683; i++){
      std::string FinalStr = [];
      to_string(Vec[i]);
      FinalStr +=
    }
    std::cout<<FinalStr<< endl;

    return 0;
  }
}
