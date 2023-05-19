#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    DIR *d;
    struct dirent *dir;

    if (argc < 2) {
        printf("Please specify a directory.\n");
        return 1;
    }

    d = opendir(argv[1]);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    } else {
        printf("Cannot open directory '%s'\n", argv[1]);
        return 1;
    }

    return 0;
}
