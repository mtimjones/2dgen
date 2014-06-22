// cmain.c

#include <stdio.h>
#include <time.h>
#include "cluster.h"

Place_t terrain[ 2 ][ MAX_X ][ MAX_Y ];


void ClearTerrain( )
{
   unsigned int x, y, z;

   for ( z = 0 ; z < 2 ; z++ )
   {
     for ( x = 0 ; x < MAX_X ; x++ )
     {
        for ( y = 0 ; y < MAX_Y ; y++ )
        {
           terrain[ z ][ x ][ y ].type = PLAIN_TYPE;
           terrain[ z ][ x ][ y ].value = 0;
         }
      }
   }

   return;
}

void Seed( int z, unsigned int type, unsigned int count )
{
   unsigned int x, y;

   while ( count-- )
   {

      // Find an open spot.
      while (1)
      {
         x = getRand( MAX_X );
         y = getRand( MAX_Y );

         if ( terrain[ z ][ x ][ y ].type == PLAIN_TYPE )
         {
            terrain[ z ][ x ][ y ].type = type;
            terrain[ z ][ x ][ y ].value = 2000 + getRand( 800 );
            break;
         }

      }

   }

   return;
}


void SeedTerrain( int z )
{
   Seed( z, PLAIN_TYPE, NUMBER_PLAINS );
   Seed( z, FOREST_TYPE, NUMBER_FORESTS );
   Seed( z, WATER_TYPE, NUMBER_WATER );
   Seed( z, SWAMP_TYPE, NUMBER_SWAMP );
   Seed( z, MOUNTAIN_TYPE, NUMBER_MOUNTAIN );
 
   return;
}


void PrintTerrain( int z )
{
  int x, y;
  
  for ( x = 0 ; x < MAX_X ; x++ )
  {
    for ( y = 0 ; y < MAX_Y ; y++ )
    {
      if      ( terrain[ z ][ x ][ y ].type == PLAIN_TYPE ) printf(".");
      else if ( terrain[ z ][ x ][ y ].type == FOREST_TYPE ) printf("F");
      else if ( terrain[ z ][ x ][ y ].type == MOUNTAIN_TYPE ) printf("^");
      else if ( terrain[ z ][ x ][ y ].type == SWAMP_TYPE ) printf("S");
      else if ( terrain[ z ][ x ][ y ].type == WATER_TYPE ) printf("~");
      else printf(".");
    }
    printf( "\n" );
  }

  return;
}


void average( int x, int y, int z )
{
   int types[MAX_TYPES];
   int counts[MAX_TYPES];
   int i, j, dx, dy, type, max;
   int w = (z) ? 0 : 1;

   // 'z' is the terrain we're using (write to the opposite)

   for (i = 0 ; i < MAX_TYPES ; i++)
   {
      types[i] = 0;
      counts[i] = 0;
   }

   // For the given point, identify what's most common around the 
   // point, and then average (type-wise) and average with that type.

   // Find what's around this point in the terrain space.
   for ( dx = -1 ; dx <= 1 ; dx++ )
   {
      for ( dy = -1 ; dy <= 1 ; dy++ )
      {
         if ((x+dx < 0) || (y+dy < 0)) continue;
         if ((x+dx >= MAX_X) || (y+dy >= MAX_Y)) continue;
         types[ terrain[ z ][ x+dx ][ y+dy ].type ] += terrain[ z ][ x+dx ][ y+dy ].value;
         counts[ terrain[ z ][ x+dx ][ y+dy ].type ]++;
      }
   }

   // Pick a random point in the types list, and pick the best type
   // to average for.
   i = getRand( MAX_TYPES );
   type = 0;
   max = 0;

   for ( j = 0 ; j < MAX_TYPES ; j++ )
   {
      int realindex = (i + j) % MAX_TYPES;
      if ( types[ realindex ] > max )
      {
         type = realindex;
         max = types[ realindex ];
      }
   }

   // Only average if we found something of value.
   if (max > 1)
   {
      // Perform the average.
      terrain[ w ][ x ][ y ].type = type;
      terrain[ w ][ x ][ y ].value = (unsigned int)( (float)max / 9 );
      if ( getSRand() > 0.90 )
      {
         unsigned int value = terrain[ w ][ x ][ y ].value;
         if ( getSRand() > 0.5 ) terrain[ w ][ x ][ y ].value += getRand( (value) );
         else terrain[ w ][ x ][ y ].value -= getRand( (value ) );
      }
   } 
   else
   {
      terrain[ w ][ x ][ y ].type = PLAIN_TYPE;
      terrain[ w ][ x ][ y ].value = 0;
   }

   return;
}


void EvolveTerrain( int z )
{
   int x, y;

   for ( x = 0 ; x < MAX_X ; x++ )
   {
      for ( y = 0 ; y < MAX_Y ; y++ )
      {
         average( x, y, z );
      }
   }

   return;
}


int main( )
{
   int i;

   // Seed the RNG.
   srand( time( NULL ) );

   ClearTerrain( );

   SeedTerrain( 0 );

   PrintTerrain( 0 );

   for (i = 0 ; i < ITERATIONS ; i++) 
   {
      EvolveTerrain( (i & 0x01) );
   }

   PrintTerrain( ((i)?0:1) );

   return 0;
}

