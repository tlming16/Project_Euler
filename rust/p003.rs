fn main() {
    const N: i64 = 600851475143;
    let m = (N as f64).sqrt() as i64 + 1;
    let mut x = N;
    let mut last = N;
    for i in 2..m {
        if x % i == 0 {
            last = i;
        }
        while x % i == 0 {
            x /= i;
        }
    }

    println!("{:?}", last);
}
