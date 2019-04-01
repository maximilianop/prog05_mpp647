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
    UtPod firstPod(100);
    Song song1("Aerosmith", "Walk this Way", 20);
    Song song2("ZZ Top", "La Grange", 20);
    Song song3("Jimi Hendrix", "Voodoo Child", 20);
    Song song4("Cream", "Sunshine of your Love", 20);
    Song song5("Iggy Pop", "Red Right Hand", 20);
    Song song6("Rush", "Tom Sawyer", 20);
    int result;

    result = firstPod.addSong(song1);
    firstPod.showSongList();
    result = firstPod.addSong(song2);
    firstPod.showSongList();
    result = firstPod.addSong(song3);
    firstPod.showSongList();
    result = firstPod.addSong(song4);
    firstPod.showSongList();
    result = firstPod.addSong(song5);
    firstPod.showSongList();
    result = firstPod.addSong(song6);
    firstPod.sortSongList();
    firstPod.showSongList();
    result = firstPod.removeSong(song5);
    result = firstPod.addSong(song6);
    firstPod.showSongList();
    firstPod.sortSongList();
    firstPod.showSongList();
    result = firstPod.removeSong(song5);
    firstPod.showSongList();
    result = firstPod.removeSong(song4);
    firstPod.showSongList();
    result = firstPod.removeSong(song2);
    firstPod.showSongList();
    result = firstPod.removeSong(song1);
    firstPod.showSongList();
    result = firstPod.removeSong(song6);
    firstPod.showSongList();
    result = firstPod.removeSong(song3);
    firstPod.showSongList();
    return 0;
    //
//    ifstream myFile;
//    myFile.open ("test.txt");
//    if (!(myFile.is_open())) cout << "File not open" << endl;
//
//    int intCommand;
//    string command;
//    string artist;
//    string title;
//    int size;
//
//    while (myFile >> command){
//        intCommand = whichCommand(command);
//
//        switch(intCommand){
//            case 1:
//                myFile >> artist >> title >> size;
//                Song first(artist, title, size);
//                firstPod.addSong(first);
//                break;
//            case 2:
//
//
//        }
//    }

}
