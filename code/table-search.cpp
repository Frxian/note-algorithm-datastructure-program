#include "common"

int main(void)
{
    char src[]{"coco"};
    // char src[]{"david"};
    char* obj[]{"david", "frxian", "jack", "jone", "matthew", "tom"};

    // Use binary algorithm for searching for a string, and use string comparison btw two strings.  
    int l = 0, r = 6, m = 0;
    int N = 6;

    while (l < r)
    {
        m = (l + r) / 2;

        /// Compare two strings.
        int i = 0;
        while (*(obj[m] + i) == src[i] && src[i] != '\0')
        {
            i++;
        }
        if (src[i] != '\0' && *(obj[m] + i) < src[i])
        {
            l = m + 1;
        }
        else
        {
            r = m;
        }
    }
    
    int i = 0;
    while (*(obj[r] + i) == src[i] && src[i] != '\0')
        i++;

    OUT((src[i] == '\0'));

    return 0;
}
