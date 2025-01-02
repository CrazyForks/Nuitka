//     Copyright 2024, Kay Hayen, mailto:kay.hayen@gmail.com find license text at end of file

#include <Python.h>

void main(void) {
#if defined(_MSC_VER) && __STDC_VERSION__ >= 201101L
    fprintf(stderr, "Generating offsets header input file.");
#else
    fprintf(stderr, "Run this program compiled with MSVC in C11 mode only.");
    exit(1);
#endif

    // Allow end of output to be recognized.
    puts("OK.");
    exit(0);
}
//     Part of "Nuitka", an optimizing Python compiler that is compatible and
//     integrates with CPython, but also works on its own.
//
//     Licensed under the Apache License, Version 2.0 (the "License");
//     you may not use this file except in compliance with the License.
//     You may obtain a copy of the License at
//
//        http://www.apache.org/licenses/LICENSE-2.0
//
//     Unless required by applicable law or agreed to in writing, software
//     distributed under the License is distributed on an "AS IS" BASIS,
//     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//     See the License for the specific language governing permissions and
//     limitations under the License.