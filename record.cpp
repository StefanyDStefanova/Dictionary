#include "record.h"

void Record::del()
{
	delete[] this->word;
	this->word = nullptr;

	delete[] this->meaning;
	this->meaning = nullptr;
}

void Record::copy(const char* word, const char* meaning)
{
	int lenWord = strlen(word);
	int lenMeaning = strlen(meaning);

	this->word = new char[lenWord + 1];
	this->meaning = new char[lenMeaning + 1];


	for (int i = 0; word[i] != '\0'; i++)
	{
		this->word[i] = word[i];
	}

	for (int i = 0; meaning[i] != '\0'; i++)
	{
		this->meaning[i] = meaning[i];

	}

	this->word[lenWord] = '\0';
	this->meaning[lenMeaning] = '\0';
}

Record::Record(const char* word, const char* meaning)
{
	copy(word, meaning);
}

Record::Record(const Record& other)
{
	copy(other.word, other.meaning);
}

Record& Record::operator=(const Record& other)
{
	if (this != &other)
	{
		del();
		copy(other.word, other.meaning);
	}
	return *this;
}

Record::~Record()
{
	del();
}

void Record::init(const char*, const char*)
{
	do {
		std::cin >> this->word;
	} while (this->word != " ");
	std::cin >> this->meaning;
}

void Record::print() const
{
	std::cout << this->word<<" - "<<this->meaning;
}

void Record::setWord(const char* wordParam) const
{
	strcpy_s(this->word, sizeof(wordParam)+1, wordParam);
}

void Record::setMeaning(const char* meaningParam) const
{
	strcpy_s(this->meaning, sizeof(meaningParam)+1, meaningParam);
}

char* Record::getWord() const
{
	return this->word;
}

char* Record::getMeaning() const
{
	return this->meaning;
}


