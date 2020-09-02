#ifndef MAPS_H
#define MAPS_H
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
	char	*dstpath;
	int	dstpos[2];
} Door;

typedef struct	{
	int	siz[2];
	int	mid[2];
	char	*s;
	bool	*collision;
	Door	**doors;
} Map;

Map	*loadmap(const char *map);

#endif
