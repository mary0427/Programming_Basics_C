//
//  board.c
//  sharkGame
//

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4
// ----- EX. 3 : board ------------
#define N_BOARD                 20

//0 - OK, 1 - destroyed
#define BOARDSTATUS_NOK          1
#define BOARDSTATUS_OK           0

// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------
static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}



int board_initBoard(void)
{
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
    
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------

    //coin allocation _(12�� random����)
	int beforeCoin= N_COINPOS; //�Ҵ� �� ���ΰ���(�ʱⰳ�� 12)
	
	while(beforeCoin> 0) // �Ҵ��� ���� �ִٸ� �ݺ� 
		{
			// ���� ����ĭ random ���� 
			int coinPos = rand() % N_BOARD; //0~19
				
			if (board_coin[coinPos]==0){ 
				int n = (rand() % MAX_COIN) + 1; // ���� ���ΰ���(1~MAX_COIN) �Ҵ�
				if (n > beforeCoin){ // ���� ���κ��� �� ���� �Ҵ� �Ұ� 
                	n = beforeCoin; //n��� ���� ���ΰ�����ŭ �Ҵ� 
				}
				board_coin[coinPos] = n;
				beforeCoin -= n; // �Ҵ�� ���� ������ŭ ����
			}
		}
		
    return N_COINPOS;
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{ 	
	int i;
	shark_position += (rand()%MAX_SHARKSTEP) + 1; //1~MAX_SHARKSTEP(6)ĭ�� �����̵�
	
	for(i=0; i<=shark_position; i++)
	{
		board_status[i] = BOARDSTATUS_NOK; //�̵��ϸ� �ļս�Ŵ 
	}

	return shark_position;
}
// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos) //�ļտ��� 
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;   // coin�� �ֿ��� 0�̵� 
    return coin;
}
// ----- EX. 3 : board ------------