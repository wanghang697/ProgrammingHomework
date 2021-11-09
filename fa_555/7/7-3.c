#include <stdio.h>

int getDigit(long long n);

int main() {
  long long n;
  int len;

  scanf("%lld", &n);
  len = getDigit(n);
  if (len > 1)
    printf("The integer %lld has %d digits.\n", n, len);
  else
    printf("The integer %lld has %d digit.\n", n, 1);
  return 0;
}

/* 请在这里填写答案 */

typedef long long int64;

int getDigit(int64 n) {
  int ans = 0;
  do ++ans; while (n /= 10);
  return ans;
}