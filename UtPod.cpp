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
        } else if (s.getSize() <= getRemainingMemory()){
                if (songs->s.operator>(s)){
                    SongNode *add = new SongNode;
                    add->s = s;
                    add->next = songs;
                    songs = add;
                } else {
                    SongNode *temp = songs;
                    while (temp->next->s.operator<(s)) {
                        temp = temp->next;
                    }
                    SongNode *add = new SongNode;
                    add->s = s;
                    add->next = temp->next;
                    temp->next = add;
                }
        } else return NO_MEMORY;
    }

    int UtPod::removeSong(Song const &s){
        if (songs->s.operator==(s)){
            SongNode *temp = songs;
            songs = songs->next;
        }
    }
