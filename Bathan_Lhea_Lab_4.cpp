#include <iostream>
using namespace std;
string karaoke_queue[100];

int front = 0;
int rear = -1;
int max_queue = 10;

bool isFull(){
    if(rear == max_queue -1){
        return true;
        
    }
    
    return false;
}

bool isEmpty(){
    if(rear == -1){
        return true;
    }
    
    return false;
}

string enqueue(string song){
    if(isFull()){
        return "The queue is full. Try again later";
    }
    
    karaoke_queue[++rear] = song;
    
    //for(int i = 0; i <= rear; i++) {
        //for (int j = i + 1; j <= rear; j++){
            //if (karaoke_queue[i] > karaoke_queue[j]){
                //swap(karaoke_queue[i], karaoke_queue[j]);
            //}
            
        //}
    //}
    
    //cout << "\nCurrent Queue with Priorities: \n";
    //for (int i = 0; i <= rear; i++){
        //cout << "Priority " << (i + 1) << ": " << karaoke_queue[i] << endl;
    //}
    return "A new song has been added in the queue with priority";
}

string dequeue(){
    if(isEmpty()){
        return "There is no song in the queue. Try adding first";
    }
    
    string song = karaoke_queue[front];
    
    for(int i = 1; i <= rear; i++){
        karaoke_queue[i-1] = karaoke_queue[i];
    }
    
    rear--;
    return song;
}

int main(){
    
    cout << enqueue ("Mamma Mia") << endl;
    cout << enqueue ("Touch by Touch") << endl;
    cout << enqueue ("Pusong Bato") << endl;
    
    cout << dequeue() << endl;
    cout << dequeue() << endl;
    
    
    
    
    
    return 0;
}