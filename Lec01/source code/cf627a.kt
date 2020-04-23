private fun nextLine() = readLine()!!
private fun nextInt() = nextLine().toInt()
private fun nextToks() = nextLine().split(" ")
private fun nextInts() = nextToks().map{it.toInt()}

fun solve() {
    nextInt()
    val a = nextInts()
    println(if (a.all{ (it-a[0]) % 2 == 0 }) "YES" else "NO")
}

fun main() {
    val nCases = nextInt()
    (1..nCases).forEach{solve()}
}
