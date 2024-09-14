fn main() {
    const N: usize = 1999999;
    let mut primes = vec![1; N];
    primes[0] = 0;
    primes[1] = 0;
    primes[2] = 1;
    let mut ans = 0;
    let sn = (N as f64).sqrt() as usize + 1;
    for i in 2..sn {
        if primes[i] == 1 {
            let mut j = i * i;
            while j < N {
                primes[j] = 0;
                j += i;
            }
        }
    }
    for i in 2..N {
        if primes[i] == 1 {
            ans += i;
        }
    }
    println!("{:?}", ans);
}
