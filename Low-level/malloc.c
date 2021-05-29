#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void* malloc(size_t size)
{
    void* p = sbrk(0);          // Returns pointer to current top of the heap
    void* request = sbrk(size); // Increments the heap size by "size" and returns a pointer to the previous top of the heap
    if (request == (void*)-1)
        return NULL; // sbrk failed
    else {
        assert(p == request);
        return p; // Not thread safe
    }
}

int main(void)
{ 
}
