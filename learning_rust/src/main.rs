fn main() {
    let a = 2;

    println!("Fibonacci number : {}", fib(a));
}

fn fib(x: i32) -> i32 {
    if x == 0 {
        return 0;
    }
    if x == 1 {
        return 1;
    }
    fib(x - 1) + fib(x - 2)
}
