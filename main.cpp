#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>

using namespace std;

string revcomp(string seq);

int main(int argc, char *argv[]) {

	ifstream infile(argv[1]);
	if (!infile.fail()){
    string line;
		vector<string> myVec;
		getline(infile,line);
		std::cout << line << endl;


    while (getline(infile, line)) {
        // do something with the line
				myVec.push_back(line);
		}

		for (int i = (int)myVec.size()-1; i >= 0; i--){
			std::cout<< revcomp(myVec[i]) << endl;
		}
    infile.close();

	} else {

    cerr << "Could not open file " << argv[1] << endl;
    exit(EXIT_FAILURE);
	}
