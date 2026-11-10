void ft_print_comb2(void);
void ft_print_comb2(void) {
    char a = '0';
    char b;
    while (a <= '9') {
        b = '0';
        while (b <= '9') {

            if (!(a == '9' && b == '9')) {
                char c = a;
                char d = b + 1;
                if (d > '9') {
                    c++;
                    d = '0';
                }
                while (c <= '9')
                {
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, " ", 2);
                }
                
                write(1, &c, 1);
                write(1, &d, 1);
                if (!(c == '9' && d == '9')) {
                    write(1, ", ", 2);
                }

            }
            b++;
        }
        a++;
    }
    write(1, "\n", 1);
}   

int main()
{
    ft_print_comb2();
}