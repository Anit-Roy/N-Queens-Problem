#include <stdio.h>
#include <malloc.h>

struct queen
{
    int id;
    int column;
};

struct stackrecord
{
    struct queen *qlist;
    int top;
} history;

int **graph;
int m;
int num_of_solutions;
void getinput();
void backtrackpositioning();
char givenpostionworks(int, int);

int main()
{
    int i, j, k;
    getinput();
    backtrackpositioning();
    printf("\nTotal number of valid solutions=%d\n\n", num_of_solutions);
    system("pause");
    return 0;
}

void backtrackpositioning()
{
    int i;
    history.top = 0;
    history.qlist[history.top].id = 0;
    history.qlist[history.top].column = 0;
    do
    {
        history.qlist[history.top].column++;
        if (history.qlist[history.top].column <= m)
        {
            if (givenpostionworks(history.qlist[history.top].column, history.qlist[history.top].id))
            {
                if (history.top < m - 1)
                {
                    history.top++;
                    history.qlist[history.top].id = history.qlist[history.top - 1].id + 1;
                    history.qlist[history.top].column = 0;
                }
                else
                {
                    for (printf("\nvalid solution= "), num_of_solutions++, i = 0; i < m; i++)
                        printf("%d ", history.qlist[i].column);
                }
            }
        }
        else
            history.top--;
    } while (history.top >= 0);
}

char givenpostionworks(int curr_column, int curr_queen)
{
    int i;
    for (i = 0; i < curr_queen; i++)
    {
        if (history.qlist[i].column == curr_column || curr_column - history.qlist[i].column == curr_queen - i || curr_column - history.qlist[i].column == i - curr_queen)
        {
            return 0;
        }
    }
    return 1;
}

void getinput()
{
    printf("Enter the number of queens: ");
    scanf("%d", &m);
    history.qlist = (struct queen *)malloc(m * sizeof(struct queen));
}
