package sample;

public class Cqueue {
	int[] arr;
    int front;
    int rear;

    Cqueue() {
        arr = new int[10];
        front = -1;
        rear = -1;
        }

    Cqueue(int sz) {
        arr = new int[sz];
        front = -1;
        rear = -1;
        }

    public void print() {
        System.out.println("Queue: ");
        for (int i = front; i <= rear; i++) {
            System.out.print(arr[i] + " ");

        }
        System.out.println();
    }

    public void enqueue(int x) {
        if ((front == 0 && rear == arr.length - 1) || front == rear + 1) {
            System.out.print("Can't enqueue");
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % arr.length;
        arr[rear] = x;
    }

    public int getFront() {
        return arr[front];
    }

    public int dequeue() {
        if (front == -1) {
            System.out.println("Can't dequeue");
            return -1;
        }
        int x = arr[front];
        front = (front + 1) % arr.length;
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        return x;
    }

    public boolean equals(Cqueue q2) {
        if (front != q2.front && rear != q2.rear) {
            return false;
        }
        for (int i = front; i <= rear; i++) {
            if (arr[i] != q2.arr[i]) {
                return false;
            }
        }
        return true;
    }
}	
