# include <stdio.h>
# include <stdlib.h>

int main(void) {
    printf("\nWelcome to my functions project\n\nprogrammed by @ysr075 on GitHub");
    while (1) {
        int function;
        printf("\n\n1.AND / 2.OR / 3.NOT: ");
        scanf("%d", &function);
        if (function == 1) {
            int IF1;
            printf("\nIF1: ");
            scanf("%d", &IF1);
            if (IF1 < 0 || IF1 > 1) {
                exit(0);
            } 
            int IF2;
            printf("IF2: ");
            scanf("%d", &IF2);
            if (IF2 < 0 || IF2 > 1) {
                exit(0);
            }
            if (IF1 == 1 && IF2 == 1) {
                printf("\nlamp aan.");
            } else if (IF1 == 1 && IF2 == 0) {
                printf("\nlamp uit.");
            } else if (IF1 == 0 && IF2 == 1) {
                printf("\nlamp uit.");
            } else if (IF1 == 0 && IF2 == 0) {
                printf("\nlamp uit.");
            } else {
                exit(0);
            }
        } else if (function == 2) {
            int IF1;
            printf("\nIF1: ");
            scanf("%d", &IF1);
            if (IF1 < 0 || IF1 > 1) {
                exit(0);
            }
            int IF2;
            printf("IF2: ");
            scanf("%d", &IF2);
            if (IF2 < 0 || IF2 > 1) {
                exit(0);
            }
            if (IF1 == 1 || IF2 == 1) {
                printf("\nlamp aan.");
            } else if (IF1 == 0 || IF2 == 0) {
                printf("\nlamp uit.");
            } else {
                exit(0);
            }
        } else if (function == 3) {
            int IF1;
            printf("\nIF1: ");
            scanf("%d", &IF1);
            if (IF1 == 1) {
                printf("\nlamp uit.");
            } else if (IF1 == 0) {
                printf("\nlamp aan.");
            } else {
                exit(0);
            }
        } else {
            exit(0);
        }
    }
return 0;
}
