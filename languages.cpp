//Mikayla Gempp, Mason Perry
//December 11, 2017

#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>


using namespace std;

//Function for finding the frequencies
vector<unsigned long long> frequencies(std::string seq){

  std::vector<unsigned long long> miniVec(19683);
  for(unsigned int x = 0; x < (unsigned int) seq.length()-2; x ++){
    int tri = 0;

    //check for spaces.
    if (seq[x] == 32){seq[x] = 32;}
    else{tri += int ((seq[x] - 96) * (pow)(27,2));}

    //checks for Spaces.
    if (seq[x+1] == 32){seq[x+1]= 32;}
    else{tri += int ((seq[x+1] - 96) * 27);}

    //checks the trigram to find the index value
    if (seq[x+2] == 32){ seq[x+2] = 32;}
    else{tri += int (seq[x+2] - 96);}
    miniVec[tri]+=1;
  }

  //Returns the vector at the end of the Function
  return miniVec;
}

//The Numerator.
unsigned long long Num(std::vector < unsigned long long > A, std::vector< unsigned long long > B){
  unsigned long long sum = 0;
  if (A.size() <= 1) {
    exit(EXIT_FAILURE);
    return 0;
  }
else if (B.size() <= 1){
  exit(EXIT_FAILURE);
  return 0;
}
else{
  for(unsigned long long i = 0; i < A.size(); i++) {
    sum += A[i]*B[i];
  }
}
  return sum;
}

//The denominator part one.
unsigned long long stddev(std::vector< unsigned long long > A) {
  unsigned long long sumA2 = 0;

  if (A.size() <= 1){
    exit(EXIT_FAILURE);
    return 0;
  }

  else{
  for(unsigned long long d = 0; d < A.size(); d++) {
    sumA2 += A[d]  * A[d];
  }
}
  return sqrt(sumA2);
}

//The denominator part two.
unsigned long long stddev2(std::vector< unsigned long long > B) {
  unsigned long long sumB2 = 0;

  if (B.size() <= 1) {
    exit(EXIT_FAILURE);
     return 0;
   }
   else{
  for(unsigned long long e = 0; e < B.size(); e++) {
    sumB2 += B[e]*B[e];
  }

}
  return sqrt(sumB2);
}

//Main
int main(int argc, char *argv[]){
  //Open file
  ifstream infile(argv[1]);
  vector < string > langStr;
  std::string str;
  if (!infile.fail()){
    string line;
    //Creates string for languages in argv
    for(int b = 1; b < argc-1; b++){
      langStr.push_back(argv[b]);
    }
    //Makes integer for length of argv
    int argLen = argc;
    //Creates a string for the test text
    str += (argv[argLen-1]);
    infile.close();
  }

  //Throw Errors!
    else {
    cerr << "Could not open file " << argv[1] << endl;
    exit(EXIT_FAILURE);
  }

  //FinalLang is the Language the text is most similar to
  std::string FinalLang;

  //Helps find the most simiilar
  unsigned long long FinalMath = 0;

  //Makes Vec the vector
  std::vector< unsigned long long > Vec = frequencies(str);

    //Goes though the languages to find similarities
    for(int a = 0; a < int (langStr.size()); a++) {

      //Makes Lang Vector
      std::vector < unsigned long long > Lang = frequencies(langStr[a]);

      //Finds numerator of sum.
      unsigned long long num = Num(Vec, Lang);

      //Finds first denominator of sum.
      unsigned long long denom1 = stddev(Vec);

      //Finds second denominator of sum.
      unsigned long long denom2 = stddev2(Lang);

      //Finds the number of the similarity
      unsigned long long math = num/(denom1 * denom2);
      if(math > FinalMath) {
        FinalLang = langStr[a];
      }

      else {
        FinalLang = FinalLang;
      }
    }
  cout << FinalLang <<endl;
  return 0;
}
