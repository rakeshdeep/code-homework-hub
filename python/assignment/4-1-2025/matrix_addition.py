# 16.	Write a program that will add two square matrices. The dimension and elements of the matrices will be entered by the user.
def print_matrix(matrix):
    for row in matrix:
        for element in row:
            print(f"{element:4}", end=" ")  # :4 adds padding for alignment
        print()  # new line after each row

def add_matrices(matrix1, matrix2):
    if len(matrix1) != len(matrix2) or len(matrix1[0]) != len(matrix2[0]):
        return "Matrices are not of the same dimension"
    result = []
    for i in range(len(matrix1)):
        row = []
        for j in range(len(matrix1[0])):
            row.append(matrix1[i][j] + matrix2[i][j])
        result.append(row)
    return result

def main():
    matrix1 = []
    matrix2 = []
    rows = int(input("Enter number of rows: "))
    cols = int(input("Enter number of columns: "))
    
    print("\nEnter elements of matrix1:")
    for i in range(rows):
        row = []
        for j in range(cols):
            row.append(int(input(f"Enter element {i+1}{j+1}: ")))
        matrix1.append(row)
    
    print("\nEnter elements of matrix2:")
    for i in range(rows):
        row = []
        for j in range(cols):
            row.append(int(input(f"Enter element {i+1}{j+1}: ")))
        matrix2.append(row)
    
    print("\nMatrix1:")
    print_matrix(matrix1)
    print("\nMatrix2:")
    print_matrix(matrix2)
    
    result = add_matrices(matrix1, matrix2)
    if isinstance(result, str):
        print(result)
    else:
        print("\nResult:")
        print_matrix(result)

if __name__ == "__main__":
    main()