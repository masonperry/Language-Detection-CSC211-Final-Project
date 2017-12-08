//Notes from Class.

#include <cmath>

double mean(std::vector<double> A){
  double sum = 0;
  if (A.size() == 0) return 0;

  for(int i = 0; i < A.size(); i++){
//for (double a:A) sum += a;
//for (auto a:A) sum += a;
    sum += A[i];
  }
  return sum /(double) A.size();
}

double stddev(std::vector<double> A){
  double sum = 0;
  double mean = mean(A);
  if (A.size()<= 1) return 0;
  for(double a:A){
    sum += pow(A-mean,2);
  }
  return sqrt(sum/((double)A.size()-1));
}

/*
Abstraction:
Classes
Objects
Polymorphism/Templates
Recurrsion
Enumeration
Higher-Order Functions

Final Review
Binary math

Pointers

Draw a Picture of Memory

int x = 3;
int *y = &x;
int *z = *y;

Draw a box
3 lives on top  (level A)
A lives on next (level B)
B lives on next (level C)

and so on!

*/
