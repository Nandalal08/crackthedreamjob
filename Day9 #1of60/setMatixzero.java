import java.util.Scanner;
//importing scanner clss that is used for reading input from user;
// defining a class called setMatrixzero
public class setMatixzero{
//declaring the main method.
    public static void main(String[] args)
    {
        // this creates a scanner obj that is used to read input from the user console
        Scanner sc = new Scanner(System.in);

        System.out.print("enter the no of row ");
        int row = sc.nextInt();

        System.out.print("enter the no ofcol: ");
        int col = sc.nextInt();

    //creating a 2d matrix.
        int[][] matrix = new int[row][col];

         System.out.println("Enter the matrix elements:");

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
setMatixzero solution = new setMatixzero();
        solution.setZeroes(matrix);

        System.out.println(" Matrix:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }


    }

public void setZeroes(int[][] matrix){
//set the marker index on first row and first col

boolean firstRow = false;
boolean firstCol = false;
int row = matrix.length;
int col = matrix[0].length;

for(int i =0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        if(matrix[i][j] ==0)
        {
            if(i==0) firstRow = true;
            if(j==0) firstCol = true;
            matrix[i][0] =0;
            matrix[0][j] =0;

        }
    }
}

//replacing the inner elements of matrix by comparing it with outer markers

for(int i=1;i<row;i++)
{
    for(int j=1;j<col;j++)
    {
        if(matrix[i][0]==0||matrix[0][j]==0)
        {
                matrix[i][j] =0;
        }
    }
}


if (firstRow) {
            for (int j = 0; j < col; j++)
                matrix[0][j] = 0;
        }

        if (firstCol) {
            for (int i = 0; i < row; i++)
                matrix[i][0] = 0;
        }

}

}