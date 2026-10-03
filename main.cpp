#include <filesystem>
#include <vector>
#include "directory_search.h"
using namespace std;
namespace fs=std::filesystem;

int main (int argc, char *argv[]) {
    int loopcounter{0};
    string path="./";
    vector<string> path_list;
    for(const auto & entry : fs::directory_iterator(path)){
        if(entry.is_directory()==true){
            deleteInDirectories(entry);
        }
    }
    return 0;
}
