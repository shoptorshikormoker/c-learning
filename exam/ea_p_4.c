#include <stdio.h>

int main()
{
  // array declaration and initialization
  int arr[1000] = {}, i = 0;
    printf("Address : %u\n",(arr + 0));
    printf("Address : %u\n",(arr + 1));
    printf("Address : %u\n",(arr + 2));
    printf("Address : %u\n",(arr + 781));
    printf("Address : %u\n",(arr + 999));

  return 0;
}
