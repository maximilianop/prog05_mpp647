//
// Created by paxm on 3/27/19.
//

#ifndef PROJECT_5_SONG_H
#define PROJECT_5_SONG_H

#endif //PROJECT_5_SONG_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Song {
    private:
        string artist;
        string title;
        int size;

        static const int MAX_SIZE = 512;

    public:
        Song();
        Song(string artist, string title, int size);

        string getArtist() const
        { return artist; }

        void setArtist(string a)
        { artist = a; }

        string getTitle() const
        { return title; }

        void setTitle(string t)
        { title = t; }

        int getSize() const
        { return size; }

        void setSize(int s)
        { size = s; }

        bool operator ==(Song const &rhs);
        bool operator >(Song const &rhs);
        bool operator <(Song const &rhs);

        ~Song();
};