//Mikayla Gempp, Mason Perry
//December 11, 2017

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

//Yay Math!
//The Numerator.
unsigned long long mean(std::vector<unsigned long long> A, std::vector<unsigned long long> B){
  unsigned long long sum = 0;
  if (A.size() == 0){
    return 0;
  }
  for(int i = 0; i < A.size(); i++){
    sum += A[i];
  }
  if (B.size() == 0){
     return 0;
   }
  for(int i = 0; i < B.size(); i++){
    sum += B[i];
  }
  return (sum/(unsigned long long)A.size()-1) * (sum/(unsigned long long)B.size()-1);
  unsigned long long num = (sum/(unsigned long long)A.size()-1) * (sum/(unsigned long long)B.size()-1);
}

//The denominator part one.
unsigned long long stddev(std::vector<unsigned long long> A){
  unsigned long long sum = 0;
  unsigned long long mean = mean(A);
  if (A.size() <= 1) return 0;
  for(unsigned long long a:A){
    sum += pow(A-mean,2);
  }
  return sqrt(sum/((unsigned long long)A.size()-1));
  unsigned long long denom1 = sqrt(sum/((unsigned long long)A.size()-1));
}

//The denominator part two.
unsigned long long stddev2(std::vector<unsigned long long> B){
  unsigned long long sum = 0;
  unsigned long long mean = mean(B);
  if (B.size() <= 1) return 0;
  for(unsigned long long b:B){
    sum += pow(B-mean, 2);
  }
  return sqrt(sum/((double)B.size()-1));
  unsigned long long denom2 = sqrt(sum/((unsigned long long)B.size()-1));
}

//Finds the Lanuguage that is the most similar to the text given
std:: string LanguageFinal(std::vector<string> langStr, unsigned long long math){
for(int k = 0; k < langStr.length(); k++){
  std::string LangFin = langStr[0];
  if(math > LangFin){
    LangFin = langStr[i];
    }
  }
return LangFin;
}

//Main
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
  std::string similarities;
  //Makes Vec vector
  std::vector<int> Vec = frequencies(str);
    //Goes though the languages to find similarities
    for(int a = 0; a < langStr.length(), a++){
      //Makes Lang Vector
      std::vector<int> Lang = frequencies (langStr[a]);
      //Finds numerator of sum
      unsigned long long num = mean(Vec, Lang);
      //Finds first denominator of sum
      unsigned long long denom1 = stddev(Vec);
      //Finds second denominator of sum
      unsigned long long denom2 = stddev2(Lang);
      //Finds the number of the similarity
      unsigned long long math = num/(denom1*denom2);
      similarities += math;
    }
    //Finds the Language it is most similar to
    std::string LangFin = LanguageFinal(langStr, Lang);
  std::cout << std::endl;
}
