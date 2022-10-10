There is a chess board of size n×m. The rows are numbered from 1 to n, the columns are numbered from 1 to m.

Let's call a cell isolated if a knight placed in that cell can't move to any other cell on the board. Recall that a chess knight moves two cells in one direction and one cell in a perpendicular direction:


Find any isolated cell on the board. If there are no such cells, print any cell on the board.

Input
The first line contains a single integer t (1≤t≤64) — the number of testcases.

The only line of each testcase contains two integers n and m (1≤n,m≤8) — the number of rows and columns of the board.

Output
For each testcase, print two integers — the row and the column of any isolated cell on the board. If there are no such cells, print any cell on the board.