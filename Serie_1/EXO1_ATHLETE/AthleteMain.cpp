#include "Athlete.h"
#include <iostream>
int main() {
  Athlete* a1 = new Athlete();
  Athlete* a2 = new Athlete();
  Athlete* a3 = new Athlete();
  Athlete* a4 = new Athlete();

  a3->setSuivant(a4);
  a3->prendLeTemoin();

  cout << "A1 : " << a1->ToString() << endl;
  cout << "A2 : " << a2->ToString() << endl;
  cout << "A3 : " << a3->ToString() << endl;
  cout << "A4 : " << a4->ToString() << endl;

  a3->prendLeTemoin();
  cout << "Passage de temoin a3 vers a4" << endl;

  cout << "A1 : " << a1->ToString() << endl;
  cout << "A2 : " << a2->ToString() << endl;
  cout << "A3 : " << a3->ToString() << endl;
  cout << "A4 : " << a4->ToString() << endl;

  a4->setSuivant(a1);
  a4->prendLeTemoin();
  cout << "Passage de temoin a4 vers a1" << endl;

  cout << "A1 : " << a1->ToString() << endl;
  cout << "A2 : " << a2->ToString() << endl;
  cout << "A3 : " << a3->ToString() << endl;
  cout << "A4 : " << a4->ToString() << endl;

  a1->setSuivant(a2);
  a1->prendLeTemoin();
  cout << "Passage de temoin a1 vers a2" << endl;

  cout << "A1 : " << a1->ToString() << endl;
  cout << "A2 : " << a2->ToString() << endl;
  cout << "A3 : " << a3->ToString() << endl;
  cout << "A4 : " << a4->ToString() << endl;
  
  return 0;
}