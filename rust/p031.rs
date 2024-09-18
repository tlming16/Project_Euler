fn main() {
    const TOTAL: usize = 200;
    let mut ways = vec![0; TOTAL + 1];
    ways[0] = 1;
    for c in &[1, 2, 5, 10, 20, 50, 100, 200] {
        for i in 0..ways.len() - *c as usize {
            ways[i + c] += ways[i]
        }
    }
    println!("{:?}", ways.last().expect("value"));
}
