//Mikayla Gempp, Mason Perry
//December 4 2017

#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>
#include "languages.h"

using namespace std;

//Function for finding the frequencies
vector<int> frequencies(std::string seq){

  std::vector<int> miniVec(19683);
  for(unsigned int x = 0; x < (unsigned int) seq.length()-2; x ++){
    int tri = 0;

    //check for spaces.
    if (seq[x] == 32){seq[x] = 32;}
    else{tri += int ((seq[x] - 96) * (pow)(27,2));}

    //checks for Spaces.
    if (seq[x+1] == 32){seq[x+1]= 32;}
    else{tri += int ((seq[x+1] - 96) * 27);}

    //checks the trigram to find the index value
    if (seq[x+2] == 32){seq[x+2] = 32;}
    else{tri += int (seq[x+2] - 96);}
    miniVec[tri]+=1;
  }
  //Returns the vector at the end of the Function
  return miniVec;
}

int main(int argc, char *argv[]){

  //Open file
  ifstream infile(argv[1]);
  vector < string > langStr;
  if (!infile.fail()){
    string line;
    while(getline(infile, line)){
      langStr.push_back(line);
    }
    infile.close();
  }
  //Throw Errors!
    else {
    cerr << "Could not open file " << argv[1] << endl;
    exit(EXIT_FAILURE);
  }
    std::string str = argv[1];
    //Makes the vector Vec from the function frequencies
    std::vector<int> Vec = frequencies(str);
  //for(int x = 0; x <= (int)Vec.size()-1; x++){
    //std::cout << Vec[x] << " ";
  //}
  unsigned long long num = mean(Vec, Vec);
  unsigned long long denom1 = stddev(Vec);
  unsigned long long denom2 = stddev2(Vec);
  unsigned long long math = num/(denom1*denom2);
  std::cout << std::endl;
}
