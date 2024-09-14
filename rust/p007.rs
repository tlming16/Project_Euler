fn main() {
    fn is_prime(x: i32) -> bool {
        for j in 2..=(x as f32).sqrt() as i32 {
            if x % j == 0 {
                return false;
            }
        }
        return true;
    }
    let mut x = 3;
    let total = 10001;
    let mut cnt = 1;
    let mut last = x;
    while cnt != total {
        if is_prime(x) {
            cnt += 1;
            last = x;
        }
        x += 2;
    }
    println!("{:?}", last);
}
