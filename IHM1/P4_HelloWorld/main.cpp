#include <iostream>
#include <string>
using namespace std;
int main() {
  string s = "Hello";
  int i = 17;
  double j;
  bool x = false;

  s.append("333");
  std::cout << s << "\n";

  srand((unsigned)time(NULL));
  int nbalea = rand() % 5;

  cin >> j;
  cout << j << endl;

  if (!cin.good()) {
    cout << "on attend un entier" << endl;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    exit(1);
  }
  cout << j << endl;

  int* tab;
  tab = new int[3];
  tab[0] = 0;
  tab[1] = 1;
  tab[2] = 2;
  for (int i = 0; i < 3; i++)
  {
    cout << tab[i] << " ";
  }
  cout << endl;

  delete[] tab;
  return 0;
}