// LinkedListDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cassert>
#pragma warning(disable: 4996)
using namespace std;

void test()
{
	linked_list group;

	cout << "--- Test override method is_empty() for empty list ---" << endl;
	assert(group.is_empty());

	student vasja("Vasja", "Pupkin");
	student masha("Masha", "Efrosinina");
	student petro("Petro", "Poroshenko");

	cout << "--- Test method add() ---" << endl;
	const int id_vasja = group.add(vasja);
	const int id_masha = group.add(masha);
	const int id_petro = group.add(petro);

	cout << "--- Test override operator << ---" << endl;
	cout << group << endl;

	cout << "--- Test method size() ---" << endl;
	assert(group.size() == 3);

	cout << "--- Test method is_empty() for list with 3 nodes ---" << endl;
	assert(!group.is_empty());

	cout << "--- Test method remove() by student for list with 3 nodes ---" << endl;
	assert(group.remove(petro));
	assert(group.size() == 2);
	assert(!group.is_empty());

	cout << "--- Test method remove() by id for list with 2 nodes ---" << endl;
	assert(group.remove(id_masha));
	assert(group.size() == 1);

	cout << "--- Test method remove() by id for list with 1 nodes ---" << endl;
	assert(group.remove(id_vasja));
	assert(group.size() == 0);
	assert(group.is_empty());

	cout << "--- Test method remove() by not exists id for ---" << endl;
	assert(!group.remove(id_vasja));
	assert(!group.remove(id_masha));
	assert(!group.remove(id_petro));
}

int main()
{
	test();
}

