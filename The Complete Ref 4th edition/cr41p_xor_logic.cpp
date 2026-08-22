extern "C" int printf(const char*, ...);

int Logic(int a, int b);

int main(void)
{
    printf("%d", Logic(1, 0));
    printf("%d", Logic(1, 1));
    printf("%d", Logic(0, 1));
    printf("%d", Logic(0, 0));

    return 0;
}
int Logic(int a, int b)
{
    return (a || b) && !(a && b);
}
