#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>

using namespace std;
//Mikayla Gempp, Mason Perry
//December 4 2017

//Function for finding the frequencies
vector<int> frequencies(std::string seq){

  std::vector<int> miniVec(19683);
  for(unsigned int x = 0; x < (unsigned int) seq.length()-2; x ++){
    int tri = 0;
    //check for spaces.
    if (seq[x] == 32){
      seq[x] = 96;
    }

    //checks for Spaces.
    else if (seq[x+1] == 32){
      seq[x+1]= 96;
    }

    //checks for spaces.
    else if (seq[x+2] == 32){
      seq[x+2]= 96;
    }

    //checks the trigram to find the index value
    else{
      tri += int ((seq[x] - 96) * (pow)(27,2));
      tri += int ((seq[x+1] - 96) * 27);
      tri += int (seq[x+2] - 96);
    }
    cout<<"tri: "<<tri<<" ";
    miniVec[tri]+=1;
    cout<<miniVec[tri];
  }
  //Returns the vector at the end of the Function
  return miniVec;
}

int main(int argc, char *argv[]){
  if(argc != 2){
    std::cerr << "Please provide a string to test for trigrams" <<endl;
    exit(EXIT_FAILURE);
  }
  else {
    std::string str = argv[1];
    //Makes the vector Vec from the function frequencies
    std::vector<int> Vec = frequencies(str);
    std::string FinalStr;
    for(int x = 0; x <= (int)Vec.size()-1; x++){
    std::cout << Vec[x] << " ";
  }
    std::cout<<FinalStr<< endl;
    std::cout<<Vec.size();

    return 0;
  }
}
