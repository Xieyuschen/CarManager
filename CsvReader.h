//#pragma once
//#ifdef CSVREADER_EXPORT
//#define CsvReader_API __declspec(dllexport)
//#else 
//#define CsvReader_API __declspec(dllimport)
//#endif
//extern "C" {
//
//}
#include"Structs.h"

#define CSVREADER_H
#ifdef CSVREADER_H
const char** CsvReader(const char* path, unsigned rows);

#endif // CSVREADER_H

