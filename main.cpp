#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include "variables.h"
using namespace std;


int main()
{
   
   //create before/during boot
   //profile data
    struct profile {
        string name;
        string username;
        int PIN;
    }profile;
    // app select number
    int appSelect;
    //notepad varitable
    string Notepadtext;
   
int applooper = 5;

 // Password slash Bootup Sequence
    cout << "ScutoidC++" << endl;
    

    cout << "Starting Core Services..." << endl;
    string one;
    string two;
    string three;
    string four;
    string five;
    string oper;
    string variable;   
    string coreness;
    int aGlobalVariable;
    int numthree;
    int numone;
    int numtwo;
    int password;
    int createdPass;
    int enteredpass;

        //  switch for home screen  
        cout << "Select a number and see what it does" << endl;
        
        
        
        cin >> appSelect;

        
        if (applooper == 5){
          
        
            
         switch (appSelect) {
        case 1:
        cout << "you pressed 1. Good Job :D" << endl;
            break;
        case 2:
            cout << "Welcome to notepad. press enter to get text repeated"<< endl;
            cin >> Notepadtext;
            cout << Notepadtext << endl;
            break;
        case 3:
            cout << "Enter first name" << endl;
            cin >> profile.name;
            cout << "Enter PIN" << endl;
            cin >> profile.PIN;
            cout << "Enter username" << endl;
            cin >> profile.username;
            cout <<"welcome" << profile.name << endl;
            cout << "Username =" << profile.username;
            //Validate Info
            if (profile.PIN == createdPass) {
            
                cout << "Correct";
            }
            else {
                cout << "incorrect";
            }
            
            
            break;
        case 4:
            cout << "Welcome to calculator" << endl;
            cout << "addition only" << endl;   
            cout << "enter first number" << endl;
            cin >> numone;
            cout << "enter second" << endl;
            cin >> numtwo; 
            cout << numone + numtwo << endl; 
               
            break;
        case 5:
            cout << "you can find my github at: https://www.github.com/inlnx" << endl;
            break;
        case 6:

        break;
        case 7:
            cout << "You clicked 7, Seven is my favorite number" << endl;
            break;
        case 8:
            cout << "Eight bottles of water on the wall" << endl;
            cout << "Eight bottles of water" << endl;
            cout << "I took one down, drank it" << endl;
            cout << "Seven bottles of water on the wall" << endl;
            break;
        case 9:
            cout << "Wink Wink, if you press 10 something will happen" << endl;
            break;
        case 10:
           cout << "Powering off" << endl; 
            break;
        default:
            cout << "error 4" << endl;
            break;
    }
}
    }

   









    
          




    
