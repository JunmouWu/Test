#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "treeStructure.h"
#include "destroyTree.h"

void destroyTree( Node *node)
{
	if( node->child[0] == NULL )
	{
		free( node );
		node = NULL;
	}
	else
	{
		for( int i=0; i<4; ++i )
		{
			destroyTree( node->child[i] );

		}
	}
	return;
}
