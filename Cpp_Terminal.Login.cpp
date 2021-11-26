/*********************************************************************
* Filename:   Cpp_Terminal.Login.cpp
* Author:     Javier Montenegro (javiermontenegro.github.io)
* Copyright:  @2019
* Details:    this gist is a example of terminal login in C++
*********************************************************************/

#include <iostream>
#include <string>
#include <termios.h>
#include <unistd.h>

using namespace std;

#define SUCCESS 0
#define FAIL 1

int main(int argc, char** argv) 
{
	string username, password;

    cout << "\nEnter your username: " << endl;
    cin >> username;

    termios oldt;
    tcgetattr(STDIN_FILENO, &oldt);
    termios newt = oldt;
    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    cout << "\nEnter password: " << endl;
    cin >> password; 

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

    if( (username == "user") && (password == "pass") ) {
       cout << SUCCESS << endl;
    }else{
       cout << FAIL << endl;	
    }  
    
    return 0;
}//main 