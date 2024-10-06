#include <iostream>
using namespace std;
void StR(string stroka) {
    cout << "D:\\HTML\\Dz\\Dz 9\\index.html" << endl;
    if (stroka.rfind("\\")==stroka.length()) {
        cout<<"";
    }
    else {
        cout << "\nPath without file name: ";
        for (short i = 0; i < stroka.rfind("\\"); i++) {
            cout << stroka[i];
        }
    }
    cout <<endl<< "\nLast name folder in path: ";
    for (short i = stroka.rfind("\\", stroka.rfind("\\") - 1)+1; i < stroka.rfind("\\"); i++) {
        cout << stroka[i];
    }
    cout << endl << "\nFile name with extension: " << stroka.substr(stroka.rfind("\\") + 1) << endl;
    cout << "\nExtension file name: " << stroka.substr(stroka.rfind(".") ) << endl;
    cout << "\nFile name without extension: ";
    for (short i = stroka.rfind("\\") + 1; i < stroka.rfind("."); i++) {
        cout << stroka[i];
    }
}
int main()
{
    StR("D:\\HTML\\Dz\\Dz 9\\index.html");
}

