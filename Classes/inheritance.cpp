#include <iostream>
#include <fstream>

class FileValidator{

  public:
    FileValidator(char *fileName);
    ~FileValidator();
    bool validate();
    char* getFileName();
  private:
    const char* filename;

  protected:
    std::ifstream openFile();
    void closeFile(std::ifstream file);
};

class JsonValidator:public FileValidator{
  public:
    bool validate();
};

int main() {
  JsonValidator v((char*)"./dummy.txt");

  if(v.validate()){
    std::cout<<"The file "<<v.getFileName()<<" is a valid JSON (Yeah,right)";
  } else {
    std::cout<<"WTF you gave me bro!!!";
  }

  return 1;
}

FileValidator::FileValidator(char *fileName){
  this->filename=fileName;
}

FileValidator::~FileValidator(){

}

bool FileValidator::validate(){
  return false;
}

char* FileValidator::getFileName(){
  return (char *)this->filename;
}

std::ifstream FileValidator::openFile(){
  std::ifstream file(this->filename);
  return file;
}

void FileValidator::closeFile(std::ifstream file){
  file.close();
}

bool JsonValidator::validate(){

  bool valid=false;

  std::ifstream file = this->openFile();
  std::string s;

  //Dummy logic just for inheritance demontstration
  while (std::getline(file, s))
  {
    if(s.find('{')!=std::string::npos){
      valid=true;
      break;
    }
  }

  this->closeFile(file);

  return valid;
}
