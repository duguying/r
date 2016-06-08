#ifndef _AZALEA_API_H_
#define _AZALEA_API_H_ 

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

///error status
#define IERROR -1
///ok status
#define IOK 0

typedef enum etype etype;
///element type
enum etype{inte , floate , stringe , doublee , structe};
//        0     , 1      , 2       , 3       , 4

#endif