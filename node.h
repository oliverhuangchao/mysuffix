#include <string>
#include <vector>
#include <map>

class node{
public:
	std::string contents;
	int alphaSize;
	std::map<char, *node> sonMap;
};