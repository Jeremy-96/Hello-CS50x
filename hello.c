#include <stdio.h>
#include <cs50.h>

int main(void)
{
  // prompt the user name
  string answer = get_string("What's your name ? ");

  // say hello to the user with his name
  printf("Hello, %s\n", answer);
}