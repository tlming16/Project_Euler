// this is a plain translation from pi.d
// all rights reserved
// g++ pi.cpp -O3 -std=c++11
#include <chrono>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int LONG_TIME = 4000;
vector<char> p;
vector<char> t;
int q;

int tiszero() {
  int k;
  for (k = 0; k <= q; k++) {
    if (t[k] != 0)
      return false;
  }
  return true;
}

void mul4() {
  int i, c, d;
  d = c = 0;
  for (i = q; i >= 0; i--) {
    d = (p[i] * 4 + c) % 10;
    c = (p[i] * 4 + c) / 10;
    p[i] = static_cast<char>(d);
  }
}

void div4() {
  int i, c, d = 0;
  for (int i = 0; i <= q; i++) {
    c = (10 * d + p[i]) / 4;
    d = (10 * d + p[i]) % 4;
    p[i] = static_cast<char>(c);
  }
}
void div(int divisor) {
  int i, b;
  int quotient, remainder = 0;
  for (auto &x : t) {
    b = (10 * remainder + x);
    quotient = b / divisor;
    remainder = b % divisor;
    x = static_cast<char>(quotient);
  }
}

void mul(int multiplier) {
  int b, i, carry = 0, digit = 0;
  for (i = q; i >= 0; i--) {
    b = (t[i] * multiplier + carry);
    digit = b % 10;
    carry = b / 10;
    t[i] = static_cast<char>(digit);
  }
}
void sub() {
  int j;
  for (j = q; j >= 0; j--) {
    if (p[j] < t[j]) {
      p[j] -= t[j] - 10;
      p[j - 1] -= 1;
    } else {
      p[j] -= t[j];
    }
  }
}

void add() {
  int j;
  for (j = q; j >= 0; j--) {
    if (t[j] + p[j] > 9) {
      p[j] += t[j] - 10;
      p[j - 1] += 1;
    } else {
      p[j] += t[j];
    }
  }
}

void arctan(int s, bool flag = false) {
  int n;
  t[0] = 1;
  div(s);
  if (flag) {
    sub();
  } else {
    add();
  }
  n = 1;
  do {
    mul(n);
    div(s * s);
    div(n += 2);
    if (((n - 1) / 2) % 2 == 0) {
      if (flag) {
        sub();
      } else
        add();
    } else {
      if (flag) {
        add();
      } else
        sub();
    }
  } while (!tiszero());
}

int main(int argc, char *argv[]) {
  if (argc == 2) {
    q = atoi(argv[1]);
  } else {
    cout << "usage: pi [precision]\n";
    exit(55);
  }
  if (q < 0) {
    cout << " precision too low\n";
    q = 3;
  } else if (q > LONG_TIME) {
    cout << " be patient to wait a while \n";
  }
  q++;
  p.resize(q + 1);
  t.resize(q + 1);
  auto start_time = std::chrono::system_clock::now();
  arctan(5);
  mul4();
  arctan(239, true);
  mul4();
  auto end_time = std::chrono::system_clock::now();
  q--;
  cout << "pi = " << static_cast<int>(p[0]) << ".";
  for (int i = 1; i <= q; i++) {
    cout << static_cast<int>(p[i]);
  }
  cout << "\n time is "
       << std::chrono::duration_cast<std::chrono::seconds>(end_time -
                                                           start_time)
              .count()
       << "s\n";
  return 0;
}
