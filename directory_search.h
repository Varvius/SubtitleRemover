#ifndef DIRECTORY_SEARCH_H
#define DIRECTORY_SEARCH_H

#include <filesystem>

namespace fs = std::filesystem;

void deleteInDirectories(fs::directory_entry entry);

#endif
