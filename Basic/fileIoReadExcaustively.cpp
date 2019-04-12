#include <fstream>
#include <iostream>
using namespace std;

//Keepo in mind that string literals are const char*
void readAllFileContents(const char*);

int main()
{
  //Creates an instance of ofstream, and opens example.txt
  ofstream a_file ( "example.txt" );
  // Outputs to example.txt through a_file
  a_file<<"This text will now be inside of example.txt";
  // Close the file stream explicitly
  a_file.close();

  readAllFileContents("example.txt");
}

void readAllFileContents(const char* path){

  ifstream b_file ( path );
  string str="";

  if(b_file.is_open()){
    while (std::getline(b_file, str))
    {
      cout<<str<<endl;
    }
  }

  b_file.close();
}
