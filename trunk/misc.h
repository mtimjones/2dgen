// misc.h

#ifndef __MISC_H__
#define __MISC_H__

#include <stdlib.h>

#define getSRand()	((float)rand() / (float)RAND_MAX)
#define getRand(x)	(int)((x) * getSRand())

#endif
