void ft_print_numbers(void);

void ft_print_numbers(void) {
    char num = '0'; // ใช้ประเภท char และเริ่มที่ตัวอักษร '0'
    while (num <= '9') {
        write(1, &num, 1); // ส่ง Address (&num) ของตัวอักษรเข้าไป
        num++;
    }
    write(1, "\n", 1);
}
int main()
{
    ft_print_numbers();
}