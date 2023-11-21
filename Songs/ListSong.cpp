#include <iostream>
#include <vector>
#include "crow_all.h"

// #include "SongLibrary.h" // Include the header file where Song is defined

struct Song {
    std::string title;
    std::string artist;
    std::string album;
    std::string link;
    std::string image;
};



int main(void) {
    crow::SimpleApp app;

    std::vector<Song> songs;
    // Populate your songs vector as before

    // Define a route to handle requests to the root URL ("/")
    CROW_ROUTE(app, "/")
        .name("index")
        ([&songs]() {
            crow::mustache::context context;
            context["songs"] = crow::mustache::context::list();
            
            for (const auto &song : songs) {
                crow::mustache::context songContext;
                songContext["title"] = song.title;
                songContext["artist"] = song.artist;
                songContext["album"] = song.album;
                songContext["link"] = song.link;
                songContext["image"] = song.image;
                context["songs"].push_back(songContext);
            }

            std::string rendered = crow::mustache::load("index.html").render(context);
            return crow::response(rendered);
        });

    // Start the web server
    app.port(8080).run();
}