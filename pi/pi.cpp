// this is motivated by pi.d
// https://github.com/dlang/dmd/blob/master/samples/pi.d
// ref from : https://en.wikipedia.org/wiki/Pi
// all rights reserved
// g++ pi.cpp -O3 -std=c++11
// g++ -fPIC -shared -O3 -o pi_lib pi.cpp -std=c++11
#include <future>
#include <string>
#include <thread>
#include <vector>
using namespace std;
int tiszero(const std::vector<char> &t) {
  int k;
  int q = t.size() - 1;
  for (k = 0; k <= q; k++) {
    if (t[k] != 0)
      return false;
  }
  return true;
}

void mul4(std::vector<char> &p) {
  int i, c, d;
  d = c = 0;
  int q = p.size() - 1;
  for (i = q; i >= 0; i--) {
    d = (p[i] * 4 + c) % 10;
    c = (p[i] * 4 + c) / 10;
    p[i] = static_cast<char>(d);
  }
}

void div4(std::vector<char> &p) {
  int i, c, d = 0;
  int q = p.size() - 1;
  for (int i = 0; i <= q; i++) {
    c = (10 * d + p[i]) / 4;
    d = (10 * d + p[i]) % 4;
    p[i] = static_cast<char>(c);
  }
}
void div(std::vector<char> &t, int divisor) {
  int i, b;
  int quotient, remainder = 0;
  for (auto &x : t) {
    b = (10 * remainder + x);
    quotient = b / divisor;
    remainder = b % divisor;
    x = static_cast<char>(quotient);
  }
}

void mul(std::vector<char> &t, int multiplier) {
  int b, i, carry = 0, digit = 0;
  int q = t.size() - 1;
  for (i = q; i >= 0; i--) {
    b = (t[i] * multiplier + carry);
    digit = b % 10;
    carry = b / 10;
    t[i] = static_cast<char>(digit);
  }
}
void sub(std::vector<char> &p, const std::vector<char> &t) {
  int j;
  int q = t.size() - 1;
  for (j = q; j >= 0; j--) {
    if (p[j] < t[j]) {
      p[j] -= t[j] - 10;
      p[j - 1] -= 1;
    } else {
      p[j] -= t[j];
    }
  }
}

void add(std::vector<char> &p, const std::vector<char> &t) {
  int j;
  int q = t.size() - 1;
  for (j = q; j >= 0; j--) {
    if (t[j] + p[j] > 9) {
      p[j] += t[j] - 10;
      p[j - 1] += 1;
    } else {
      p[j] += t[j];
    }
  }
}

void arctan(std::vector<char> &p, std::vector<char> &t, int s,
            bool flag = false) {
  int n;
  t[0] = 1;
  div(t, s);
  if (flag) {
    sub(p, t);
  } else {
    add(p, t);
  }
  n = 1;
  do {
    mul(t, n);
    div(t, s * s);
    div(t, n += 2);
    if (((n - 1) / 2) % 2 == 0) {
      if (flag) {
        sub(p, t);
      } else
        add(p, t);
    } else {
      if (flag) {
        add(p, t);
      } else
        sub(p, t);
    }
  } while (!tiszero(t));
}

extern "C" char *pi(int digits, char *ans) {
  // v1: arctan(1/2) +arctan(1/3) =pi/4
  // v2: 4arctan(1/5) - arctan(1/239) =pi/4
  // v2 is faster than v1

  int q = digits + 1;
  std::vector<char> p(q + 1);
  std::vector<char> t(q + 1);
  std::vector<char> p1(q + 1);
  std::vector<char> t1(q + 1);

  std::future<void> f = std::async(std::launch::async, [&]() {
    arctan(p, t, 5);
    mul4(p);
  });
  std::future<void> f1 =
      std::async(std::launch::async, [&]() { arctan(p1, t1, 239, true); });
  f.get();
  f1.get();
  add(p, p1);
  mul4(p);
  ans[0] = '3';
  ans[1] = '.';
  for (int i = 1; i <= q; i++) {
    ans[i + 1] = (p[i] + '0');
  }
  ans[q + 1] = '\0';
  return ans;
}
