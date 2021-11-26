/*********************************************************************
* Filename:   Cpp_Terminal.Login.cpp
* Author:     Javier Montenegro (javiermontenegro.github.io)
* Copyright:  @2019
* Details:    this gist is a example of terminal menu in C++
*********************************************************************/
 
#include <iostream>
#include <cstdlib>


using namespace std;

void menu();
void mainMenu();
void optionsMenu();
void options();
int choice1 = 0;
int choice2 = 3;


void menu(){
        do {
        choice2 = 0;
        mainMenu();

        switch(choice1) {
            case 1:
                cout << "Pew pew!\n";
                break;

            case 2:
                options();
                break;

            case 3:
                break;
        }//End switch
    } while(choice1 != 3);
}//End menu

void options(void) {
    do {
        optionsMenu();
        switch(choice2){

            case 1:
                cout << "So difficult!\n";
                break;

            case 2: 
                cout << "Beep!\n";
                break;

            case 3:
                break;

            default: 
                break;

        }//End switch

    } while(choice2 != 3);
}//End options

void mainMenu(void) {
    cout << "Main Menu\n";
    cout << "1 - Start game\n";
    cout << "2 - Options\n";
    cout << "3 - Quit\n";
    cout << "Please choose: ";
            cin >> choice1;
}//End mainMenu

void optionsMenu(void) {
    cout << "Options Menu\n";
    cout << "1 - Difficulty\n";
    cout << "2 - Sound";
    cout << "3 - Back\n";
    cout << "Please choose: ";
            cin >> choice2;
}//End optionsMenu

int main(int argc, char** argv) 
{
    menu();
    return 0;
}//End main
