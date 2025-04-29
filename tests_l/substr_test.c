#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_normal_case() {
	const char *src = "Hello, World!";
	char *res = ft_substr(src, 7, 5);
	assert(res != NULL);
	assert(strcmp(res, "World") == 0);
	free(res);
}

void test_start_out_of_bounds() {
	const char *src = "Short";
	char *res = ft_substr(src, 100, 10);
	assert(res != NULL);
	assert(strcmp(res, "") == 0);
	free(res);
}

void test_len_exceeds_end() {
	const char *src = "42";
	char *res = ft_substr(src, 1, 100);
	assert(res != NULL);
	assert(strcmp(res, "2") == 0);
	free(res);
}

void test_len_zero() {
	const char *src = "Test";
	char *res = ft_substr(src, 1, 0);
	assert(res != NULL);
	assert(strcmp(res, "") == 0);
	free(res);
}

void test_null_input() {
	char *res = ft_substr(NULL, 0, 10);
	assert(res == NULL);
}

int main() {
	test_normal_case();
	test_start_out_of_bounds();
	test_len_exceeds_end();
	test_len_zero();
	test_null_input();
	printf("All good!\n");
	return 0;
}
