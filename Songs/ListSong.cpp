#include <iostream>
#include <vector>
using namespace std;


struct Song {
    std::string title;
    std::string artist_id;
    std::string album;
    std::string link;
    std::string image;
};



struct Artist {
    std:: string id;
    std::string artist_name;
    std::string real_name;
    bool is_band;
};


// Define a custom operator<< for Artist
std::ostream& operator<<(std::ostream& os, const Artist& artist) {
    os << "ID: " << artist.id << "\n";
    os << "Artist Name: " << artist.artist_name << "\n";
    os << "Real Name: " << artist.real_name << "\n";
    os << "Is Band: " << (artist.is_band ? "Yes" : "No") << "\n";
    return os;
}

int main(void)
{
    std::vector<Song> songs;
    std::vector<Artist> artists;

    unsigned int artSize = artists.size();

    for(unsigned int i = 0; i < artSize; i++)
    {
        cout << artists[i] << " ";
    }
    cout << endl;
    

    Artist artist1 = {"1", "Dazey and the Scouts", "none", true };
    Artist artist2 = {"2", "AURORA", "none", false};
    Artist artist3 ={"3", "a-ha", "none", true};  
    Artist artist4 ={"4", "Carole King", "none", true}; 

    artists.push_back(artist1);
    artists.push_back(artist2);
    artists.push_back(artist3);
    artists.push_back(artist4);

    Song song1 = {"Sweet Cis Teen", "Dazey and the Scouts", "Maggot", "https://youtu.be/ONuWmIqCYdI?si=DgYV7H7iWYQGbvHz", "image"};
    Song song2 = {"Your Blood", "AURORA", "Single", "https://youtu.be/hUxmu4rKdGU?si=-XGKiUpoq744ddyU", "image"};
    Song song3 = {"Take on Me", "a-ha", "Hunting High and Low", "https://youtu.be/djV11Xbc914?si=cFV5gkRy-mgmJM7k", "image"};
    Song song4 = {"It's Too Late", "Carole King", "Tapestry", "https://youtu.be/VkKxmnrRVHo?si=_BSEni3wU_gfa7t8", "image"};
    Song song5 = {"Sad Boys", "Dazey and the Scouts", "Maggot", "https://youtu.be/u3yTxfLxWZc?si=LgbeexY4a3m8L5IK", "image"};
// Add song to the vector
    songs.push_back(song1);
    songs.push_back(song2);
    songs.push_back(song3); 
    songs.push_back(song4);
    songs.push_back(song5);


    for (const auto& song : songs) {
        std::cout << "Title: " << song.title << "\n";
        std::cout << "Artist: " << song.artist_id << "\n";
        std::cout << "Album: " << song.album << "\n";
        std::cout << "Link: " << song.link << "\n";
        std::cout << "Image: " << song.image << "\n\n";
    }

    for (const auto& artist : artists) {
        std::cout << "Artist: " << artist.artist_name << "\n";
        std::cout << "Band or no band: " << artist.is_band << "\n";
    }
    return 0;

}
