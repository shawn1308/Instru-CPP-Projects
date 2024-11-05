#include <iostream>
#include <list>
using namespace std;
int main()
{
	list<int> lst; // une liste vide
	lst.push_back(5);
	lst.push_back(6);
	lst.push_back(1);
	lst.push_back(10);
	lst.push_back(7);
	lst.push_back(8);
	lst.push_back(4);
	lst.push_back(5);

	cout << "La liste lst contient " << lst.size() << " entiers : \n";
	// utilisation d�un it�rateur pour parcourir la liste lst
	for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
		cout << ' ' << *it;
	cout << endl;
	// afficher le premier �l�ment
	cout << "Premier element : " << lst.front() << endl;
	// afficher le dernier �l�ment
	cout << "Dernier element : " << lst.back() << endl;

	lst.pop_back(); // enleve le dernier �l�ment
	lst.pop_front(); // enleve le premier �l�ment

	cout << "La liste lst contient " << lst.size() << " entiers : \n";
	// utilisation d�un it�rateur pour parcourir la liste lst
	for (auto it = lst.begin(); it != lst.end(); ++it)
		cout << ' ' << *it;
	cout << endl;
	// afficher le premier �l�ment
	cout << "Premier element : " << lst.front() << endl;
	// afficher le dernier �l�ment
	cout << "Dernier element : " << lst.back() << endl;

	// parcours avec un it�rateur en inverse
	for (list<int>::reverse_iterator rit = lst.rbegin(); rit != lst.rend(); ++rit)
	{
		cout << ' ' << *rit;
	}
	cout << endl;

	//------------------------------------------------------------------------------------------------

	list<int> *kst = nullptr;
	kst = new list<int>();
	kst->push_back(5);
	kst->push_back(10);

	for (auto it = kst->begin(); it != kst->end(); ++it)
		cout << ' ' << *it;
	cout << endl;

	kst->~list();

	delete kst;
	kst = nullptr;
	return 0;
}