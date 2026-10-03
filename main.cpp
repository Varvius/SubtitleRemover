#include <filesystem>
#include <iostream>
#include "directory_search.h"
using namespace std;
namespace fs=std::filesystem;

int main (int argc, char *argv[]) {
    string path{"./"};
    bool recursive{false};
    if(argc<=2){
        for (int i{1}; i<argc ; i++) {
            string argument=argv[i];
            if(argument=="-r"){
                cout<<"Recursive selected"<<endl;
                recursive=true;
            }
            else{
                cout<<"Invalid arguments"<<endl;
            }
        }
        for(const auto & entry : fs::directory_iterator(path)){
            if(entry.is_directory()==true && recursive==true){
                deleteInDirectories(entry);
            }
            else if(entry.path().extension()==".srt"||entry.path().extension()==".vtt"){
                cout<<"The program removed this file"<<entry.path()<<endl;
                remove(entry.path());
            }
        }
    }
    else{
        cout<<"Too many arguments"<<endl;
    }
    return 0;
}
