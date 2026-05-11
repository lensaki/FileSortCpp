#include "Sort.h"

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

void FilesDivider(vector<string> files, string path) //Parses each element of the vector and populates new vectors based on the file type
{
    string::size_type period;
    string filename;
    string fileType;
    string fileinquestion;
    string folderName;

    vector<string> docx, txt, xlsx, json, h, pdf, svg, cpp, bak, jpg, png, csv,
        pptx, tmp, README, py, yaml, mp3, mp4, css, md, html, noextention, overflow;

    for (int pos = 0; pos < files.size(); pos++)
    {
        fileinquestion = files.at(pos);
        period = files.at(pos).rfind(".");

        if (period == string::npos)
        {
            noextention.push_back(fileinquestion);
            fs::path oldLocation = fs::path(path) / fileinquestion; // creates the old location of the file
            fs::path newFolder = fs::path(path) / folderName; // creates the new folder path
            fs::path newLocation = newFolder / fileinquestion; // creates the new location of the file

            fs::create_directory(newFolder); // creates the new folder
            fs::rename(oldLocation, newLocation);
            continue;
        }

        fileType = files.at(pos).substr(period);
        filename = fileType;
        folderName = fileType;

        if (filename == ".docx")
        {
            docx.push_back(fileinquestion);

            fs::path oldLocation = fs::path(path) / fileinquestion; // creates the old location of the file
            fs::path newFolder = fs::path(path) / folderName; // creates the new folder path
            fs::path newLocation = newFolder / fileinquestion; // creates the new location of the file

            fs::create_directory(newFolder); // creates the new folder
            fs::rename(oldLocation, newLocation); // moves the file to the new location
        }

        else if (filename == ".txt")
        {
            txt.push_back(files.at(pos));


            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".xlsx")
        {
            xlsx.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".json")
        {
            json.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".csv")
        {
            csv.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".h")
        {
            h.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".pdf")
        {
            pdf.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".svg")
        {
            svg.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".cpp")
        {
            cpp.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".bak")
        {
            bak.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".png")
        {
            png.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".jpg")
        {
            jpg.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".pptx")
        {
            pptx.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".tmp")
        {
            tmp.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".README")
        {
            README.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".py")
        {
            py.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".yaml")
        {
            yaml.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".mp3")
        {
            mp3.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".mp4")
        {
            mp4.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".css")
        {
            css.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".md")
        {
            md.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else if (filename == ".html")
        {
            html.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }

        else
        {
            overflow.push_back(files.at(pos));

            fs::path oldLocation = fs::path(path) / fileinquestion;
            fs::path newFolder = fs::path(path) / folderName;
            fs::path newLocation = newFolder / fileinquestion;

            fs::create_directory(newFolder);
            fs::rename(oldLocation, newLocation);
        }
    }
    vector<vector<string>*> names = { &docx, &txt, &xlsx, &json, &h, &pdf, &svg, &cpp, &bak, &jpg,
    &png, &csv, &pptx, &tmp, &README, &py, &yaml, &mp3, &mp4,&css, &md, &html, &noextention, &overflow };
    UserChoise(names, path);
}

void AlphabetSortFiles(vector<string> filename, string path)
{

    if (checkDirectory(path) == true) 
    {

    }

    else
        cout << "Invalid Directory" << endl;
    return;
}

void UserChoise(vector<vector<string>*> names, string path)
{
    string labels[] = {
        "docx", "txt", "xlsx", "json", "h", "pdf", "svg", "cpp", "bak", "jpg", "png", "csv", "pptx", 
        "tmp", "README", "py", "yaml", "mp3", "mp4", "css", "md", "html", "noextention", "overflow" };
    
    while (true) // outer loop, goes back to folder select
    {
        cout << "\n";
        cout << left << setw(15) << "Position" << setw(40) << "Folder" << "\n";
        cout << string(45, '-') << "\n";
        for (int i = 0; i < 24; i++)
        {
            cout << left << setw(15) << i << setw(40) << labels[i] << "\n";
        }

        int choice = -3;
        while (true) // folder selection loop
        {
            cout << "Insert the position of the folder you want to open or -1 to exit: ";
            cin >> choice;

            if (choice == -1)
            {
                return;
            }
            if (choice >= 0 && choice < 24)
            {
                break;
            }
            cout << "Invalid choice\n";
        }

        // print file table
        cout << "\n";
        cout << left << setw(15) << "Position" << setw(40) << "Filename" << "\n";
        cout << string(45, '-') << "\n";
        int row = 0;
        for (const string& file : *names[choice])
        {
            cout << left << setw(15) << row++ << setw(40) << file << "\n";
        }

        int fileChoice = -3;
        while (true) // file selection loop
        {
            cout << "Insert the position of the file you want to open, -2 to go back, or -1 to exit: ";
            cin >> fileChoice;

            if (fileChoice == -1)
            {
                return;
            }
            if (fileChoice == -2)
            {
                break;
            }
            if (fileChoice >= 0 && fileChoice < names[choice]->size())
            {
                string filename = (*names[choice])[fileChoice];
                string fullpath = path + "\\." + labels[choice] + "\\" + filename;
                cout << "Trying to open: " << fullpath << "\n"; 
                HINSTANCE result = ShellExecuteA(0, "open", fullpath.c_str(), 0, 0, SW_SHOW);
                if ((int)result <= 32) // anything <= 32 means it failed
                {
                    cout << "Failed to open file, error code: " << (int)result << "\n";
                }
                break;
            }
            cout << "Invalid choice\n";
        }
        if (fileChoice == -2)
        {
            continue;
        }
    }
}
