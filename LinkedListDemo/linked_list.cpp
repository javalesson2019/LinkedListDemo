#include "pch.h"
#include "linked_list.h"


linked_list::linked_list(): head(nullptr), tail(nullptr)
{
}


linked_list::~linked_list()
{
}


// �������� ������ �������� � ������
int linked_list::add(student& new_student)
{
	// TODO: Add your implementation code here.
	// TODO: insert return statement here
	return 0;
}


// ������� ��������
bool linked_list::remove(student& stud)
{
	return true;
}


bool linked_list::remove(int id)
{
	return true;
}

// ������ ������
int linked_list::size()
{	
	return 0;
}


// ������ �� ������
bool linked_list::is_empty()
{
	return false;
}


std::ostream& operator<<(std::ostream& stream, const linked_list& list)
{
	return stream;
}