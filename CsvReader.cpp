#pragma warning(disable:4996)
#include"CsvReader.h"
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
const char** CsvReader(const char* path,unsigned row) {
	FILE* file;
	file = fopen(path, "r");
	const char** lines=new const char*[row];
	int i = 0;
	char line[4098];
	while (fgets(line, 4098, file) && (i < row))
	{
		char* tmp = strdup(line);
		lines[i] = tmp;

		i++;
	}
	return lines;
}

