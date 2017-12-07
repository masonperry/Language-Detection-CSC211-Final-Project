//Mikayla Gempp, Mason Perry
//December 4 2017

#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>

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

  //Note: Devin said in office hours not to void arguments.
  (void)argc;
	string type = argv[1];
	ifstream infile;
	if (!infile.fail()){
		infile.open("");
		char ch;
		string result = "";
		if (type.compare("-e") == 0){
			while (infile.get(ch)) {
				char item = encrypt(ch, atoi(argv[2]));
				result += item;
			}
		}
		else if (type.compare("-d") == 0){
			while (infile.get(ch)) {
			char item = decrypt(ch, atoi(argv[2]));
			result += item;
		}
		}
			infile.close()
	} else {
		cerr << "Could not open file " << endl;
		exit(EXIT_FAILURE);
	}
	ofstream outfile("".txt);
	if (!outfile.fail()){
		outfile << result;
		outfile.close();
	} else {
		cerr << "Could not open file " << "".txt << endl;
		exit(EXIT_FAILURE);
	}
  else {
    std::string str = argv[1];
    //Makes the vector Vec from the function frequencies
    std::vector<int> Vec = frequencies(str);
  for(int x = 0; x <= (int)Vec.size()-1; x++){
    std::cout << Vec[x] << " ";
  }
  std::cout << std::endl;
  }
}
