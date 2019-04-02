//
// Created by paxm on 3/26/19.
//

#include "UtPod.h"

using namespace std;
    void UtPod::swap(Song &s1, Song &s2){
        Song holder;
        holder = s1;
        s1 = s2;
        s2 = holder;
    }

    int UtPod::findNumSongs(SongNode *&s){
        int numSongs = 0;
        SongNode *temp = s;

        while (temp != nullptr){
            numSongs += 1;
            temp = temp->next;
        }
        return numSongs;
    }

    UtPod::UtPod(){
        podMemSize = MAX_MEMORY;
        srand(time(NULL));

        SongNode *first = new SongNode;
        songs = first;
        songs->next = nullptr;
    }

    UtPod::UtPod(int size){
        if (size >= MAX_MEMORY || size < 0){
            podMemSize = MAX_MEMORY;
        } else podMemSize = size;

        srand(time(NULL));
        SongNode *first = new SongNode;
        songs = first;
        songs->next = nullptr;
    }

    int UtPod::addSong(Song const &s){
        if (getRemainingMemory() == podMemSize){
            songs->s = s;
            return SUCCESS;
        } else if (s.getSize() <= getRemainingMemory()){
                SongNode *temp = songs;
                while (temp->next != nullptr) {
                    temp=temp->next;
                }
                SongNode *newSong = new SongNode;
                temp->next = newSong;
                newSong->s = s;
                newSong->next = nullptr;
                return SUCCESS;
        } else {
            cout <<"Memory Full" << endl << endl;
            return NO_MEMORY;
        }
    }

    int UtPod::removeSong(Song const &s){
        if (getRemainingMemory() == podMemSize) return NOT_FOUND;
        if (songs->s.operator==(s)){
            SongNode *temp = songs;
            songs = songs->next;
            delete temp;
        } else {
            SongNode *temp = songs;
            SongNode *temp2;
            while (!(temp->next->s == s)){
                if (temp->next->next == nullptr) return NOT_FOUND;
                temp = temp->next;
            }
            temp2 = temp->next;
            temp->next = temp2->next;
            delete temp2;
            return SUCCESS;
        }
    }

    void UtPod::shuffle(){
        for (int i = 0; i < (findNumSongs(songs)*2); i++){
            int p1 = rand()%findNumSongs(songs);
            int p2 = rand()%findNumSongs(songs);
            SongNode *temp1 = songs;
            SongNode *temp2 = songs;

            for(int j = 0; j < p1; j++) temp1 = temp1->next;
            for(int j = 0; j < p2; j++) temp2 = temp2->next;

            swap(temp1->s, temp2->s);
        }
    }

    void UtPod::showSongList(){
        if (getRemainingMemory() == podMemSize){
            cout << "No songs in UtPod" << endl;
            return;
        }
        SongNode *temp = songs;
        while (temp != nullptr){
            cout << temp->s.getTitle()<< ", " << temp->s.getArtist() << ", " << temp->s.getSize() << endl;
            temp = temp->next;
        }
        cout<<endl;
    }

    void UtPod::sortSongList() {
        SongNode *temp = songs;
        while (temp != nullptr){
            SongNode *min = temp;
            SongNode *temp2 = temp;
            while (temp2 != nullptr){
                if (temp2->s.operator<(min->s)) {
                    min = temp2;
                }
                temp2 = temp2->next;
            }
            swap(min->s, temp->s);
            temp = temp->next;
        }
    }

    int UtPod::getRemainingMemory(){
        SongNode *temp = songs;
        int usedMemory = 0;
        while(temp != nullptr){
            usedMemory = usedMemory + temp->s.getSize();
            temp = temp->next;
        }
        return (podMemSize-usedMemory);
    }

    void UtPod::clearMemory(){
        while (songs != nullptr){
            SongNode *temp = songs;
            songs = songs->next;
            delete temp;
        }
    }

        UtPod::~UtPod(){
        clearMemory();
    }