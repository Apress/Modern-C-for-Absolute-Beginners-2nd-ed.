#include <stdio.h>

enum MyEnum
{
      RED,
      YELLOW,
      GREEN
};

int main(void)
{
      enum MyEnum myenum;
      myenum = GREEN;
      switch (myenum)
      {
      case RED:
            printf("The color is red.\n");
            break;
      case YELLOW:
            printf("The color is yellow.\n");
            break;
      case GREEN:
            printf("The color is green.\n");
            break;
      default:
			printf("Unknown.\n");
            break;
      }
}