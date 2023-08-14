#include <iostream>
#include <cctype>

int main(int argc, char **argv) {
	int i(1);
	int j(0);

	if (argc == 1)
	{
		std::cout << "** Plus de pile ! **" << std::endl;
		return 0;
	}
	while (argc-- != 1)
	{
		while (argv[i][j] != '\0')
		{
			std::cout << (char) std::toupper(argv[i][j++]);
		}
		j = 0;
		i++;
	}
	std::cout << std::endl;
	return 0;
}
