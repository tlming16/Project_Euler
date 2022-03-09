
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <string>

extern "C" char *pi(int digits, char *ans);

int main(int argc, char **argv) {

  int digit = 1000;
  if (argc == 2) {
    digit = atoi(argv[1]);
  } else {
    printf("usage: pi [precision]\n");
    exit(55);
  }
  if (digit < 0) {
    printf(" precision too low\n");
    digit = 3;
  } else if (digit > 10000) {
    printf("be patient to wait a while \n");
  }
  char *ans = new char[digit + 3];
  auto start_time = std::chrono::system_clock::now();
  char *res = pi(digit, ans);
  auto end_time = std::chrono::system_clock::now();
  printf("pi=%s", res);
  printf("\n time is %lld",
         std::chrono::duration_cast<std::chrono::seconds>(end_time - start_time)
             .count());
  delete[] ans;
  return 0;
}
