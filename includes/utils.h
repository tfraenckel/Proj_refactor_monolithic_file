/*
* utils.h
*
*      Victor Fraenckel
*/

#ifndef UTILS_H_
#define UTILS_H_
#include <vector>
#include <iostream>
#include "constants.h"

namespace std{

void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);

    //gets the next process from the vector, then removes it from the vector
    //returns removed process
process getNext(vector<process> &myProcesses);

    //returns the number of entries in the vector
int getSize(vector<process> &myProcesses);

    //attempt to correct missing data
    //if cannot correct, then drop row
    //return number of rows in myProcesses
int handleMissingData(vector<process> &myProcesses);
}
#endif /*UTILS_H_ */
