#include "dictionary.h"
#include <cstring>
#include<iostream>


void Dictionary::copy(const Record* words, const int size)
{
	for (int i = 0; i < size; i++)
	{
		this->words[i].setWord(words[i].getWord());
		this->words[i].setMeaning(words[i].getMeaning());
	}
	this->size = size;
}

Dictionary::Dictionary(const Record* recParam, const int& sizeParam)
{
	this->words = new Record[sizeParam];
	copy(recParam, sizeParam);
}

Dictionary::Dictionary(const Dictionary& other)
{
	copy(other.words, other.size);
}

Dictionary& Dictionary::operator=(const Dictionary& other)
{
	if (this != &other)
	{
		delete[] words;
		size = 0;
		copy(other.words, other.size);
	}
	return *this;
}

Dictionary::~Dictionary()
{
	delete[] words;
	size = 0;
}
