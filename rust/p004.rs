fn main() {
    fn is_par(p: &str) -> bool {
        let n = p.len();
        let b = p.as_bytes();
        for i in 0..n / 2 {
            if b[i] != b[n - 1 - i] {
                return false;
            }
        }
        return true;
    }

    let mut ans = 0;
    for i in 100..1000 {
        for j in 1..1000 {
            let x = i * j;
            let v = x.to_string();
            if is_par(&v) {
                ans = ans.max(x);
            }
        }
    }
    println!("{:?}", ans);
}
