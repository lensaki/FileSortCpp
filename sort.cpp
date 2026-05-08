#include "Sort.h"
/*
* Wanted to split the main and the other methods between two different cpp files
* but it was having problems with the variables for the vector and file Directory
*/

vector<string> listFiles(string path); // returns vector
bool checkDirectory(string path); //checks if Directory is valid
void FilesDivider(vector<string> files); //takes in the main vector of files and divides it into sub-vectors


vector<string> listFiles(string path)  // Parses through the directory and populates the main vector
{
    WIN32_FIND_DATAA findData; //Both are needed to access a file directory and read the files
    HANDLE hFind;

    vector<string> files;  // declare vector inside listFiles

    string searchPath = path + "\\*";

    hFind = FindFirstFileA(searchPath.c_str(), &findData);

    do
    {
        string name = findData.cFileName;
        if (name != "." && name != "..")
            files.push_back(name);
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

    vector<string> docx, txt, xlsx, json, h, pdf, svg, cpp, back, jpg, png, csv, 
        pptx, tmp, README, py, yaml, mp3, mp4, css, md, hmtl, noextention, overflow;

    for (int pos = 0; pos < files.size(); pos++)
    {
        fileinquestion = files.at(pos);
        period = files.at(pos).rfind(".");

        if (period == string::npos)
        {
            noextention.push_back(fileinquestion);
            continue;
        }

        fileType = files.at(pos).substr(period);
        filename = fileType;

        if (filename == ".docx")
        {

            cout << fileinquestion << " would go in folder : " << filename << endl;
            docx.push_back(fileinquestion);
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }

        else if (filename == ".txt")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".xlsx")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".json")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".csv")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".h")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".pdf")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".svg")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".cpp")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".bak")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".png")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".jpg")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".pptx")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".tmp")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".README")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".py")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".yaml")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".mp3")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".mp4")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".css")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".md")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else if (filename == ".html")
        {
            cout << files.at(pos) << " would go in folder : " << filename << endl;
            txt.push_back(files.at(pos));
            cout << "Added: " << fileinquestion << " to " << filename << endl;
            cout << endl;
        }
        else
        {
            cout << fileinquestion << " would go in folder : " << filename << endl;
            overflow.push_back(fileinquestion);
            cout << "Could not find appropriate container." << endl;
            cout << "Added: " << fileinquestion << " to overflow." << endl;
            cout << endl;
        }
    }
}
