// The Stack as a template
template<class T> class Stack {
  struct Link {
    T* data;
    Link* next;
    Link(T* data, Link* next) {
      this.data = data;
      this.next = next;
    }
  } * head;

public:
  Stack(): head(0) {}
  ~Stack() {
    while(head)
      delete pop();
  }

  void push(T* data) {
    head = new Link(data, head);
  }
 
  T* peek() const {
    return head ? head->data : 0;
  }

  T* pop() {
    if (head == 0) {
      return 0;
    }
    T* result = head->data;
    Link* prev = head;
    head = head->next;
    delete prev;

    return result;
  }
};


