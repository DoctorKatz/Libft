cmake_minimum_required(VERSION 3.14)
project(Libft C)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
set(CMAKE_C_STANDARD 99)

add_executable(Libft main.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strlen.c ft_strdup.c ft_strncpy.c ft_strcpy.c ft_strcat.c ft_strstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strmap.c ft_putchar.c ft_putstr.c ft_sqrt.c ft_isprime.c ft_iterative_power.c ft_swap.c ft_split_whitespace.c ft_memrchr.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strnstr.c)