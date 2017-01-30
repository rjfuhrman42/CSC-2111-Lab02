#include "ReadFile.h"
#include <iostream>
#include <string>


ReadFile::ReadFile(const char* file_name) //Contructor. I am unsure if this is correct. 
{
   input_file.open(file_name);
   closed = false;
   eof = false;
}

ReadFile::~ReadFile() //Destructor. Im not passing anything so what am i destroying???
{
	close();
  // delete input_file;
}

bool ReadFile::_eof()
{
   return eof;
}

void ReadFile::close()
{
   if (closed == false)
   {
      input_file.close();
      closed = true;
   }
}

String* ReadFile::readLine()
{
   if (closed == true) return NULL;
   if (eof == true) return NULL;

   string text;
	eof = !(getline(input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
