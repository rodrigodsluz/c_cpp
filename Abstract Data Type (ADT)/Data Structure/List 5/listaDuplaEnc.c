#include <stdio.h>
#include <stdlib.h>
#include "listaDuplaEnc.h"

typedef struct element{ 
    Student student;
    struct element *next;
    struct element *prev;
}Element;

