#include "pch.h"
#include "linked_list.h"


linked_list::linked_list(): head(nullptr), tail(nullptr)
{
}


linked_list::~linked_list()
{
}


// Добавить нового студента в списко
int linked_list::add(student& new_student)
{
	// TODO: Add your implementation code here.
	// TODO: insert return statement here
	return 0;
}


// Удалить студента
bool linked_list::remove(student& stud)
{
	return true;
}


bool linked_list::remove(int id)
{
	return true;
}

// Размер списка
int linked_list::size()
{	
	return 0;
}


// Пустой ли список
bool linked_list::is_empty()
{
	return false;
}


std::ostream& operator<<(std::ostream& stream, const linked_list& list)
{
	return stream;
}