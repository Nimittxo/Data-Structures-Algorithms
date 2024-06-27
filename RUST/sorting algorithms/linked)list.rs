#[derive(Debug)]
struct Node {
    data: i32,
    next: Option<Box<Node>>,
}

#[derive(Debug)]
struct LinkedList {
    head: Option<Box<Node>>,
}

impl LinkedList {
    fn new() -> Self {
        LinkedList { head: None }
    }

    fn append(&mut self, data: i32) {
        let new_node = Box::new(Node { data, next: None });
        match self.head {
            Some(ref mut head) => {
                let mut current = head;
                while let Some(ref mut next) = current.next {
                    current = next;
                }
                current.next = Some(new_node);
            }
            None => {
                self.head = Some(new_node);
            }
        }
    }
}
