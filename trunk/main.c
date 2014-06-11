#include <stdio.h>
#include <time.h>
#include "misc.h"

#define MAX_X	40
#define MAX_Y	150

#define MAX_SEEDS	8

#define ITERATIONS	30

int terrain[MAX_X][MAX_Y];

#define FOREST	'^'
#define PLAIN	'.'
#define WATER	'%'

void seedTerrain( void )
{
  int x, y, i;

  // Initialize terrain to all zeroes
  for ( x = 0 ; x < MAX_X ; x++ )
  {
    for ( y = 0 ; y < MAX_Y ; y++ )
    {
      terrain[x][y] = 0;
    }
  }

  // Seed the Mountains
  for ( i = 0 ; i < (MAX_SEEDS + getRand((MAX_SEEDS/2))) ; i++ )
  {
    terrain[ getRand(MAX_X) ][ getRand(MAX_Y) ] = 500 + getRand(200);
  }

  // Seed the water sources

  for (i = 0 ; i < 2 ; i++ )
  {
    while( 1 )
    {
      x = getRand(MAX_X);  y = getRand(MAX_Y);
      if ( terrain[ x ][ y ] == 0 )
      {
        terrain[ x ][ y ] = -1000 - getRand( 500 );
        break;
      }
    }
  }

  return;
}


void printTerrain( void )
{
  int x, y;
  
  for ( x = 0 ; x < MAX_X ; x++ )
  {
    for ( y = 0 ; y < MAX_Y ; y++ )
    {
      if      ( terrain[ x ][ y ] > 0 ) printf("%c", FOREST);
      else if ( terrain[ x ][ y ] < 0 ) printf("%c", WATER);
      else printf("%c", PLAIN);
    }
    printf( "\n" );
  }

  return;
}


int average( int x, int y )
{
  int value = 0;
  int count = 0;
  int dx, dy;

  for ( dx = -1 ; dx <= 1 ; dx++ )
  {
    for ( dy = -1 ; dy <= 1 ; dy++ )
    {
      if ((x+dx < 0) || (y+dy < 0)) continue;
      if ((x+dx >= MAX_X) || (y+dy >= MAX_Y)) continue;
      value += terrain[x+dx][y+dy];
      if (getSRand() > 0.95) 
      {
        if (value > 0) value += getRand(20);
        if (value < 0) value -= getRand(20);
      }
      count++;
    }
  }

//  printf( "x %d, y %d, value %d, count %d\n", x, y, value, count );

  if (count > 0) value = (int) ( (double)value / (double)count);

  return value;
}


void smoothTerrain( void )
{
  int x, y;
  
  for ( x = 0 ; x < MAX_X ; x++ )
  {
    for ( y = 0 ; y < MAX_Y ; y++ )
    {
      terrain[ x ][ y ] = average( x, y );
    }
  }

  return;
}

int main()
{
  int i;

  // Seed the RNG
  srand( time(NULL) );

  seedTerrain( );
  for( i = 0 ; i < ITERATIONS ; i++) smoothTerrain( );
  printTerrain( );

  return 0;
}

