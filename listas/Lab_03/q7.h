#ifndef FIBONACCI_H
#define FIBONACCI_H

int fibonacci(int n) {
  if (n <= 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    int a = 0, b = 1, resultado;
    for (int i = 2; i <= n; ++i) {
      resultado = a + b;
      a = b;
      b = resultado;
    }
    return resultado;
  }
}

#endif
