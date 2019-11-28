# Libft
Sch42
This lib for second task in school 21

char *ft_strjoin(*s1, *s2) - возвращает указатель на склеенную строку из строк s1, s2;

char	*ft_strsub(char const *s, unsigned int start, size_t len) - выделяет подстроку в строке s с ячейки start длинной len и возвращает на нее указатель;

char *strdup(const char *str) - дублирует строку str в новую и возвращает на нее указатель;

void	ft_strdel(char * *as) - фришит строку

char * ft_strnew(size_t size) - Выделяет (с помощью malloc (3)) и возвращает «чистую» строку, заканчивающуюся на «\0». Каждый символ строки инициализируется в «\0». Если распределение завершается неудачно, функция возвращает NULL.;
char *ft_strchr(const char *str, int ch) - Функция strchr() возвращает указатель на первое вхождение символа ch в строку, на которую указывает str. Если символ ch не найден, возвращается NULL.
