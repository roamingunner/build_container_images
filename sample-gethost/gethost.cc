#include <iostream>
#include <string>

// Provides; popen(), pclose()
#include <cstdio>

int main(int argc, char** argv)
{
     std::puts("\n === display file formant ========\n");
     {
         // Equivalent to: fork() + exec() + pipe()
         FILE* fd = popen("uname -a", "r");

         if(fd == nullptr){
            fprintf(stderr, "Error: failed to run command. Check ERRNO variable. \n");
            return EXIT_FAILURE;
         }

         constexpr size_t BUFFER_SIZE = 500;
         // Buffer initialized with null char
         char buffer[BUFFER_SIZE] = {0};

         while( fgets(buffer, BUFFER_SIZE, fd) != nullptr )
         {
            fprintf(stdout, "%s", buffer);
         }

         pclose(fd);
     }


     return EXIT_SUCCESS;
}
