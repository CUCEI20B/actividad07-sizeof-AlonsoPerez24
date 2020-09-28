#include <iostream>

using namespace std;

int main() {
    string tipoDato;

    getline(cin, tipoDato);
    if(tipoDato == "char"){
        cout << sizeof(char) << endl;
    }else if (tipoDato == "int"){
        cout << sizeof(int) << endl;
    }else if(tipoDato == "short"){
        cout << sizeof(short) << endl;
    }else if (tipoDato == "float"){
        cout << sizeof(float) << endl;
    }else if (tipoDato == "double"){
        cout << sizeof(double) << endl;
    }else if (tipoDato == "long"){
        cout << sizeof(long) << endl;
    }
    
    return 0;
}
