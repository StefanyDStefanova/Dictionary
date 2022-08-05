#include "record.h"

int main() {
	Record r("sport", "An activity involving physical exertion and skill that is governed by a set of rules or customs and often undertaken competitively.");

	r.print();
	Record rCopy = r;
	std::cout << std::endl;

	rCopy.print();
	std::cout << std::endl;

	Record rCopy2("air", "A colorless, odorless, tasteless, gaseous mixture, mainly nitrogen (approximately 78 percent) and oxygen (approximately 21 percent) with lesser amounts of argon, carbon dioxide, hydrogen, neon, helium, and other gases.");
	rCopy2.print();
	std::cout<<std::endl;
	rCopy2 = r;
	rCopy2.print();

	return 0;
}