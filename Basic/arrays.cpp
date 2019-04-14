#include <iostream>
#include<cstdlib>
#include<ctime>
#include <iomanip>
using namespace std;

const int ARRAY_LENGTH=5;
const int PRINT_LENGTH=6;
const int FIRST_COLUMN_LENGTH=5;
const char ARRAY_SEPERATOR=' ';
const char YELLOW[8]="\033[0;33m";
const char NO_COLOR[7]="\033[0m";

void fillArrayWithRandomNumbers(unsigned int[ARRAY_LENGTH][ARRAY_LENGTH]);
void printArray(unsigned int[ARRAY_LENGTH][ARRAY_LENGTH]);

int main() {

  unsigned int x[ARRAY_LENGTH][ARRAY_LENGTH];

  fillArrayWithRandomNumbers(x);
  cout<< "Array with random elements"<< endl;
  printArray(x);

  return 0;
}


void fillArrayWithRandomNumbers(unsigned int array[ARRAY_LENGTH][ARRAY_LENGTH]){
  srand(time(NULL));
  int i,j;
  for(i=0;i<ARRAY_LENGTH;i++){
    for(j=0;j<ARRAY_LENGTH;j++){
      array[i][j]=rand()%10000;
    }
  }
}

void printArray(unsigned int array[ARRAY_LENGTH][ARRAY_LENGTH]) {
  int i,j;
  cout<<internal;
  for(i=0;i<ARRAY_LENGTH;i++){
    cout<<setw(FIRST_COLUMN_LENGTH)<<setfill(ARRAY_SEPERATOR)<<YELLOW<<"LINE "<<i+1<<':'<<NO_COLOR;
    for(j=0;j<ARRAY_LENGTH;j++) {
      cout<<setw(PRINT_LENGTH)<<setfill(ARRAY_SEPERATOR)<<array[i][j];
    }
    cout<<endl;
  }
  cout<<endl;
}
