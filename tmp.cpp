#include<iostream>
using namespace std;

int main(){
    char buf[82][82];
    int size;
    char in_char, out_char;
    bool is_first_case = true;
    while(scanf("%d %c %c", &size, &in_char, &out_char) == 3){
        // 除了第一个测试用例之外的每个测试用例前面都有一个空行
        if(is_first_case){
            is_first_case = false;
        }else{
            printf("\n");
        }
        int num_circle = 1;
        int border_len = 1;
        while(border_len <= size){
            char cur_char = (num_circle % 2 == 1) ? in_char : out_char;
            int x = size / 2;       //  x, y为左上角的那个坐标，先定位到中心，在减去当前边长的一半
            x -= border_len / 2;
            int y = x;
            for(int i = 0; i < border_len; ++i){
                buf[x+i][y] = cur_char;
                buf[x+i][y+border_len-1] = cur_char;
                buf[x][y+i] = cur_char;
                buf[x+border_len-1][y+i] = cur_char;
            }
            ++num_circle;
            border_len += 2;
        }
        if(size != 1){
            buf[0][0] = buf[0][size-1] = buf[size-1][0] = buf[size-1][size-1] = ' ';
        }
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                printf("%c", buf[i][j]);
            }
            printf("\n");
        }
    }
}