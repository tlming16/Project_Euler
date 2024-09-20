fn main() {
    const N: i32 = 1000000;
    fn fifth_power_digit_sum(x: i32) -> i32 {
        let mut ans = 0;
        let mut x = x;
        while x >= 1 {
            let v = x % 10;
            ans += v * v * v * v * v;
            x /= 10;
        }
        return ans;
    }
    let mut ans = 0;
    let ans2: i32 = (2..=N).filter(|&x| x == fifth_power_digit_sum(x)).sum();
    for i in 2..=N {
        if i == fifth_power_digit_sum(i) {
            ans += i;
        }
    }
    println!("{:?},{:?}", ans, ans2);
}
