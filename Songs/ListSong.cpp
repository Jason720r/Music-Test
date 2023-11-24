#include <iostream>
#include <vector>


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
    Song song2 = {"Your Blood", "Aurora", "Single", "https://youtu.be/YhZdE177qr8?si=ViaZTk1UoU8DMEcc", "image"};

    songs.push_back(song1); // Add song1 to the vector
    songs.push_back(song2);

    for (const auto& song : songs) {
        std::cout << "Title: " << song.title << "\n";
        std::cout << "Artist: " << song.artist << "\n";
        std::cout << "Album: " << song.album << "\n";
        std::cout << "Link: " << song.link << "\n";
        std::cout << "Image: " << song.image << "\n\n";
    }
    return 0;
    
}