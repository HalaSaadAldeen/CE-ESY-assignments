#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define size 50
struct CircularBuffer
{
    char buffer[size];
    int head;
    int tail;
    int count;
};

void init(struct CircularBuffer *cb)
{
    cb->head = 0;
    cb->tail = 0;
    cb->count = 0;
}

bool isFull(struct CircularBuffer *cb)
{
    return cb->count == size;
}

bool isEmpty(struct CircularBuffer *cb)
{
    return cb->count == 0;
}

int write(struct CircularBuffer *cb, char data)
{
    if (isFull(cb))
    {
        return -1;
    }

    cb->buffer[cb->head] = data;
    cb->head = (cb->head + 1) % size;
    cb->count++;
    return 0;
}

char read(struct CircularBuffer *cb)
{
    if (isEmpty(cb))
    {
        printf("Buffer Underflow!\n");
        return -1;
    }
    char data = cb->buffer[cb->tail];
    cb->tail = (cb->tail + 1) % size;
    cb->count--;
    return data;
}

int main()
{
    struct CircularBuffer cb;
    init(&cb);
    char name[size];
    printf("Enter your name :");
    scanf(" %99[^\n]", name);
    strcat(name, " CE-ESY");
    for (size_t i = 0; i < strlen(name); i++)
    {
        if (write(&cb, name[i]) == -1)
        {
            printf("Buffer Overflow!\n");
            return 0;
        }
    }

    while (!isEmpty(&cb))
    {
        char c = read(&cb);
        printf("%c", c);
    }
    if (isEmpty(&cb))
    {
        printf("\n The buffer is now empty.\n");
    }
    else
    {
        printf("\n The buffer still contains data.\n");
    }
    return 0;
}
