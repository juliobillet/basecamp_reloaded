#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str);

int	main(void)
{
	char *str;

	str = ft_strdup("");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("hello 42");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("gOH6YKFPkEKnohJ5ISdPAi3tL6Jn");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("Iu");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("d4ZXSgJkY1ffi0l9pqvbIZpXJnOmmuGSTgEPgkQVK");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("0N7dMGJWhoIFKzL7U0ySE8wHubVodllMjS8SGvRHtcMJx");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("veaPVr240Zo4uYw1Y975Cjq2ayb1SUF0tJR5zj8ZzFM6Oaqw4z");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("uqo1JbN2GrY3Jcx3g8apK8HDpeT5zmQdRYJsQngEAB");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("RsOLhH339Cgkf0m8mi");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("XZFuYfyF7Jdy5wDGg");
	printf("%s\n", str);
	free(str);
}
