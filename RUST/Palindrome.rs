struct Solution;

impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        if x < 0 || (x != 0 && x % 10 == 0) {
            return false;
        }
        let temp = x; // Store the original number
        let mut reversed: i64 = 0;
        let mut x = x; // Mutable copy of the input number
        while x > 0 {
            reversed = reversed * 10 + (x % 10) as i64;
            x /= 10;
        }
        temp == reversed as i32
    }
}

fn main() {
    let result = Solution::is_palindrome(121);
    println!("{}", result); 

    let result = Solution::is_palindrome(-121);
    println!("{}", result); 

    let result = Solution::is_palindrome(10);
    println!("{}", result); 
}
