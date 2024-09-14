fn main() {
    let n = 1000;
    let mut ans = 0;
    for i in 1..N / 2 {
        for j in i..N / 2 {
            let c = N - i - j;
            if i * i + j * j == c * c {
                ans = ans.max(i * j * c);
            }
        }
    }
    println!("{:?}", ans);
}
