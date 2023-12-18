int main()
{

    init();

    char *str = s;

    int sum = 0;

    char *p = str;

    while (*p)
    {

        if (*p >= '0' && *p <= '9')
        {

            int num = 0;
            while (*p >= '0' && *p <= '9')
            {
                num = num * 10 + (*p - '0');
                p++;
            }
            sum += num;
        }
        else
        {
            p++;
        }
    }

    printf("%d", sum);

    return 0;
}