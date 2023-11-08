#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
  if (argc != 3) {
    cout << "Usage: " << argv[0] << " source_filename destination_filename" << endl;
    return 1;
  }

  ifstream source(argv[1]);
  ofstream destination(argv[2]);
  destination << source.rdbuf();

  source.close();
  destination.close();

  return 0;
}
