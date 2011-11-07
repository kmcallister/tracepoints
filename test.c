#include "trace.h"

tracepoint fact_entry, fact_exit;

int fact(int n) {
  TRACE(fact_entry, "fact(%d)\n", n);

  int out = 1;
  if (n > 1)
    out = n * fact(n-1);

  TRACE(fact_exit, "fact(%d) = %d\n", n, out);
  return out;
}

int main() {
  printf("result 1 is %d\n\n", fact(5));

  enable(&fact_entry);
  printf("result 2 is %d\n\n", fact(5));

  enable(&fact_exit);
  printf("result 3 is %d\n\n", fact(5));

  return 0;
}
