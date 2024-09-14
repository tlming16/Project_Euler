fn main() {
    const N: i32 = 4000000;
    let mut sum = 0;
    let mut x = 1;
    let mut y = 2;
    while x < N {
        if x % 2 == 0 {
            sum += x;
        }
        let tmp = x + y;
        x = y;
        y = tmp;
    }
    println!("{:?}", sum);
}
