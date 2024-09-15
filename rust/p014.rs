fn main() {
    let collatz_length = |x: i64| -> i32 {
        let mut x = x;
        let mut cnt = 1;
        while x != 1 {
            if x % 2 == 0 {
                x /= 2;
            } else {
                x = x * 3 + 1;
            }
            cnt += 1;
        }
        return cnt;
    };
    let N = 1000000;
    let mut ans = 0;
    let mut index = 0;
    for i in 1..=N {
        let x = collatz_length(i);
        if x > ans {
            ans = x;
            index = i;
        }
    }
    println!("{:?}", index);
}
