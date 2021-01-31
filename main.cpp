#include <stdio.h>
#include <stdlib.h>
#include "vem.h"

/* neuron simulation no.1 */

/*
typedef struct {
  int32_t   type;
  char      name[256];
  double    delta;
  uint32_t  nano;     // nano sec delay..
  uint32_t  now;      // current life
  CELLPOS   pos;      // centre
  CELLCOLOR color;
} CELLPROP;
*/

CELLPROP cells[25] = {0, };

/*
    SET1 : seperator T5 (1.0)->(0.33, 0.33, 0.33)->(0.11, 0.22, 0.33, 0.22, 0.11)
    00 00 S3 00 00    (1.0)
    00 S3 S3 S3 00    ()
    C1 C1 C1 C1 C1

    SET2 : seperator T3  (1.0)->(0.33, 0.33, 0.33)
    00 S3 00
    C1 C1 C1

    SET3 : amplier T3 (x3) (1.0, 1.0, 1.0) -> (1.5)
    A2 A2 A2
    00 C1 00

    SET4 : amplier T5 (x5) (1.0, 1.0, 1.0, 1.0, 1.0) -> (1.0, 1.0, 1.0) -> (1.5)
    A2 A2 A2 A2 A2
    00 A2 A2 A2 00
    00 00 C1 00 00

    cell type
    C1 = R1
    S2
    S3
    A2
    A3
    T0
    T1
    T3
    
    1 1 0 1 1
    0 1 1 1 0
    0 1 1 0 1
    1 1 0 0 1
    1 1 1 1 1
*/

int main(int argc, char* argv[])
{

  return 0;
}
