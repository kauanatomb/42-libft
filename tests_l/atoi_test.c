#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <limits.h>
#include "../libft/libft.h"

int main(void)
{
	char *tests[] = { "42", "   42", "+42", "-42", "0", "0000123",
		"42abc", "  -0012a42", " +0000012345",
		"2147483647", "2147483648", "-2147483648", "-2147483649",
		"", "     ", "   +    1", "+-12", "--12", "++12", "-+12",
		"000000000000000000000000000000000001", "\t\n\v\f\r 42", "---abc12" };
	unsigned long i = 0;
	while (i < sizeof(tests)/sizeof(tests[0])) 
	{
		printf("Input: '%s'\n", tests[i]);
		int my   = ft_atoi(tests[i]);
    int stdv = atoi(tests[i]);
    assert(my == stdv);
		i++;
	}
  printf("All tests passed\n");
	return (0);
}