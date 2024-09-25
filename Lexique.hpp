#pragma once
#include <string>
#include <map>

class Lexique
{
public:
	Lexique(const std::string& fileName);

	unsigned int GetWordOccurences(const std::string& word) const;
	unsigned int GetWordCount() const;
	void DeleteWord(const std::string& word);

	bool SaveToFile(const std::string& fileName) const;
		
private:
	std::map<std::string, unsigned int> occurences;
	std::string inputString = "";

};

