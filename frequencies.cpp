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
      else if(j[i] == 'a' || j[i] == 'A'){
        newseq[1] += 1
      }
      else if(j[i] == 'b' || j[i] == 'B'){
        newseq[2] += 1
      }
      else if(j[i] == 'c' || j[i] == 'C'){
        newseq[3] += 1
      }
      else if(j[i] == 'd' || j[i] == 'D'){
        newseq[4] += 1
      }
      else if(j[i] == 'e' || j[i] == 'E'){
        newseq[5] += 1
      }
      else if(j[i] == 'f' || j[i] == 'F'){
        newseq[6] += 1
      }
      else if(j[i] == 'g' || j[i] == 'G'){
        newseq[7] += 1
      }
      else if(j[i] == 'h' || j[i] == 'H'){
        newseq[8] += 1
      }
      else if(j[i] == 'i' || j[i] == 'I'){
        newseq[9] += 1
      }
      else if(j[i] == 'j' || j[i] == 'J'){
        newseq[10] += 1
      }
      else if(j[i] == 'k' || j[i] == 'K'){
        newseq[11] += 1
      }
      else if(j[i] == 'l' || j[i] == 'L'){
        newseq[12] += 1
      }
      else if(j[i] == 'm'||j[i] == 'M'){
        newseq[13] += 1
      }
      else if(j[i] == 'n' || j[i] == 'N'){
        newseq[14] += 1
      }
      else if(j[i] == 'o' || j[i] == 'O'){
        newseq[15] += 1
      }
      else if(j[i] == 'p' j[i] == 'P'){
        newseq[16] += 1
      }
      else if(j[i] == 'q'|| j[i] == 'Q'){
        newseq[17] += 1
      }
      else if(j[i] == 'r'|| j[i] == 'R'){
        newseq[18] += 1
      }
      else if(j[i] == 's' || j[i] == 'S'){
        newseq[19] += 1
      }
      else if(j[i] == 't' || j[i] == 'T'){
        newseq[20] += 1
      }
      else if(j[i] == 'u' || j[i] == 'U'){
        newseq[21] += 1
      }
      else if(j[i] == 'v' || j[i] == 'V'){
        newseq[22] += 1
      }
      else if(j[i] == 'w' || j[i] == 'W'){
        newseq[23] += 1
      }
      else if(j[i] == 'x' || j[i] == 'X'){
        newseq[24] += 1
      }
      else if(j[i] == 'y' || j[i] == 'Y'){
        newseq[25] += 1
      }
      else if(j[i] == 'z' || j[i] == 'Z'){
        newseq[26] += 1
      }
    }
  }
  else{
    //returns new sequence if the length of trigram is shorter than three
    return newSeq;
  }
    break;
    }
      //Find the new Sequence
       else {}
