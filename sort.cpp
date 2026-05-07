#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

/*
* Wanted to split the main and the other methods between two different cpp files
* but it was having problems with the variables for the vector and file Directory
*/

vector<string> listFiles(string path); // returns vector
bool checkDirectory(string path); //checks if Directory is valid
void FilesDivider(vector<string> files); //takes in the main vector of files and divides it into sub-vectors

int main()
{
    string path;
    bool check = false;
    while (check != true)
    {
        cout << "Enter path to list files: ";
        cin >> path;
        check = checkDirectory(path);
    }

    vector<string> files = listFiles(path);  // receive the vector from listFiles

    for (int i = 2; i < files.size(); i++)
    {
        cout << files[i] << "\n";  // print each file from the vector
    }
    cout << endl;
    cout << endl;
    FilesDivider(files);

    return 0;
}

vector<string> listFiles(string path)  // Parses through the directory and populates the main vector
{
    WIN32_FIND_DATAA findData; //Both are needed to access a file directory and read the files
    HANDLE hFind;

    vector<string> files;  // declare vector inside listFiles

    string searchPath = path + "\\*";

    hFind = FindFirstFileA(searchPath.c_str(), &findData);

    do
    {
        files.push_back(findData.cFileName);
    } while (FindNextFileA(hFind, &findData) != 0);

    FindClose(hFind);

    return files;  // return the completed vector
}

bool checkDirectory(string path) //checks if a valid Directory has been inserted
{
    WIN32_FIND_DATAA findData;
    HANDLE hFind;
    string searchPath = path;

    hFind = FindFirstFileA(searchPath.c_str(), &findData);

    if (hFind == INVALID_HANDLE_VALUE)
    {
        cout << "Could not open directory: " << path << endl;
        return false;
    }
    return true;
}

void FilesDivider(vector<string> files) //Parses each element of the vector and populates new vectors based on the file type
{
    string::size_type period;
    string filename;
    string fileType;
	string fileinquestion;

    for (int pos = 2; pos < files.size(); pos++)
    {
        period = files.at(pos).rfind(".");
        fileType = files.at(pos).substr(period);
        filename = fileType;

        fileinquestion = files.at(pos);


        vector<string> fileTypevec;

        if (filename == ".docx"){

            cout << fileinquestion << " would go in folder : " << filename << endl;
            fileTypevec.push_back(fileinquestion);
            //for (int i = 1; i < fileType.size(); i++)
            //{
            //    cout << files[i] << "\n";  // print each file from the vector
            //}

            cout << "Added: " << fileinquestion << " to " << filename <<endl;
            cout << endl;
         
           


		}
        else if (filename == ".txt") {

            cout << files.at(pos) << " would go in folder : " << filename << endl;
            fileTypevec.push_back(files.at(pos));
   
        }

        else {
            cout << files.at(pos) << " was not put in a folder" << endl;

        }

    }
    //missing populates new vectors based on file types
}
