void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr(char *str) {
    while (*str) {
        ft_putchar(*str);
        str++;
    }
}

void ft_putnbr(int n) {
    if (n == -2147483648) {
        ft_putstr("-2147483648");
        return;
    }
    if (n < 0) {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        ft_putnbr(n / 10);
    }
    ft_putchar((n % 10) + '0');
}

int ft_atoi(const char *str) {
    int sign = 1;
    int result = 0;

    while (*str == ' ' || (*str >= '\t' && *str <= '\r')) {
        str++;
    }
    if (*str == '-' || *str == '+') {
        if (*str == '-') {
            sign = -1;
        }
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}

char *ft_strstr(const char *haystack, const char *needle) {
    if (!*needle) {
        return (char *)haystack;
    }
    while (*haystack) {
        const char *h = haystack;
        const char *n = needle;
        while (*h && *n && *h == *n) {
            h++;
            n++;
        }
        if (!*n) {
            return (char *)haystack;
        }
        haystack++;
    }
    return (0);
}

int ft_recursive_power(int nb, int power) {
    if (power < 0) {
        return 0;
    }
    if (power == 0) {
        return 1;
    }
    return nb * ft_recursive_power(nb, power - 1);
}

char *ft_strcpy(char *dest, const char *src) {
    char *original_dest = dest;
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
    return original_dest;
}

char *ft_strncpy(char *dest, const char *src, size_t n) {
    char *original_dest = dest;
    while (n && *src) {
        *dest++ = *src++;
        n--;
    }
    while (n--) {
        *dest++ = '\0';
    }
    return original_dest;
}

char *ft_strcat(char *dest, const char *src) {
    char *original_dest = dest;
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
    return original_dest;
}

char **ft_split(const char *str, char delimiter) {
    int count = 0;
    const char *temp = str;
    while (*temp) {
        if (*temp != delimiter && (temp == str || *(temp - 1) == delimiter)) {
            count++;
        }
        temp++;
    }

    char **result = malloc((count + 1) * sizeof(char *));
    if (!result) {
        return (0);
    }

    int index = 0;
    while (*str) {
        if (*str != delimiter) {
            const char *start = str;
            while (*str && *str != delimiter) {
                str++;
            }
            int length = str - start;
            result[index] = malloc(length + 1);
            if (!result[index]) {
                for (int i = 0; i < index; i++) {
                    free(result[i]);
                }
                free(result);
                return (0);
            }
            ft_strncpy(result[index], start, length);
            result[index][length] = '\0';
            index++;
        } else {
            str++;
        }
    }
    result[index] = (0);
    return result;
}

void ft_print_program_input(int argc, char **argv) {
    for (int i = 0; i < argc; i++) {
        ft_putstr(argv[i]);
        ft_putchar('\n');
    }
}

typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;

t_list *ft_create_node(void *content) {
    t_list *new_node = malloc(sizeof(t_list));
    if (!new_node) {
        return (0);
    }
    new_node->content = content;
    new_node->next = (0);
    return new_node;
}

void ft_list_push_back(t_list **head, void *content) {
    t_list *new_node = ft_create_node(content);
    if (!new_node) {
        return;
    }
    if (!*head) {
        *head = new_node;
        return;
    }
    t_list *temp = *head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = new_node;
}

