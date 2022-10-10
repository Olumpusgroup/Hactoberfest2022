package sample;

public class Queue {
	
	int size = 5;
	int[] queue = new int[size];
	int front,rear;
	
	Queue(){
		rear = -1;
		front = -1;
	}
	//Check queue is full
	boolean isFull() {
		if(front == 0 && rear == size-1) {
			return true;
		}
		else {
			return false;
		}
	}
	
	//Check queue is empty
	boolean isEmpty() {
		if(front == -1) {
			return true;
		}
		return false;
	}
	
	void enqueue(int element) {
		if(isFull()) {
			System.out.println("Queue is full");
		}
		else {
			if(front == -1) {
				front +=1;
			}
			rear+=1;
			queue[rear] = element;
		}
		System.out.println("Element "+element+" added successfuly");
	}
	
	void dequeue() {
		int delElement;
		if(isEmpty()) {
			System.out.println("Queue is empty");
		}
		else {
			delElement = queue[front];
			if(front == rear) {
				front = rear = -1;
			}
			else {
				front +=1;
			}
			System.out.println("Deleted element is "+delElement);
		}
	}
		
		void Display() {
			if(isEmpty()) {
				System.out.println("Queue is empty");
			}
			else {
			System.out.println("Queue elements are");
			for(int i=front;i<=rear;i++) {
				System.out.print(queue[i]+" ");
			}
		}
	}
}
