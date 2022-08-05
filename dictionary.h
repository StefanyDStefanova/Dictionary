#ifndef __DICTIONARY
#define __DICTIONARY
#include"record.h"
#include <cstring>

class Dictionary {
private:
	Record* words;
	int size;

	void copy(const Record* words, const int size);

public:
	Dictionary(const Record* recParam, const int& sizeParam);
	Dictionary(const Dictionary& other);
	Dictionary& operator=(const Dictionary& other);
	~Dictionary();



};


#endif // !__DICTIONARY





