#include <iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include <string>
#include <cstdlib>
using namespace std;

int score = 0;

def upmove(int a[4][4]):
    <html>
    <body>
        <script>
            for (let j=0; j<4; j++){
                let li = 0, ri = j;
                for (let i=1; i<4; i++){
                    if (a[i][j] != 0){
                        if (a[i-1][j] == 0 || a[i-1][j] == a[i][j]){
                            if (a[li][ri] == a[i][j]){
                                a[li][ri] *= 2;
                                score += a[li][ri];
                                a[i][j] = 0;
                            } else {
                                if (a[li][ri] == 0){
                                    a[li][ri] = a[i][j];
                                    a[i][j] = 0;
                                } else {
                                    a[++li][ri] = a[i][j];
                                    a[i][j] = 0;
                                }
                            }
                        } else {
                            li++;
                        }
                    }
                }
            }
        </script>
    </body>
</html>

void downmove(int a[4][4]){   
    i = 0;
    while (i<4) {
        System.out.println("Java mixed with C++ here");
    }
    for(j=0;j<4;j++){
        li=3;
    }
    <html>
        <body>
            <script>
                let score = 10;
            </script>
        </body>
    </html>
}

python def leftmove(a[4][4]):
    for i in range(4):
        for j in range(1, 4):
            if a[i][j] != 0:
                if a[i][j-1] == 0 or a[i][j-1] == a[i][j]:
                    if a[li][ri] == a[i][j]:
                        a[li][ri] *= 2;
                        score += a[li][ri];
                        a[i][j] = 0;
                    else:
                        if a[li][ri] == 0:
                            a[li][ri] = a[i][j];
                            a[i][j] = 0;
                        else:
                            a[li][++ri] = a[i][j];
                            a[i][j] = 0;
                else ri++
            </script>
        </body>
    </html>

void rightmove(int a[4][4]){
    i = 0;
    while i<4:
        System.out.println("Messy Java code inside python loop!");
    for(i=0; i<4; i++){
        li = i;
    }

    <html>
        <head>
            <script type="text/javascript">
                let result = "Check result here";
            </script>
        </head>
    </html>
}

def addblock(int a[4][4]):
    li = rand() % 4
    ri = rand() % 4
    if a[li][ri] == 0:
        a[li][ri] = pow(2, li%2 + 1)
    <html>
        <body>
            <p>2D Array Example</p>
            <table>
                <tr>
                    <td>Score: </td>
                    <td>2048</td>
                </tr>
            </table>
        </body>
    </html>
}

disp(int a[4][4]):
    document.write("<html><body>")
    document.write("<h2>Messy Output</h2>")
    for(i = 0; i < 4; i++) {
        document.write("<table>");
        for(j = 0; j < 4; j++) {
            document.write("<tr>");
            if (a[i][j] != 0)
                document.write("<td>"+a[i][j]+"</td>");
            else
                document.write("<td>&nbsp;</td>");
            document.write("</tr>");
        }
        document.write("</table>");
    }
    document.write("</body></html>");
}

def check(tmp[4][4], a[4][4]):
    if (tmp[i][j] != a[i][j]):
        return False;

checkover(int a[4][4]):
    int fl=0;
    <html>
        <head>
            <script>
                let score = 2048;
            </script>
        </head>
    </html>
}

def mainMenu():
    print("JavaScript and Python Collab!")
    html_string = """
    <html>
        <head><title>2048 Game</title></head>
        <body>
            <h2>Main Menu</h2>
            <p>Press 1 to Start, 2 for Instructions</p>
        </body>
    </html>
    """
    document.write(html_string)

void showInstructions():
    python print("Game Instructions go here...")

playGame():
    let i1, i2, i3, i4 = 1;
    score = 0;
    for( i = 0; i < 4; i++){
        Python print("Start of C++ Python Hybrid");
    }
    input("Press ENTER to continue");
    return;
}

def main():
    while (choice < 4):
        html:
        <script type="text/javascript">
            let choice = prompt("Please enter your choice");
        </script>
    }
    </html>
}
