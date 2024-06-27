use std::io;
use rand::Rng;

fn sum_arrays() -> i32 {
    let arr = [121, 34, 5345, 88, 90];
    let mut sum = 0;
    for i in 0..5 {
        sum += arr[i];
    }
    sum
}

fn multidimensional_arrays(n: usize, m: usize) {
    let mut arr = vec![vec![0; m]; n]; // Create a 2D vector with dimensions n x m

    // Populate the array with random values for demonstration purposes
    let mut rng = rand::thread_rng();
    for i in 0..n {
        for j in 0..m {
            arr[i][j] = rng.gen_range(0..100);
        }
    }

    // MultiDimensional arrays can be accessed with different methods
    // 1. Using for loop
    for i in 0..n {
        for j in 0..m {
            print!("{} ", arr[i][j]);
        }
        println!();
    }

    // If You want to access a specific Element in the array
    // You can use the following methods
    println!("The Element at 2nd Row and 3rd Column is: {}", arr[1][2]);
    // remember that the index starts from 0
}

fn main() {
    let mut input = String::new();

    println!("Enter the number of rows: ");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n: usize = input.trim().parse().expect("Please enter a valid number");

    input.clear();
    println!("Enter the number of columns: ");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let m: usize = input.trim().parse().expect("Please enter a valid number");

    println!("The sum of Elements of an array is: {}", sum_arrays());

    multidimensional_arrays(n, m);
}
