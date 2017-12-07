# include "frequencies.cpp"

//Math!
//the Numerator.
double num = A;
double mean(std::vector<double> A, std::vector<double> B){
  double sum = 0;
  if (A.size() == 0) return 0;
  for(int i = 0; i < A.size(); i++){
    sum += A[i];
  }

  if (B.size() == 0) return 0;
  for(int i = 0; i < B.size(); i++){
    sum += B[i];
  }
  return sum /(double)A.size()-1 * sum /(double)B.size()-1;
}

//the Denominator part one.
double denom1 = stddev;
double stddev(std::vector<double> A){
  double sum = 0;
  double mean = mean(A);
  if (A.size() <= 1) return 0;
  for(double a:A){
    sum += pow(A-mean,2);
  }
  return sqrt(sum/((double)A.size()-1));
}

//the denominator part 2
double denom2 = ;
double stddev(std::vector<double> B){
  double sum = 0;
  double mean = mean(B);
  if (B.size() <= 1) return 0;
  for(double b:B){
    sum += pow(B-mean, 2);
  }
  return sqrt(sum/((double)B.size()-1));
}

//set the similarity to the Equation.
double similarity = num/(denom1*denom2);
return similarity
