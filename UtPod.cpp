//
// Created by paxm on 3/26/19.
//

#include "UtPod.h"

using namespace std;

    UtPod::UtPod(){
        podMemSize = MAX_MEMORY;
    }

    UtPod::UtPod(int size){
        if (size >= MAX_MEMORY || size < 0){
            podMemSize = MAX_MEMORY;
        } else podMemSize = size;
    }

    int UtPod::addSong(Song const &s){
        if (getRemainingMemory() == podMemSize){
            songs->s = s;
            songs->next = nullptr;
            return SUCCESS;
        } else if (s.getSize() <= getRemainingMemory()){
                SongNode *newSong = new SongNode;
                newSong->next = songs;
                newSong->s = s;
                songs = newSong;
        } else return NO_MEMORY;
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
                if (temp->next == nullptr) return NOT_FOUND;
                temp = temp->next;
            }
            temp2 = temp->next;
            temp->next = temp->next->next;
            delete temp2;
        }
    }

    void shuffle(){

    }

    void UtPod::showSongList(){
        if (getRemainingMemory() == podMemSize){
            cout << "No songs in UtPod" << endl;
            return;
        }
        SongNode *temp = songs;
        while (temp != nullptr){
            cout << temp->s.getTitle()<< " " << temp->s.getArtist() << " " << temp->s.getSize() << " MB" << endl;
            temp = temp->next;
        }
    }

    void UtPod::sortSongList() {
        SongNode *temp = songs;
        while (temp != nullptr){
            SongNode *min = temp;
            SongNode *temp2 = temp;
            while (temp2 != nullptr){
                if (temp2->s.operator<(min->s)) {
                    min = temp2->next;
                }
                temp2 = temp2->next;
            }
            Song tempSong = min->s;
            min->s = temp->s;
            temp->s = tempSong;
            temp = temp->next;
        }
    }

    int UtPod::getRemainingMemory(){
        
    }