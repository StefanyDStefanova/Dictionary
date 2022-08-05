#ifndef __RECORD
#define __RECORD

#include <iostream>
#include <cstring>

class Record
{
private:
	char* word;
	char* meaning;

	void del();
	void copy(const char* word, const char* meaning);

public:
	Record(const char* word = nullptr, const char* meaning = nullptr);
	Record(const Record& other);
	Record& operator=(const Record& other);
	~Record();

	void init(const char*, const char*);// -инициализира структурата
	void print()const ;// -принтира двойката на екрана по подходящ начин

	void setWord(const char* wordParam)const;
	void setMeaning(const char* meaningParam)const;
	char* getWord()const;
	char* getMeaning()const;
};

#endif // !1
