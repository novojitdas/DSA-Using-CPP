# QUEUE

<p align="center">
  <br>
  <a href=""><img src="https://i.imgur.com/TD8Dm49.jpg" alt=""></a>
  <br>
  <strong>Basic Idea About Queue</strong>
  <br>
</p>

## Pseudocode
**isEmpty()**
```
isEmpty()
{
    if(front==-1 && rear ==-1)
        return true
    else 
        return false
}
```

**isFull()**

```
isFull()
{
    if(rear == size(array)-1)
        return true
    else 
        return false
}
```

**enqueue()**

```
enqueue(value)
{
    if(isFull)
    return;

    else if(isEmpty)
    {
        rear = front = 0
    }
    else 
    {
        rear++
    }

    arr[rear] = value

}
```
**dequeue()**
```
dequeue()
{
    int x = 0;

    if(isEmpty)
    return;

    else if(front == rear) // it happend on last value of queue 
    {
        x = arr[front]
        front = rear = -1
    }
    else 
    {
        x = arr[front]
        front++
    }

    return x;
}
```

## Definition 
Queue is a linear data structure which operates in a First IN First OUT or Last IN Last OUT.

 - It is named queue as it behaves like a real-world queue, for example – queue(line) of cars in a single lane, queue of people waiting at food counter etc.
- Queue is an abstract data type with a bounded (predefined) capacity.
- It is a simple data structure that allows adding and removing elements in a particular order.
- The order is FIFO(First IN First OUT) or LILO(Last In Last Out).

## Standard Queue Operations  
**Enqueue()** – Add item to the queue from the REAR.
**Dequeue()** – Remove item from the queue from the FRONT.
**isFull()** – Check if queue is full or not.
**isEmpty()** – Check if queue empty or not.
**count()** – Get number of items in the queue.
## Some types of Queue
Simple Queue
Circular Queue
Priority Queue
## Some Applications of Queue Data Structure
Queue is used when things but have to be processed in First In First Out order. Like –

- CPU scheduling, Disk Scheduling.
- Handling of interrupts in real-time systems. The interrupts are handled in the same order as they arrive, First come first served.
- In real life, Call Center phone systems will use Queues, to hold people calling them in an order, until a service representative is free.
- When data is transferred asynchronously between two processes. Queue is used for synchronization.
