#include <stdio.h>

void HalfPercentage(){

  printf("One half is %d%%\n", 50);
  
}


void DiffInteger(int a, int b){
  int result;
  result = a - b;
  printf("The difference between %d and %d is %d\n", a, b, result); 
}


void DivFloat(float a, float b){

  float result;
  if(b != 0){
    result = a / b;
  }
  else{
    result = 0;
  }

  printf("%.6f / %.6f is %.6f\n", a, b, result);
  
}


int main(){

  HalfPercentage();
  DiffInteger(10,4);
  DivFloat(2.54, 3.55);
  
  return 0;
}
