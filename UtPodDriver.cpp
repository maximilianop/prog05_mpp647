//
// Created by paxm on 3/27/19.
//

#include "UtPod.h"

using namespace std;


int main ( ){
    int result;
    Song song1("Aerosmith", "Walk this Way", 15);
    Song song2("ZZ Top", "La Grange", 15);
    Song song3("Jimi Hendrix", "Voodoo Child", 20);
    Song song4("Cream", "Sunshine of your Love", 15);
    Song song5("Iggy Pop", "Red Right Hand", 20);
    Song song6("Rush", "Tom Sawyer", 25);
    Song song7("Alice in Chains", "Rain When I Die", 20);
    Song song8("Alice in Chains", "Would", 20);
    Song song9("Led Zeppelin", "Stairway to Heaven", 35);
    Song song10("Led Zeppelin", "Kashmir", 25);
    Song song11("Black Flag", "Slip It In", 15);
    Song song12("Black Flag","Rise Above", 20);
    Song song13("Metallica", "One", 35);
    Song song14("Metallica", "One Live", 40);
    Song song15("Metallica", "Fade to Black", 30);
    Song song16("J Cole", "Fire Squad", 20);
    Song song17("Kendrick Lamar", "Alright", 20);
    Song song18("Audioslave", "Like a Stone", 20);
    Song song19("Red Hot Chili Peppers", "Transcending", 25);
    Song song20("System of a Down", "Chop Suey", 25);
    Song song21("Linkin Park", "In the End", 25);
    Song song22("Johnny Cash", "Big River", 20);
    Song song23("Johnny Cash", "Man in Black", 20);
    Song song24("Sheck Wes", "Live Sheck Wes", 17);
    Song song25("Fugazi", "Waiting Room", 20);
    Song song26("Fugazi", "waiting Room", 25);

    //tests code with a default constructor.
    //adds multiple songs until pod is full, then lists the pod.
    //sort is tested, shuffle is tested thrice to demonstrate randomness

    UtPod firstPod;
    result = firstPod.addSong(song1);
    result = firstPod.addSong(song2);
    result = firstPod.addSong(song3);
    result = firstPod.addSong(song4);
    result = firstPod.addSong(song5);
    result = firstPod.addSong(song6);
    result = firstPod.addSong(song7);
    result = firstPod.addSong(song8);
    result = firstPod.addSong(song9);
    result = firstPod.addSong(song10);
    result = firstPod.addSong(song11);
    result = firstPod.addSong(song12);
    result = firstPod.addSong(song13);
    result = firstPod.addSong(song14);
    result = firstPod.addSong(song15);
    result = firstPod.addSong(song16);
    result = firstPod.addSong(song17);
    result = firstPod.addSong(song18);
    result = firstPod.addSong(song19);
    result = firstPod.addSong(song20);
    result = firstPod.addSong(song21);
    result = firstPod.addSong(song22);

    firstPod.showSongList();
    result = firstPod.addSong(song23);
    firstPod.showSongList();

    firstPod.sortSongList();
    firstPod.showSongList();

    firstPod.shuffle();
    firstPod.showSongList();

    firstPod.shuffle();
    firstPod.showSongList();

    firstPod.shuffle();
    firstPod.showSongList();

    //remove songs
    result = firstPod.removeSong(song22);
    result = firstPod.removeSong(song20);
    result = firstPod.removeSong(song18);
    result = firstPod.removeSong(song16);
    result = firstPod.removeSong(song14);
    result = firstPod.removeSong(song12);
    result = firstPod.removeSong(song10);
    result = firstPod.removeSong(song8);
    result = firstPod.removeSong(song6);
    result = firstPod.removeSong(song4);
    result = firstPod.removeSong(song2);
    firstPod.showSongList();

    //shows duplicate songs and ordering by size
    result = firstPod.addSong(song23);
    result = firstPod.addSong(song23);
    result = firstPod.addSong(song24);
    result = firstPod.addSong(song25);
    result = firstPod.addSong(song26);
    firstPod.sortSongList();
    firstPod.showSongList();

    result = firstPod.removeSong(song21);
    result = firstPod.removeSong(song19);
    result = firstPod.removeSong(song17);
    result = firstPod.removeSong(song15);
    result = firstPod.removeSong(song13);
    result = firstPod.removeSong(song11);
    result = firstPod.removeSong(song9);
    result = firstPod.removeSong(song7);
    result = firstPod.removeSong(song5);
    result = firstPod.removeSong(song3);
    result = firstPod.removeSong(song1);

    //remove 1 instance
    result = firstPod.removeSong(song23);
    firstPod.showSongList();

    result = firstPod.removeSong(song23);
    result = firstPod.removeSong(song24);
    result = firstPod.removeSong(song26);
    result = firstPod.removeSong(song25);
    return 0;
}
