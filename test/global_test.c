/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:08:30 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/22 10:22:07 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	print_header(const char *test_name)
{
	printf("\n========== %s ==========\n", test_name);
}

void	print_test(const char *desc, int result)
{
	printf("%s: %s\n", desc, result ? "✓ PASS" : "✗ FAIL");
}

void	print_content(void *content)
{
	printf("%s -> ", (char *)content);
}

void	del_content(void *content)
{
	free(content);
}

void	*duplicate_content(void *content)
{
	return (ft_strdup((char *)content));
}

void	iter_toupper(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

char	map_toupper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

void	striteri_example(unsigned int i, char *c)
{
	*c = *c + i;
}

void	test_character_checks(void)
{
	print_header("CHARACTER CHECK FUNCTIONS");
	
	print_test("ft_isalpha('a')", ft_isalpha('a') != 0);
	print_test("ft_isalpha('Z')", ft_isalpha('Z') != 0);
	print_test("ft_isalpha('5')", ft_isalpha('5') == 0);
	
	print_test("ft_isdigit('5')", ft_isdigit('5') != 0);
	print_test("ft_isdigit('a')", ft_isdigit('a') == 0);
	
	print_test("ft_isalnum('a')", ft_isalnum('a') != 0);
	print_test("ft_isalnum('5')", ft_isalnum('5') != 0);
	print_test("ft_isalnum('!')", ft_isalnum('!') == 0);
	
	print_test("ft_isascii(65)", ft_isascii(65) != 0);
	print_test("ft_isascii(128)", ft_isascii(128) == 0);
	
	print_test("ft_isprint(' ')", ft_isprint(' ') != 0);
	print_test("ft_isprint('~')", ft_isprint('~') != 0);
	print_test("ft_isprint(31)", ft_isprint(31) == 0);
}

void	test_character_conversion(void)
{
	print_header("CHARACTER CONVERSION FUNCTIONS");
	
	print_test("ft_toupper('a') == 'A'", ft_toupper('a') == 'A');
	print_test("ft_toupper('Z') == 'Z'", ft_toupper('Z') == 'Z');
	
	print_test("ft_tolower('A') == 'a'", ft_tolower('A') == 'a');
	print_test("ft_tolower('z') == 'z'", ft_tolower('z') == 'z');
}

void	test_string_functions(void)
{
	char	buf1[50];
	char	buf2[50];
	char	*result;

	print_header("STRING FUNCTIONS");
	
	print_test("ft_strlen(\"hello\") == 5", ft_strlen("hello") == 5);
	print_test("ft_strlen(\"\") == 0", ft_strlen("") == 0);
	
	result = ft_strchr("hello world", 'w');
	print_test("ft_strchr(\"hello world\", 'w')", result && strcmp(result, "world") == 0);
	print_test("ft_strchr(\"hello\", 'x') == NULL", ft_strchr("hello", 'x') == NULL);
	
	result = ft_strrchr("hello world", 'o');
	print_test("ft_strrchr(\"hello world\", 'o')", result && strcmp(result, "orld") == 0);
	
	print_test("ft_strncmp(\"abc\", \"abc\", 3) == 0", ft_strncmp("abc", "abc", 3) == 0);
	print_test("ft_strncmp(\"abc\", \"abd\", 3) < 0", ft_strncmp("abc", "abd", 3) < 0);
	
	ft_strlcpy(buf1, "hello world", sizeof(buf1));
	print_test("ft_strlcpy copies correctly", strcmp(buf1, "hello world") == 0);
	
	strcpy(buf2, "hello ");
	ft_strlcat(buf2, "world", sizeof(buf2));
	print_test("ft_strlcat concatenates correctly", strcmp(buf2, "hello world") == 0);
	
	result = ft_strnstr("hello world", "wor", 15);
	print_test("ft_strnstr finds substring", result != NULL && strncmp(result, "world", 5) == 0);
	
	result = ft_strdup("test string");
	print_test("ft_strdup duplicates correctly", result && strcmp(result, "test string") == 0);
	free(result);
	
	result = ft_substr("hello world", 6, 5);
	print_test("ft_substr(\"hello world\", 6, 5) == \"world\"", result && strcmp(result, "world") == 0);
	free(result);
	
	result = ft_strjoin("hello ", "world");
	print_test("ft_strjoin(\"hello \", \"world\")", result && strcmp(result, "hello world") == 0);
	free(result);
	
	result = ft_strtrim("   hello world   ", " ");
	print_test("ft_strtrim removes spaces", result && strcmp(result, "hello world") == 0);
	free(result);
	
	result = ft_strmapi("hello", map_toupper);
	print_test("ft_strmapi converts to uppercase", result && strcmp(result, "HELLO") == 0);
	free(result);
	
	strcpy(buf1, "aaa");
	ft_striteri(buf1, striteri_example);
	print_test("ft_striteri modifies string", strcmp(buf1, "abc") == 0);
}

void	test_split(void)
{
	char	**result;
	int		i;

	print_header("FT_SPLIT FUNCTION");
	
	result = ft_split("hello world test split", ' ');
	print_test("ft_split creates array", result != NULL);
	print_test("ft_split[0] == \"hello\"", result && strcmp(result[0], "hello") == 0);
	print_test("ft_split[1] == \"world\"", result && strcmp(result[1], "world") == 0);
	print_test("ft_split[2] == \"test\"", result && strcmp(result[2], "test") == 0);
	print_test("ft_split[3] == \"split\"", result && strcmp(result[3], "split") == 0);
	
	if (result)
	{
		i = 0;
		while (result[i])
			free(result[i++]);
		free(result);
	}
}

void	test_memory_functions(void)
{
	char	buf1[20];
	char	buf2[20];
	void	*result;

	print_header("MEMORY FUNCTIONS");
	
	ft_memset(buf1, 'A', 10);
	buf1[10] = '\0';
	print_test("ft_memset fills memory", strncmp(buf1, "AAAAAAAAAA", 10) == 0);
	
	strcpy(buf2, "hello");
	ft_bzero(buf2, 3);
	print_test("ft_bzero clears memory", buf2[0] == 0 && buf2[1] == 0 && buf2[2] == 0);
	
	ft_memcpy(buf1, "copy test", 9);
	buf1[9] = '\0';
	print_test("ft_memcpy copies memory", strcmp(buf1, "copy test") == 0);
	
	strcpy(buf1, "overlap test");
	ft_memmove(buf1 + 3, buf1, 7);
	print_test("ft_memmove handles overlap", strncmp(buf1 + 3, "overlap", 7) == 0);
	
	result = ft_memchr("hello world", 'w', 11);
	print_test("ft_memchr finds character", result != NULL && *(char *)result == 'w');
	
	print_test("ft_memcmp(\"abc\", \"abc\", 3) == 0", ft_memcmp("abc", "abc", 3) == 0);
	print_test("ft_memcmp(\"abc\", \"abd\", 3) < 0", ft_memcmp("abc", "abd", 3) < 0);
	
	result = ft_calloc(5, sizeof(int));
	print_test("ft_calloc allocates zeroed memory", result != NULL);
	if (result)
	{
		print_test("ft_calloc zeroes memory", ((int *)result)[0] == 0 && ((int *)result)[4] == 0);
		free(result);
	}
}

void	test_conversion_functions(void)
{
	char	*result;

	print_header("CONVERSION FUNCTIONS");
	
	print_test("ft_atoi(\"123\") == 123", ft_atoi("123") == 123);
	print_test("ft_atoi(\"-456\") == -456", ft_atoi("-456") == -456);
	print_test("ft_atoi(\"  42\") == 42", ft_atoi("  42") == 42);
	print_test("ft_atoi(\"0\") == 0", ft_atoi("0") == 0);
	
	result = ft_itoa(123);
	print_test("ft_itoa(123) == \"123\"", result && strcmp(result, "123") == 0);
	free(result);
	
	result = ft_itoa(-456);
	print_test("ft_itoa(-456) == \"-456\"", result && strcmp(result, "-456") == 0);
	free(result);
	
	result = ft_itoa(0);
	print_test("ft_itoa(0) == \"0\"", result && strcmp(result, "0") == 0);
	free(result);
}

void	test_output_functions(void)
{
	print_header("OUTPUT FUNCTIONS");
	
	printf("Testing ft_putchar_fd('A', 1): ");
	fflush(stdout);
	ft_putchar_fd('A', 1);
	printf("\n");
	
	printf("Testing ft_putstr_fd(\"Hello\", 1): ");
	fflush(stdout);
	ft_putstr_fd("Hello", 1);
	printf("\n");
	
	printf("Testing ft_putendl_fd(\"World\", 1): ");
	fflush(stdout);
	ft_putendl_fd("World", 1);
	
	printf("Testing ft_putnbr_fd(42, 1): ");
	fflush(stdout);
	ft_putnbr_fd(42, 1);
	printf("\n");
	
	printf("Testing ft_putnbr_fd(-123, 1): ");
	fflush(stdout);
	ft_putnbr_fd(-123, 1);
	printf("\n");
}

void	test_list_functions(void)
{
	t_list	*head;
	t_list	*temp;
	t_list	*mapped;

	print_header("BONUS LIST FUNCTIONS");
	
	head = ft_lstnew(ft_strdup("first"));
	print_test("ft_lstnew creates node", head != NULL && strcmp((char *)head->content, "first") == 0);
	
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("zero")));
	print_test("ft_lstadd_front adds to front", strcmp((char *)head->content, "zero") == 0);
	
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("second")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("third")));
	
	print_test("ft_lstsize returns 4", ft_lstsize(head) == 4);
	
	temp = ft_lstlast(head);
	print_test("ft_lstlast returns last node", temp && strcmp((char *)temp->content, "third") == 0);
	
	printf("Current list: ");
	temp = head;
	while (temp)
	{
		printf("%s -> ", (char *)temp->content);
		temp = temp->next;
	}
	printf("NULL\n");
	
	printf("After ft_lstiter (toupper): ");
	ft_lstiter(head, iter_toupper);
	temp = head;
	while (temp)
	{
		printf("%s -> ", (char *)temp->content);
		temp = temp->next;
	}
	printf("NULL\n");
	
	mapped = ft_lstmap(head, duplicate_content, del_content);
	print_test("ft_lstmap creates new list", mapped != NULL);
	print_test("ft_lstmap size matches original", ft_lstsize(mapped) == ft_lstsize(head));
	
	printf("Mapped list: ");
	temp = mapped;
	while (temp)
	{
		printf("%s -> ", (char *)temp->content);
		temp = temp->next;
	}
	printf("NULL\n");
	
	temp = head->next;
	head->next = temp->next;
	ft_lstdelone(temp, del_content);
	print_test("ft_lstdelone removes node", ft_lstsize(head) == 3);
	
	ft_lstclear(&head, del_content);
	print_test("ft_lstclear clears list", head == NULL);
	
	ft_lstclear(&mapped, del_content);
	print_test("ft_lstclear clears mapped list", mapped == NULL);
}

int	main(void)
{
	printf("\n");
	printf("╔════════════════════════════════════════════════════════╗\n");
	printf("║          42-LIBFT COMPREHENSIVE TEST SUITE             ║\n");
	printf("╚════════════════════════════════════════════════════════╝\n");
	
	test_character_checks();
	test_character_conversion();
	test_string_functions();
	test_split();
	test_memory_functions();
	test_conversion_functions();
	test_output_functions();
	test_list_functions();
	
	printf("\n");
	printf("╔════════════════════════════════════════════════════════╗\n");
	printf("║                  TESTS COMPLETED                       ║\n");
	printf("╚════════════════════════════════════════════════════════╝\n");
	printf("\n");
	
	return (0);
}
