int main()
{
    FILE *fp = fopen("test.txt", "r");

    if (fp == NULL)
    {
    }

    rewind(fp);

    return 0;
}
