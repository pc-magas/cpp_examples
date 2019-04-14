#include <iostream>
#include <cstring>

const char RED[8]="\033[0;31m";
const char GREEN[8]="\033[0;32m";
const char YELLOW[8]="\033[0;33m";
const char NO_COLOR[7]="\033[0m";

const int OPTION_RED=1;
const int OPTION_GREEN=2;
const int OPTION_YELLOW=3;

/**
* Prints the start message
*/
void print_start_message();
/**
* Get the user select option
*/
int get_option();

/**
* Prints the message with the user provided color option
* @param int selectedColor The user's color selection
*/
void print_message_with_color(int selectedColor);

int main()
{
  int option=get_option();
  print_message_with_color(option);
  return 0;
}

void print_start_message(){
  std::cout<<"Select a color"<<std::endl;
  std::cout<<RED<<OPTION_RED<<") red"<<NO_COLOR<<std::endl;
  std::cout<<GREEN<<OPTION_GREEN<<") green"<<NO_COLOR<<std::endl;
  std::cout<<YELLOW<<OPTION_YELLOW<<") yellow"<<NO_COLOR<<std::endl;
}

int get_option(){
  int option=0;
  do {
    print_start_message();
    std::cin>>option;
  } while(option==0 || option > OPTION_YELLOW);
  return option;
}

void print_message_with_color(int selectedColor) {

  char color_to_print[8];

  switch(selectedColor){
    case OPTION_RED:
      // color_to_print=RED;
      strcpy(color_to_print,RED);
      break;
    case OPTION_GREEN:
      // color_to_print=GREEN;
      strcpy(color_to_print,GREEN);
      break;
    case OPTION_YELLOW:
      // color_to_print=YELLOW;
      strcpy(color_to_print,YELLOW);
      break; //useless but usefull when needed to put antother option
  }

  std::cout<<color_to_print<<"Hello Colored World"<<NO_COLOR<<std::endl;
  std::cout<<NO_COLOR;
}
