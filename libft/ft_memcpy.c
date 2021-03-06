/* DESCRIPTION         */
/* The memcpy() function copies n bytes from memory area src to */
/* memory area dest.  The memory areas must not overlap.  Use */
/* memmove(3) if the memory areas do overlap. */
/* RETURN VALUE         */
/* The memcpy() function returns a pointer to dest. */
/* Failure to observe the requirement that the memory areas do not */
/* overlap has been the source of significant bugs.  (POSIX and the */
/* C standards are explicit that employing memcpy() with overlapping */
/* areas produces undefined behavior.) */
/* Note that the purpose of restrict is to show only syntax. It doesn't */
/* change anything in output (or logic). It is just a way for programmer */
/* to tell compiler about an optimization  */

#include <unistd.h>

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        *((char *)dest + i) = *((char *)src + i);
        i++;
    }
    return (dest);
}
