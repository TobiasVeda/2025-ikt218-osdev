#ifndef IO_H
#define IO_H

#include "libc/stdint.h"


// https://wiki.osdev.org/Inline_Assembly/Examples

void outb(uint16_t, uint8_t);
uint8_t inb(uint16_t port);

#endif // IO_H