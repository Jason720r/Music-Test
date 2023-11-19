#include <iostream>
#include <vector>
// #include "SongLibrary.h" // Include the header file where Song is defined

struct Song {
    std::string title;
    std::string artist;
    std::string album;
    std::string link;
    std::string image;
};


int main(void)
{
    std::vector<Song> songs;

    Song song1 = {"Sweet Cis Teen", "Dazey and the Scouts", "Maggot", "https://youtu.be/ONuWmIqCYdI?si=DgYV7H7iWYQGbvHz", "image"};
    Song song2 = {"Your Blood", "AURORA", "Single", "https://youtu.be/hUxmu4rKdGU?si=-XGKiUpoq744ddyU", "image"};
    Song song3 = {"Take on Me", "a-ha", "Hunting High and Low", "https://youtu.be/djV11Xbc914?si=cFV5gkRy-mgmJM7k", "image"};
    Song song4 = {"It's Too Late", "Carole King", "Tapestry", "https://youtu.be/VkKxmnrRVHo?si=_BSEni3wU_gfa7t8", "image"};
    Song song5 = {"Slug", "Snail Mail", "Habit", "https://youtu.be/3YkAtR8V558?si=VI-bs6Kb_n6zSYIu", "image"};
    Song song6 = {"Mimi's Delivery Service", "Good Kid", "Good Kid 3 -EP", "https://youtu.be/hYUvI5Njbbk?si=uHiRVHRdxJ4xHYFW", "image"};
// Add song to the vector
    songs.push_back(song1);
    songs.push_back(song2);
    songs.push_back(song3); 
    songs.push_back(song4);
    songs.push_back(song5);
    songs.push_back(song6);


    for (const auto& song : songs) {
        std::cout << "Title: " << song.title << "\n";
        std::cout << "Artist: " << song.artist << "\n";
        std::cout << "Album: " << song.album << "\n";
        std::cout << "Link: " << song.link << "\n";
        std::cout << "Image: " << song.image << "\n\n";
    }
    return 0;

}