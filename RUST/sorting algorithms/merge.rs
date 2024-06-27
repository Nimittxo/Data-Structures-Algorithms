fn merge_sort(arr: &mut [i32]) {
    let len = arr.len();
    if len < 2 {
        return;
    }
    let mid = len / 2;
    merge_sort(&mut arr[..mid]);
    merge_sort(&mut arr[mid..]);

    let mut temp: Vec<i32> = arr.to_vec();
    merge(&arr[..mid], &arr[mid..], &mut temp[..]);
    arr.copy_from_slice(&temp);
}

fn merge(left: &[i32], right: &[i32], result: &mut [i32]) {
    let mut i = 0;
    let mut j = 0;
    let mut k = 0;

    while i < left.len() && j < right.len() {
        if left[i] <= right[j] {
            result[k] = left[i];
            i += 1;
        } else {
            result[k] = right[j];
            j += 1;
        }
        k += 1;
    }

    while i < left.len() {
        result[k] = left[i];
        i += 1;
        k += 1;
    }

    while j < right.len() {
        result[k] = right[j];
        j += 1;
        k += 1;
    }
}

fn main() {
    let mut arr = [38, 27, 43, 3, 9, 82, 10];
    merge_sort(&mut arr);
    println!("{:?}", arr);
}
