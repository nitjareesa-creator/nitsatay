void ft_print_alphabet(void);

void ft_print_alphabet(void) {
    char letter = 'a';
    while (letter <= 'z') {
        write(1, &letter, 1);
        letter++;
    }
    write(1, "\n", 1); // ขึ้นบรรทัดใหม่เมื่อพิมพ์เสร็จ
}

int main()
{
    ft_print_alphabet();
}