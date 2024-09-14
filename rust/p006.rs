fn main() {
    const N: i32 = 100;
    let s: i32 = (1..=N).sum();
    let s2: i32 = (1..=N).map(|x| x * x).sum();

    println!("{:?}", s * s - s2);
}
