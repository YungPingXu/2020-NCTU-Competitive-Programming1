import java.util.ArrayDeque

private fun nextLine() = readLine()!!
private fun nextInt() = nextLine().toInt()
private fun nextToks() = nextLine().split(" ")
private fun nextInts() = nextToks().map{it.toInt()}

data class State(val num: Int, val cost: Int)

fun main() {
    val (n, m) = nextInts()
    val queue = ArrayDeque<State>()
    queue.add(State(n, 0))
    while (true) {
        val (num, cost) = queue.remove()
        if (num == m) {
            println(cost)
            break
        }
        queue.add(State(num * 2, cost + 1))
        if (num > 1) queue.add(State(num - 1, cost + 1)) 
    }
}
