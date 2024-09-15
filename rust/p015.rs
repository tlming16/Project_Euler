fn main() {
    let n: i64 = 40;
    let m: i64 = 20;
    let mut ans: i64 = 1;
    for i in 1..=m {
        ans *= n + 1 - i;
        ans /= i;
    }
    println!("{:?}", ans);
}
