#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void encryption(char c, char s[]);

int main() {
  char c;
  char s[31];

  printf("Input: ");
  scanf(" %c", &c);
  scanf("%30s", s);

  encryption(c, s);

  printf("Output: %s.\n", s);

  exit(EXIT_SUCCESS);
}

void encryption(char c, char s[]) {
  int d = strlen(s);

  if (c == 'e' || c == 'E') {
    for (int i = 0; i < d; i++) {
      if (islower(s[i])) {
        if (s[i] + 3 > 'z') {
          s[i] = 'a' + (s[i] - 'z') + 2;
        } else {
          s[i] += 3;
        }
      } else if (isupper(s[i])) {
        if (s[i] + 3 > 'Z') {
          s[i] = 'A' + (s[i] - 'Z') + 2;
        } else {
          s[i] += 3;
        }
      }
    }
  } else if (c == 'd' || c == 'D') {
    for (int i = 0; i < d; i++) {
      if (islower(s[i])) {
        if (s[i] - 3 < 'a') {
          s[i] = 'z' - ('a' - s[i]) - 2;
        } else {
          s[i] -= 3;
        }
      } else if (isupper(s[i])) {
        if (s[i] - 3 < 'A') {
          s[i] = 'Z' - ('A' - s[i]) - 2;
        } else {
          s[i] -= 3;
        }
      }
    }
  } else {
    printf("Output: -1.\n");
    exit(EXIT_FAILURE);
  }
  s[d] = '\0';
}

