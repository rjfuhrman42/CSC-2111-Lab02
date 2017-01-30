#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
	public:
		ifstream input_file;
		bool eof;
		bool closed;
	public:
	
		ReadFile(const char* file_name);
		~ReadFile();
		String* readLine();
		bool _eof();
		void close();
	
};		

/* ReadFile* createReadFile(const char* file_name);
void destroyReadFile(ReadFile* rf);
String* readLine(ReadFile* rf);
bool eof(ReadFile* rf);
void close(ReadFile* rf); */

#endif
