#include <stdio.h>

int main()
{

    int t, d[3], x;

    scanf("%d", &t);

    while (t > 0)
    {
        x = 0;

        scanf("%d %d %d", &d[0], &d[1], &d[2]);

        for (int i = 0; i < 3; i++)
        {

            for (int j = i + 1; j < 3; j++)
            {

                if (d[i] + d[j] >= 10)
                {
                    x++;
                    break;
                }
            }
            if (x != 0)
            {
                printf("YES\n");
                break;
            }
            else if (i == 2)
            {
                printf("NO\n");
            }
        }

        t--;
    }

    return 0;
}
