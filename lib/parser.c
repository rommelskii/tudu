#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "parser.h"

void parseFile(FILE* pFile) {
	if (pFile == NULL) {
		fprintf(stderr, "Error: cannot open file");
		return;
	}
}
