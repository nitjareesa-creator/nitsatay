void ft_putchar(char c);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    char a;
    a = 'Z';
    ft_putchar(a);
}