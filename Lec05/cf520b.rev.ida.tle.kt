import kotlin.math.*

private fun nextLine() = readLine()!!
private fun nextInt() = nextLine().toInt()
private fun nextToks() = nextLine().split(" ")
private fun nextInts() = nextToks().map{it.toInt()}

data class Result(val ans: Int, val ok: Boolean, val newBound: Int)

fun h(x: Int, m: Int): Int {
    if (x >= m) return x - m
    val log2r = log2(m.toDouble() / x)
    return (2 * ceil(log2r) - floor(log2r)).roundToInt()
}

fun ida(x: Int, m: Int, cost: Int, bound: Int): Result {
    val fx = cost + h(x, m)
    if (fx > bound) return Result(-1, false, fx)
    if (x == m) return Result(cost, true, -1)
    val (blueAns, blueFound, blueBound) = ida(x, m+1, cost+1, bound)
    if (m % 2 != 0) return Result(blueAns, blueFound, blueBound)
    val (redAns, redFound, redBound) = ida(x, m / 2, cost+1, bound)
    return when {
        !redFound && !blueFound -> Result(-1, false, minOf(redBound, blueBound))
        !redFound -> Result(blueAns, true, -1)
        !blueFound -> Result(redAns, true, -1)
        else -> Result(minOf(redAns, blueAns), true, -1)
    }
}

fun main() {
    val (n, m) = nextInts()
    var bound = h(n,m)
    while (true) {
        val (ans, found, newBound) = ida(n, m, 0, bound)
        if (found) {
            println(ans)
            break
        }
        bound = newBound
    }
}
