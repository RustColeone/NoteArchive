#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"

int main()
{

   struct Box b1, b2;

   initBox(&b1, 3.01, 4.01, 3.01, 4.01);
   assertEquals("[ul=(3.01,4.01), w=3.01,h=4.01]", boxToString(b1), "boxToString(p1)");

   initBox(&b2, 3.14159, 6.2831853071, 2.7182878, 5.3579);
   assertEquals("[ul=(3.14,6.28), w=2.72,h=5.36]", boxToString(b2), "boxToString(p2)");
   assertEquals("[ul=(3,6), w=3,h=5]", boxToString(b2, 1), "boxToString(p2,1)");
   assertEquals("[ul=(3.142,6.283), w=2.718,h=5.358]", boxToString(b2, 4), "boxToString(p2,4)");
   assertEquals("[ul=(3.1416,6.2832), w=2.7183,h=5.3579]", boxToString(b2, 5), "boxToString(p2,5)");

   return 0;
}
