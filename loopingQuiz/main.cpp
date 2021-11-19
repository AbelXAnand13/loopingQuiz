#include <iostream>
#include <string>
#include <stdio.h>
#include <thread>
using namespace std;

int main() {
    string name;
    bool quit1 = false;
    bool quit2 = false;
    bool quit3 = false;
    bool mainQuit = false;
    int choice;
    int played = 0;
    int ans1;
    int ans2;
    int ans3;
    cout << "Please enter your name\n";
    cin >> name;
    cout << "Welcome " << name << "\n";
    while (!mainQuit){
        if (played == 0) {
            cout << "Do you want to do a science quiz?\nYes(1)      No(2)\n";
        }
        else {
            cout << "Do you want to do the quiz again?\nYes(1)      No(2)\n";
        }
        cin >> choice;
        switch (choice) {
            case 1:
                quit1 = false;
                quit2 = false;
                quit3 = false;
                while(!quit1) {
                cout << "| What is the force that keeps us in the ground?\n1) Friction\n2) Gravity\n3) Push\n4) Drag\n";
                    cin >> ans1;
                    switch (ans1) {
                        case 2:
                            quit1 = true;
                            break;
                        default :
                            cout << "Try again\n";
                            break;
                    }
                }
                while (!quit2) {
                    cout << "|| What dwarf planet was thought to be a planet until 2006?\n1) The Moon\n2) Europa\n3) Pluto\n4) Makemake\n";
                    cin >> ans2;
                    switch (ans2) {
                        case 3:
                            quit2 = true;
                            break;
                        default :
                            cout << "Try again\n";
                            break;
                    }
                }
                while (!quit3) {
                cout << "||| What gas is essential for us to breathe?\n1) Helium\n2) Hydrogen\n3) Carbon\n4) Oxygen\n";
                cin >> ans3;
                    switch (ans3) {
                        case 4:
                            quit3 = true;
                            break;
                        default :
                            cout << "Try again\n";
                            break;
                    }
                }
                    played ++;
                break;
            case 2:
                cout << "That's rude :(\n";
                mainQuit = true;
                break;
            default:
                cout << "BRUH\n";
                break;
        }
    
}
}
