
def solve_n_queens(n):
    result = []

    board = [["."] * n for _ in range(n)]

    columns = set()
    diagonals = set()
    anti_diagonals = set()

    def backtrack(row):
        # All queens have been placed
        if row == n:
            result.append(["".join(line) for line in board])
            return

        for col in range(n):
            diagonal = row - col
            anti_diagonal = row + col

            # Check whether this position is safe
            if col in columns:
                continue

            if diagonal in diagonals:
                continue

            if anti_diagonal in anti_diagonals:
                continue

            # Place queen
            board[row][col] = "Q"

            columns.add(col)
            diagonals.add(diagonal)
            anti_diagonals.add(anti_diagonal)

            # Explore next row
            backtrack(row + 1)

            # Remove queen and restore state
            board[row][col] = "."

            columns.remove(col)
            diagonals.remove(diagonal)
            anti_diagonals.remove(anti_diagonal)

    backtrack(0)
    return result


if __name__ == "__main__":
    n = 4

    solutions = solve_n_queens(n)

    print("Total solutions:", len(solutions))

    for index, solution in enumerate(solutions, start=1):
        print(f"\nSolution {index}:")

        for row in solution:
            print(" ".join(row))
