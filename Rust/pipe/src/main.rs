//! パイプで受けとった標準入力と標準出力の扱いを確かめる

fn main() {
    for i in 0..10 {
        let mut stdin = String::new();
        std::io::stdin()
            .read_line(&mut stdin)
            .expect("標準入力の受け取りに失敗しました");

        println!("{} --------", i);
        println!("{}", stdin);
    }
}
