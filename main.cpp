#include <iostream>
#include <filesystem>
#include <vector>
using namespace std;
namespace fs=std::filesystem;

void deleteInDirectories(fs::directory_entry entry){
    auto newentry=entry.path();
    for(const auto & entry2 : fs::directory_iterator(newentry)){
        cout<<entry2.path()<<endl;//entry.path is the path of an entry
        if(entry.is_directory()==true){
            deleteInDirectories(entry2);
        }
    }
}

int main (int argc, char *argv[]) {
    int loopcounter{0};
    string path="./";
    vector<string> path_list;
    for(const auto & entry : fs::directory_iterator(path)){
        cout<<loopcounter<<endl;
        cout<<entry.path()<<endl;//entry.path is the path of an entry
        if(entry.is_directory()==true){
            deleteInDirectories(entry);
        }
        loopcounter++;
    }
    return 0;
}
