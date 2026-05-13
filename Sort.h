#ifndef SORT
#define SORT

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<string>
#include<vector>
#include <filesystem>
#include<iomanip>
#include <shellapi.h>
#include <algorithm>

using namespace std;
namespace fs = std::filesystem;

vector<string> listFiles(string path); // returns vector
bool checkDirectory(string path); //checks if Directory is valid
void FilesDivider(vector<string> files, string path); //takes in the main vector of files and divides it into sub-vectors
void AlphabetSortFiles(vector<string> filename, string path); //sorts the files in each vector alphabetically
void UserChoise(vector<vector<string>*> names, string path);

#endif
