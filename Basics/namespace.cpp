#include <bits/stdc++.h>


// Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

namespace kv{

int age = 19;
std:: string name = "Kavyansh Verma";
char favorite_alphabate = 'K';
std:: string favorite_artist = "Tylor Swift";
bool all_this_is = true;

}

namespace dv{

int age = 23;
std:: string name = "Divyansh Verma";
char favorite_alphabate = 'D';
std:: string favorite_artist = "Punjabi Kompa";
bool all_this_is = true;

}
namespace av{

int age = 13;
std:: string name = "Atharva Verma";
char favorite_alphabate = 'A';
std:: string favorite_artist = "Phonk Songs";
bool all_this_is = true;

}

int main() {

    using namespace dv;

    std::cout<<"This is "<< name <<'\n';
    std::cout<< "Age is "<< age << '\n';
    std::cout<< "Favorite Artist "<< favorite_artist << '\n';
    std::cout<< "All this is "<< all_this_is  << '\n';
    std::cout<< "Favorite Alphabate is "<< favorite_alphabate  << '\n';



    
    return 0;
}