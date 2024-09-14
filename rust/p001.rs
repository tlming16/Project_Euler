fn main() {
    let n = 1000;
    let sum: i32 = (1..n).filter(|x| x % 3 == 0 || x % 5 == 0).sum();
    println!("{:?}", sum);
}
