#define __cpp_lib_filesystem 201703

#include "model.h"
#include "project.h"
#include <iostream>

int main(int argc, char *argv[])
{
    try
    {
        if (argc < 2)
        {
            std::cout << "Usage: fes /path/to/project_name.ext" << std::endl;
        }
        else
        {
            project p(argv[1]);
        }
    }
    catch (std::string error)
    {
        std::cout << error << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
