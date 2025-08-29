#include <iostream> // Required for input/output operations (std::cout)
#include <cstdlib>  // Required for atoi (converts string to integer)

int main(int argc, char *argv[]) {
    // argc is the argument count, including the program name itself.
    // argv is an array of strings (char pointers), where each element
    // is a command-line argument.

    // Check if exactly one argument (besides the program name) is provided.
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <integer>" << std::endl;
        return 1; // Indicate an error
    }

    // Convert the first command-line argument (argv[1]) to an integer.
    // argv[0] is the program's name.
    int num = std::atoi(argv[1]);

    // Print the received integer.
    std::cout << "The integer received is: " << num << std::endl;

    return 0; // Indicate successful execution
}