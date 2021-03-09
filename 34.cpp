//¬ыполнить  сортировку  символов  в строке.
//ѕор€док возрастани€ "весов" символов задать таблицей вида char ORD[] = "јаЅб¬в√гƒд≈е1234567890";

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 20

int StrLen(char S[]);
int FindChar(char S[], char ch, int def);

int Str2Num(char S[]);

void main()
{
    int i, j, n, m, len;
    char temp;
    char ORD[] = "AaBbCcDdEe1234567890";
    char S[] = "nAme32";


    len = StrLen(S);

    for (i = len - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            n = FindChar(ORD, S[j], len);
            m = FindChar(ORD, S[j + 1], len);

            if (n > m)
            {
                temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
            }
        }
    }

    printf("%s\n", S);
}

int FindChar(char S[], char ch, int def)
{
    int i;

    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == ch)
        {
            return i;
        }
    }

    return def;
}

int StrLen(char S[])
{
    int i;
    for (i = 0; S[i] != '\0'; i++);

    return i;
}