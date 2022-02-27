// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double result = value;
  for (int i = 2; i <= n; i++)
    result *= value;
  return result;
}

uint64_t fact(uint16_t n) {
  uint64_t result = 1;
  if (n < 1) return 0;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

double calcItem(double x, uint16_t n) {
  if (n == 0 || x == 0) return 0;
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double result = 1;
  for (int i = 1; i <= count; i++) {
    result += pown(x, i) / fact(i);
  }
  return result;
}

double sinn(double x, uint16_t count) {
  double result = x;
  int step = 3;
  int symbol = -1;
  for (int i = 2; i <= count; i++) {
    result += symbol * (pown(x, step) / fact(step));
    step += 2;
    symbol = -symbol;
  }
  return result;
}

double cosn(double x, uint16_t count) {
  double result = 1;
  int step = 2;
  int symbol = -1;
  for (int i = 2; i <= count; i++) {
    result += symbol*(pown(x, step) / fact(step));
    step += 2;
    symbol = -symbol;
  }
  return result;
}
