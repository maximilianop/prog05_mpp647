//
// Created by paxm on 3/27/19.
//

#include "UtPod.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int whichCommand(string command){
    if (command == "a") return 1;
    if (command == "r") return 2;
    if (command == "sh") return 3;
    if (command == "shl") return 4;
    if (command == "sol") return 5;
    if (command == "cl") return 6;
    if (command == "gt") return 7;
    if (command == "gr") return 8;
}

int main (int argc, char *argv[]){
    UtPod firstPod;

    ifstream myFile;
    myFile.open ("test.txt");
    if (!(myFile.is_open())) cout << "File not open" << endl;

    int intCommand;
    string command;
    string artist;
    string title;
    string size;

    while (myFile >> command){
        intCommand = whichCommand(command);

        switch(intCommand){
            case 1:
                myFile >> artist;
                

        }
    }

}
