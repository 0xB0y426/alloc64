# alloc64

This is a simple bump-pointer allocator using a fixed 1MB buffer.
cflloc(size) allocates memory by moving a pointer forward, aligned to 8 bytes.
frdom() resets the allocator, freeing all memory at once.
It does not support freeing individual blocks or reallocating memory.

Perfect for fast, temporary allocations where all memory is released together.
