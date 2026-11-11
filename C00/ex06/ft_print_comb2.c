void ft_print_comb2(void);
void ft_putchar(char c);

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb2(void) {
    int a;
    int b;
    char c;

    a = 0;
    while (a <= 98) {
        b = a + 1;
        while (b <= 99) {
            // พิมพ์ตัวเลขคู่แรก (a) แยกหลักสิบและหลักหน่วย
            c = (a / 10) + '0'; // แปลงหลักสิบเป็นตัวอักษร
            ft_putchar(c);
            c = (a % 10) + '0'; // แปลงหลักหน่วยเป็นตัวอักษร
            ft_putchar(c);
            
            // พิมพ์ช่องว่างคั่นระหว่างสองจำนวน
            ft_putchar(' ');
            
            // พิมพ์ตัวเลขคู่ที่สอง (b) แยกหลักสิบและหลักหน่วย
            c = (b / 10) + '0'; // แปลงหลักสิบเป็นตัวอักษร
            ft_putchar(c);
            c = (b % 10) + '0'; // แปลงหลักหน่วยเป็นตัวอักษร
            ft_putchar(c);
            
            // ถ้านี่ไม่ใช่ตัวสุดท้าย (98 99) ให้พิมพ์ ", " คั่น
            if (!(a == 98 && b == 99)) {
                ft_putchar(',');
                ft_putchar(' ');
            }
            b++;
        }
        a++;
    }
}
int main()
{
    ft_print_comb2();
}