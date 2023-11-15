#ifndef SONG_LIBRARY_H
#define SONG_LIBRARY_H
#include <string>
#include <vector>

struct Song {
    std::string title;
    std::string artist;
    std::string album;
    std::string link;
    std::string image;
};

// Declare the songs vector as extern
extern std::vector<Song> songs;

#endif

