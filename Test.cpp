#include "Sort.h"

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
    FilesDivider(files, path);

    return 0;
}
