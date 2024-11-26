void _start() {

    const char mensaje[] = "Hola Mundo\n";

    asm("movl $1, %eax;"
        "movl $1, %ebx;"
        "movl %0, %ecx;"
        "movl $10, %edx;"
        "int $0x80;"
        :
        : "r"(mensaje)
        : "eax", "ebx", "ecx", "edx");

    
    asm("movl $1, %eax;"
        "movl $0, %ebx;"
        "int $0x80;");
}
