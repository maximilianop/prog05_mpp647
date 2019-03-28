//
// Created by paxm on 3/27/19.
//

#include "Song.h"

using namespace std;

    Song::Song() {
        artist = "";
        title = "";
        size = MAX_SIZE;
    }

    Song::Song(string a, string t, int s){
        artist = a;
        title = t;
        size = s;
    }

    bool Song::operator ==(Song const &rhs){
       if (artist != rhs.artist) return false;
       if (title != rhs.title) return false;
       if (size != rhs.size) return false;
       return true;
    }

    bool Song::operator <(Song const &rhs){

        if (artist.compare(rhs.artist) == 0){
            if (title.compare(rhs.title) == 0){
                if (size == rhs.size) return false;
                else if (size < rhs.size) return true;
                else return false;
            } else if (title.compare(rhs.title) < 0) return true;
            else return false;
        } else if (artist.compare(rhs.artist) < 0) return true;
        else return false;
    }

    bool Song::operator >(Song const &rhs){
        if (artist.compare(rhs.artist) == 0) {
            if (title.compare(rhs.title) == 0){
                if (size == rhs.size) return false;
                else if (size > rhs.size) return true;
                else return false;
            } else if (title.compare(rhs.title) > 0) return true;
            else return false;
        } else if (artist.compare(rhs.artist) > 0) return true;
        else return false;
    }
