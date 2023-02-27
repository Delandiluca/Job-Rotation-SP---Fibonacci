#include <stdio.h>

int isFibonacci(int n) {
  int a = 0, b = 1, c = 1;

  while (c < n) {
    c = a + b;
    a = b;
    b = c;
  }

  if (c == n) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n;

  while (1) {
    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &n);
    if (isFibonacci(n)) {
      printf("\nO número %d PERTENCE à sequência de Fibonacci.\n", n);
    } else {
      printf("\nO número %d NÃO pertence à sequência de Fibonacci.\n", n);
    }
  }

  return 0;
}