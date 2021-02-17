/*
*fileio.h
*
*written by Victor Fraenckel
*/

#ifndef FILEIO_H_
#define FILEIO_H_
#include <vector>
#include <iostream>
#include "constants.h"

namespace std{

    int loadData(const std::string filename, vector<process> &myProcesses);

        
    int saveData(const std::string filename, vector<process> &myProcesses);
}
#endif /* FILEIO_H_ */