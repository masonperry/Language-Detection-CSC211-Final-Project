#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>

std::string trans(std::string seq) {
  std::string result;

	for (int i = 0; i < (int) seq.length() - 2; i+=3) {
		std::string tri = seq.substr(i,3);

    //tri code

  }
  return result;


  std::vector<std::string> newseq;
  for(unsigned long i = 0; i<= seq.length(); i ++){
    //Makes the trigram
    tri += seq[i];
    tri += seq[i+1];
    tri += seq[i+2];
  }

  std::cout << tri << std::endl;

  if (tri.length() < 3){
    for(int j = 0; j < tri.length(); j++ ){
      if (j[i] == " "){
        newseq[0] += 1
      }
      else if(j[i] == "a"){
        newseq[1] += 1
      }
      else if(j[i] == "b"){
        newseq[2] += 1
      }
      else if(j[i] == "c"){
        newseq[3] += 1
      }
      else if(j[i] == "d"){
        newseq[4] += 1
      }
      else if(j[i] == "e"){
        newseq[5] += 1
      }
      else if(j[i] == "f"){
        newseq[6] += 1
      }
      else if(j[i] == "g"){
        newseq[7] += 1
      }
      else if(j[i] == "h"){
        newseq[8] += 1
      }
      else if(j[i] == "i"){
        newseq[9] += 1
      }
      else if(j[i] == "j"){
        newseq[10] += 1
      }
      else if(j[i] == "k"){
        newseq[11] += 1
      }
      else if(j[i] == "l"){
        newseq[12] += 1
      }
      else if(j[i] == "m"){
        newseq[13] += 1
      }
      else if(j[i] == "n"){
        newseq[14] += 1
      }
      else if(j[i] == "o"){
        newseq[15] += 1
      }
      else if(j[i] == "p"){
        newseq[16] += 1
      }
      else if(j[i] == "q"){
        newseq[17] += 1
      }
      else if(j[i] == "r"){
        newseq[18] += 1
      }
      else if(j[i] == "s"){
        newseq[19] += 1
      }
      else if(j[i] == "t"){
        newseq[20] += 1
      }
      else if(j[i] == "u"){
        newseq[21] += 1
      }
      else if(j[i] == "v"){
        newseq[22] += 1
      }
      else if(j[i] == "w"){
        newseq[23] += 1
      }
      else if(j[i] == "x"){
        newseq[24] += 1
      }
      else if(j[i] == "y"){
        newseq[25] += 1
      }
      else if(j[i] == "z"){
        newseq[26] += 1
      }
    }
    //returns new sequence if the length of trigram is shorter than three
    return newSeq;
    break;
    }
      //Find the new Sequence
       else {}
