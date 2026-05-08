#ifndef SORT
#define SORT

#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> listFiles(string path); // returns vector
bool checkDirectory(string path); //checks if Directory is valid
void FilesDivider(vector<string> files); //takes in the main vector of files and divides it into sub-vectors
	
#endif
