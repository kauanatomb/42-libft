#include <limits.h>
#include "../libft/libft.h"

void demo_put_functions() {
  ft_putchar_fd('A', STDOUT_FILENO);       // A
  ft_putstr_fd("Hello", STDOUT_FILENO);    // Hello
  ft_putendl_fd("World", STDOUT_FILENO);   // World\n
  ft_putnbr_fd(42, STDOUT_FILENO);         // 42
  ft_putendl_fd("", STDOUT_FILENO);        // Nova linha para separar

  ft_putnbr_fd(-12345, STDOUT_FILENO);     // -12345
  ft_putendl_fd("", STDOUT_FILENO);

  ft_putnbr_fd(INT_MAX, STDOUT_FILENO);    // 2147483647
  ft_putendl_fd("", STDOUT_FILENO);

  ft_putnbr_fd(INT_MIN, STDOUT_FILENO);    // -2147483648
  ft_putendl_fd("", STDOUT_FILENO);
}

int main() {
  demo_put_functions();
  return (0);
}