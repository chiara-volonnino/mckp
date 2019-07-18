//#pragma once

#include <string>
#include <sstream>
#include <vector>

// C++ directive to declare the use of name of standard library
using namespace std;

class StringBuilder
{
private:
	wstring privateString;

public:
	StringBuilder()
	{
	}

	StringBuilder(const wstring &initialString)
	{
		privateString = initialString;
	}

	StringBuilder(size_t capacity)
	{
		ensureCapacity(capacity);
	}

	wchar_t charAt(size_t index)
	{
		return privateString[index];
	}

	StringBuilder *append(const wstring &toAppend)
	{
		privateString += toAppend;
		return this;
	}

	template<typename T>
	StringBuilder *append(const T &toAppend)
	{
		privateString += toString(toAppend);
		return this;
	}

	StringBuilder *insert(size_t position, const wstring &toInsert)
	{
		privateString.insert(position, toInsert);
		return this;
	}

	template<typename T>
	StringBuilder *insert(size_t position, const T &toInsert)
	{
		privateString.insert(position, toString(toInsert));
		return this;
	}

	wstring toString()
	{
		return privateString;
	}

	size_t length()
	{
		return privateString.length();
	}

	void setLength(size_t newLength)
	{
		privateString.resize(newLength);
	}

	size_t capacity()
	{
		return privateString.capacity();
	}

	void ensureCapacity(size_t minimumCapacity)
	{
		privateString.reserve(minimumCapacity);
	}

	StringBuilder *remove(size_t start, size_t end)
	{
		privateString.erase(start, end - start);
		return this;
	}

	StringBuilder *replace(size_t start, size_t end, const wstring &newString)
	{
		privateString.replace(start, end - start, newString);
		return this;
	}

private:
	template<typename T>
	static wstring toString(const T &subject)
	{
		wostringstream ss;
		ss << subject;
		return ss.str();
	}
};
