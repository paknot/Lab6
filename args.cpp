#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Name: '" << argv[0] << "'" << endl;

    if (argc > 1) {
        cout << "called with " << argc - 1 << " argument";
        if (argc > 2) {
            cout << "s";
        }
        cout << ": ";

        for (int i = 1; i < argc; i++) {
            cout << "'" << argv[i] << "'";
            if (i < argc - 1) {
                cout << " ";
            }
        }
        cout << endl;
    } else {
        cout << "No arguments provided." << endl;
    }

    return 0;
}
