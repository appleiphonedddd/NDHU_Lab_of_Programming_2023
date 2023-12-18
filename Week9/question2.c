int main()
{

    int *p;
    init(&p);

    // p points to start of 2D array

    // Offset for row 0, col 4
    int r0c4 = *(p + 4);

    // Offset for row 4, col 3
    int r4c3 = *(p + 4 * 7 + 3);

    printf("%d, %d", r0c4, r4c3);

    return 0;
}