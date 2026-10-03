#include <iostream>
#include <filesystem>
namespace fs=std::filesystem;
using namespace std;

void deleteInDirectories(fs::directory_entry entry){
    auto newentry=entry.path();
    //cout<<"this is entry passed from function"<<entry<<endl;
    //cout<<"This is newentry"<<newentry<<endl;
    for(const auto & entry2 : fs::directory_iterator(entry)){
        //cout<<"This is entry2"<<entry2<<endl;
        if(entry2.is_directory()){
            //cout<<"--------------RECURSIVE CALLED-------------------"<<endl;
            deleteInDirectories(entry2);
        }
        else if(entry2.path().extension()==".srt"||entry2.path().extension()==".vtt"){
            cout<<"The program removed this file"<<entry2.path()<<endl;
            remove(entry2.path());
        }
    }
}
