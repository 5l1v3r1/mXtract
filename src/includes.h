#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <regex>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cerrno>
#include <cstring>

extern "C" {
    #include <dirent.h>
    #include <sys/ptrace.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <sys/wait.h>
    #include <pwd.h>
}

