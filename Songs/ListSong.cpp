#include <iostream>
#include <vector>


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




int main(void)
{
    std::vector<Song> songs;
    std::vector<Artist> artists;

    

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
// Add song to the vector
    songs.push_back(song1);
    songs.push_back(song2);
    songs.push_back(song3); 
    songs.push_back(song4);


    for (const auto& song : songs) {
        std::cout << "Title: " << song.title << "\n";
        std::cout << "Artist: " << song.artist_id << "\n";
        std::cout << "Album: " << song.album << "\n";
        std::cout << "Link: " << song.link << "\n";
        std::cout << "Image: " << song.image << "\n\n";
    }
    return 0;

}