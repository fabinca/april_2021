/* The calloc() function allocates memory for an array of nmemb */
/* elements of size bytes each and returns a pointer to the */
/* allocated memory.  The memory is set to zero.  If nmemb or size */
/* is 0, then calloc() returns either NULL, or a unique pointer */
/* value that can later be successfully passed to free().  If the */
/* multiplication of nmemb and size would result in integer */
/* overflow, then calloc() returns an error.  By contrast, an */
/* integer overflow would not be detected in the following call to */
/* malloc(), with the result that an incorrectly sized block of */
/* memory would be allocated: malloc(nmemb * size); */
/* The malloc() and calloc() functionen return a pointer to the */
/* allocated memory, which is suitably aligned for any built-in */
/* type.  On error, these functions return NULL.  NULL may also be */
/* returned by a successful call to malloc() with a size of zero, or */
/* by a successful call to calloc() with nmemb or size equal to */
/* zero. */
/* ERRORS         top */
/* calloc(), malloc(), realloc(), and reallocarray() can fail with */
/* the following error: */
/* ENOMEM Out of memory.  Possibly, the application hit the */
/* RLIMIT_AS or RLIMIT_DATA limit described in getrlimit(2). */

#include <malloc.h>

void    *calloc(size_t nmemb, size_t size)
{
    void *ptr;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (0);
    if (nmemb * size > 2147483647)
        return ("Error");
    ptr = (void *)malloc(nmemb * size);
    if (ptr == NULL)
        return (ptr);
    while (i < nmemb * size)
    {
        *((char *)ptr + i) = 0;
        i++;
    }
    return (ptr);
}
