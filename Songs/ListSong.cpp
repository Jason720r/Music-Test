#include <iostream>
#include <vector>
#include "SongLibrary.h" // Include the header file where Song is defined

int main(void)
{
    std::vector<Song> songs;

    Song song1 = {"Sweet Cis Teen", "Dazey and the Scouts", "Maggot", "https://youtu.be/ONuWmIqCYdI?si=DgYV7H7iWYQGbvHz", "image"};

    songs.push_back(song1); // Add song1 to the vector

    for (const auto& song : songs) {
        std::cout << "Title: " << song.title << "\n";
        std::cout << "Artist: " << song.artist << "\n";
        std::cout << "Album: " << song.album << "\n";
        std::cout << "Link: " << song.link << "\n";
        std::cout << "Image: " << song.image << "\n\n";
    }
    return 0;
    
}