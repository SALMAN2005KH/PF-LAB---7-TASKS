#include<stdio.h>
int main()
{
  int marks, pass[10], fail[10];
    int i, p = 0, f = 0;
    float psum = 0, fsum = 0;

    printf("Enter marks (-1 to stop):\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks);

        if (marks == -1)
            break;

        if (marks >= 5 && marks <= 10)
        {
            pass[p] = marks;
            psum += marks;
            p++;
        }
        else if (marks >= 0 && marks < 5)
        {
            fail[f] = marks;
            fsum += marks;
            f++;
        }
    }

    printf("\nPass Marks:\n");
    for (i = 0; i < p; i++)
        printf("%d ", pass[i]);

    if (p > 0)
        printf("\nAverage (Pass) = %.2f\n", psum / p);

    printf("\nFail Marks:\n");
    for (i = 0; i < f; i++)
        printf("%d ", fail[i]);

    if (f > 0)
        printf("\nAverage (Fail) = %.2f\n", fsum / f);

    return 0;
}