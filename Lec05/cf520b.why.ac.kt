import kotlin.math.*

private fun nextLine() = readLine()!!
private fun nextInt() = nextLine().toInt()
private fun nextToks() = nextLine().split(" ")
private fun nextInts() = nextToks().map{it.toInt()}

fun h(x: Int, m: Int): Int {
    if (x >= m) return x - m
    if (m % 2 != 0) return 1 + h(x, m+1)
    return 1 + h(x, m / 2)
}

fun main() {
    val (n, m) = nextInts()
    println(h(n,m))
}
