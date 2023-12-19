#include "common"

int main(void)
{
    // char p[]{"frxn"};
    char p[]{"worldxx"};
    int plen = strlen(p);
    char s[]{"This frx is the fff the frxian's world!"};
    int slen = strlen(s);

    // Naive version
    int i = -1, j = 0;

    while (j != plen && slen - i >= plen)
    {
        i++;
        j = 0;
        /// to match
        while (j < plen && s[i + j] == p[j])
        {
            j++;
        }
    }
    OUT((j == plen ? i : INT_MAX));
    return 0;
}
