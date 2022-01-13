#include <stdio.h>

int main()
{
    char s[101];
    scanf("%[^\n]", s);

    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"%s\\n\",\"%s\");\n", "%s", s);
    printf("    return 0;\n");
    printf("}\n");
    return 0;
}