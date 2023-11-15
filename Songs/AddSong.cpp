#include "songLibrary.h"
#include <iostream>
#include <string>
#include <vector>


int main(void)
{
Song newSong;

std::cout << "Enter song title: ";
    std::getline(std::cin, newSong.title);

    std::cout << "Enter artist name: ";
    std::getline(std::cin, newSong.artist);

    std::cout << "Enter album name: ";
    std::getline(std::cin, newSong.album);

    std::cout << "Enter song link: ";
    std::getline(std::cin, newSong.link);

    std::cout << "Enter image link: ";
    std::getline(std::cin, newSong.image);

    // Add the new song to the vector
    songs.push_back(newSong);

    for (const auto& song : songs) {
        std::cout << "Title: " << song.title << "\n";
        std::cout << "Artist: " << song.artist << "\n";
        std::cout << "Album: " << song.album << "\n";
        std::cout << "Link: " << song.link << "\n";
        std::cout << "Image: " << song.image << "\n\n";
    }

    return 0;
}