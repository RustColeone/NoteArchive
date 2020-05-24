// countDucks.cpp 
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <string>
#include <stdio.h>
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int TotalAnimal = 0, TotalDucks = 0, NonDucks = 0;

string Files(string filename);

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  cout<<Files(argv[1]);
  return 0;
}

string Files(string filename){//Define(It is..)
  string temp = "Report for " + filename + ":\n";
	ifstream infile;
   	infile.open(filename.c_str());
   	if (infile.is_open()){
      	string tp;
      	while(getline(infile, tp)){
        	TotalAnimal++;
          if(tp == "duck"){
            TotalDucks++;
          }else{
            NonDucks++;
          }
		    }
		infile.close(); 
   	}
    temp += "   Animal count:    " + to_string(TotalAnimal) + "\n";
    temp += "   Duck count:      " + to_string(TotalDucks) + "\n";
    temp += "   Non duck count:  " + to_string(NonDucks) + "\n";
    return temp;
}
