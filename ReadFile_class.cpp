#include "ReadFile_class.h"
#include <iostream>
#include <string>
#include <cstring>

ReadFile::ReadFile(const char* file_name) //Contructor. I am unsure if this is correct. 
{
  int size = strlen(file_name);
  const char input_file[size];
  for (int i = 0; i < size; i++)
	  input_file[i] = file_name[i];
  
  this->input_file = input_file;
	  
   input_file.open(file_name);
   closed = false;
   eof = false;

   
}

ReadFile::~ReadFile() //Destructor. Im not passing anything so what am i destroying???
{
   delete [] input_file;
}

bool ReadFile::_eof()
{
   return eof;
}

void ReadFile::close()
{
   if (closed = false)
   {
      input_file.close();
      closed = true;
   }
}

String* ReadFile::readline()
{
   if (closed = true) return NULL;
   if (eof = true) return NULL;

   string text;
	_eof = !(getline(input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
