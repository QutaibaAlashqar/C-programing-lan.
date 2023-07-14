#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592654


/// lab 10 - 1
/*
int function_array(size, array);
int main()
{
    int size;
    scanf("%i", &size);
    int array[size];
    for (int i = 0; i < size; i++){
        scanf("%i", &array[i]);
    }
    int result = function_array(size, array);
    printf("%i", result);
    return 0;
}
int function_array(int size, int array[]){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - 1; j++){
            if (array[j] > array[j + 1]){
                int hold = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hold;
            }
        }
    }
    int result;
    int first = 1;
    for (int i = 0; i < size; i++){
        if (first != array[i]){
            result = first;
            break;
        }
        first++;
    }
    return result;
}
*/








///  lab 10 - 2;

/*
int size1, size2;
int function_chek(int tow_d_array[size1][size2], int size_1, int size_2);
void function_change(int tow_d_array[size1][size2], int size_1, int size_2, int index);
int main(){
    int size_1, size_2, index;
    scanf("%i%i%i", &size_1, &size_2, &index);
    if (size_1 != size_2){
        printf("0");
    }
    else{
        int tow_d_array[size_1][size_2];
        for (int i = 0; i < size_1; i++){
            for (int j = 0; j < size_2; j++){
                scanf("%i", &tow_d_array[i][j]);
            }
        }
        size1 = size_1;
        size2 = size_2;
        int durum = function_chek(tow_d_array, size_1, size_2);
        printf("%i\n", durum);
        function_change(tow_d_array, size_1, size_2, index);
    }
    return 0;
}
int function_chek(int tow_d_array[size1][size2], int size_1, int size_2){
    int generl_result;
    int flag_1 = 1, flag_2 = 1, flag_3 = 1, flag_4 = 1;
    for (int j = 0; j < size_2; j++){
        generl_result += tow_d_array[0][j];
    }
    // row
    for (int i = 0; i < size_1; i++){
        int result_1 = 0;
        for (int j = 0; j < size_2; j++){
            result_1 += tow_d_array[i][j];
        }
        //printf("%i\n", result);
        if (result_1 != generl_result){
            flag_1 = 0;
            break;
        }
    }
    //columun
    for (int i = 0; i < size_1; i++){
        int result_2 = 0;
        for (int j = 0; j < size_2; j++){
            result_2 += tow_d_array[j][i];
        }
        //printf("%i\n", result);
        if (result_2 != generl_result){
            flag_2 = 0;
            break;
        }
    }
    // right trangile
    int result_3 = 0;
    for (int i = 0; i < size_1; i++){
        result_3 += tow_d_array[i][i];
    }
    if (result_3 != generl_result){
        flag_3 = 0;
    }
    // lift trangile
    int result_4 = 0;
    int jj = size_1 - 1;
    for (int i = 0; i < size_1; i++){
        result_4 += tow_d_array[i][jj];
        jj--;
    }
    if (result_4 != generl_result){
        flag_4 = 0;
    }
    if (flag_1 && flag_2 && flag_3 && flag_4 == 1){
        return 1;
    }
    else{
        return 0;
    }
}
void function_change(int tow_d_array[size1][size2], int size_1, int size_2, int index){
    int new_array[size_1][size_2];
    int how_many = size_1 * size_2;
    int how_many_we_have = how_many - index;
    int count_behyend = 0;
    int ii = 0, jj = 0;
    for (int i = size_1 - 1; i > 0; i--){
        for (int j = size_2 - 1; j > 0; j--){
            if (count_behyend == index){
                break;
            }
            if (count_behyend == size_1){
                ii++;
                jj = 0;
            }
            new_array[ii][jj] = tow_d_array[i][j];
            jj++;
            count_behyend++;
        }
    }
    jj--;
    for (int i = 0; i < size_1; i++){
        for (int j = 0; j < size_2; j++){
            if (){

            }
        }
    }
    for (int i = 0; i < size_1; i++){
        for (int j = 0; j < size_2; j++){
            printf("%i ", new_array[i][j]);
        }
        printf("\n");
    }
    printf("%i   %i   %i", ii, jj, count_behyend);
}
*/






/// pointer char

/*
void convert(char *ptrs);
int main(){
    char string[] = "'qutaiba raouf ahmed al-ashqar.'";
    printf("%s\n", string);
    convert(string);
    printf("%s", string);
    return 0;
}
void convert(char *ptrs){
    while (*ptrs != '\0'){
        *ptrs = toupper(*ptrs);
        ++ptrs;                    /// we cant use * here;
    }
}
*/








/// pointer char

/*
void Print_String(char *sPtr);
int main(){
    char string[] = "'qutaiba raouf ahmed al-ashqar.'";
    Print_String(string);
    return 0;
}
void Print_String(char *sPtr){

    //while (*sPtr != '\0'){
    //    printf("%c", *sPtr);
    //    sptr++;
    //}

    for (; *sPtr != '\0'; ++sPtr){
        printf("%c", *sPtr);
    }
}
*/









/// pointer bubble sort // pek degil

/*
void bubbel_sort(int *arrayPtr, int size);
int main(){
    int size;
    scanf("%i", &size);
    int array[size];
    for (int i = 0; i < size; i++){
        scanf("%i", &array[i]);
    }
    bubbel_sort(array, size);
    for (int i = 0; i < size; i++){
        printf("%i ", array[i]);
    }
    return 0;
}
void bubbel_sort(int *arrayPtr, int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1; j++){
            if (arrayPtr[j] > arrayPtr[j + 1]){
                int hold = arrayPtr[j];
                arrayPtr[j] = arrayPtr[j + 1];
                arrayPtr[j + 1] = hold;
            }
        }
    }
}
*/







/// pointer bubble sort
/*
void swap(int *first, int *secend);
void bubbel_sort(int *arrayPtr, int size);
int main(){
    int size;
    scanf("%i", &size);
    int array[size];
    for (int i = 0; i < size; i++){
        scanf("%i", &array[i]);
    }
    bubbel_sort(array, size);
    for (int i = 0; i < size; i++){
        printf("%i ", array[i]);
    }
    return 0;
}
void bubbel_sort(int *arrayPtr, int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1; j++){
            if (arrayPtr[j] > arrayPtr[j + 1]){
                swap(&arrayPtr[j], &arrayPtr[j + 1]);
            }
        }
    }
}
void swap(int *first, int *secend){
    int hold = *first;
    *first = *secend;
    *secend = hold;
}
*/








///

/*
int main(){
    int size;
    scanf("%i", &size);
    float array[size];
    printf("%i\n", sizeof(array));
    printf("%i\n", getSize(array));
    return 0;
}
void getSize(float *arrayPtr){
    return sizeof(*arrayPtr);
}
*/











///   SORT 222
/*
void swap_2(int *first, int *secend);
void swap_1(int *first, int *secend);
int function_2(int size, int *arrayPtr);
int function_1(int size, int *arrayPtr);
int main(){
    int size;
    scanf("%i", &size);
    int array[size];
    for (int i = 0; i < size; i++){
        scanf("%i", &array[i]);
    }
    int index;
    scanf("%i", &index);
    if (index == 1){
        function_1(size, array);
    }
    else if (index == 2){
        function_2(size, array);
    }
    else{
        printf("NOTHING");
    }
    return 0;
}
int function_1(int size, int *arrayPtr){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j <  size - 1; j++){
            if (arrayPtr[j] > arrayPtr[j + 1]){
                swap_1(&arrayPtr[j], &arrayPtr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++){
        printf("%i  ", arrayPtr[i]);
    }
}
void swap_1(int *first, int *secend){
    int hold = *first;
    *first = *secend;
    *secend = hold;
}
int function_2(int size, int *arrayPtr){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j <  size - 1; j++){
            if (arrayPtr[j] < arrayPtr[j + 1]){
                swap_2(&arrayPtr[j], &arrayPtr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++){
        printf("%i  ", arrayPtr[i]);
    }
}
void swap_2(int *first, int *secend){
    int hold = *first;
    *first = *secend;
    *secend = hold;
}
*/







///   lab 10 - 2
/*
int size;
void function(int array[size][size], int index);
int main(){
    int size_1, size_2, index;
    scanf("%i%i%i", &size_1, &size_2, &index);
    int array[size_1][size_2];
    for (int i = 0; i < size_1; i++){
        for (int j = 0; j < size_2; j++){
            scanf("%i", &array[i][j]);
        }
    }
    size = size_1;
    function(array, index);
    return 0;
}
void function(int array[size][size], int index){
    int new_array[size][size];
    int fark = (size * size) - index;
    int count = 0;
    int ii = 0, jj = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (fark <= count){
                new_array[ii][jj] = array[i][j];
                count++;
                jj++;
                if (jj % size == 0 && jj != 0){
                    jj = 0;
                    ii++;
                }
            }
            else{
                count++;
            }
        }
    }
    count = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (fark <= count){
                count++;
                continue;
            }
            else{
                count++;
                new_array[ii][jj] = array[i][j];
                jj++;
                if (jj % size == 0){
                    jj = 0;
                    ii++;
                }
            }
        }
    }
    printf("-------------------------------\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%i ", new_array[i][j]);
        }
        printf("\n");
    }
}
*/





///
/*
int Add(int a, int b){
    return (a + b);
}
int Sub(int a, int b){
    return (a - b);
}
int Calculat(int a, int b, int *Calculate(int x, int y)){
    return (*Calculate)(a, b);
}
int main(){
    int a = 5;
    int b = 7;
    printf("%i\n", Calculat(a, b, Add));
    printf("%i\n", Calculat(a, b, Sub));
    return 0;
}
*/







///    TEMEL ARRAY_1
/*
void function_0(int array_1[], int size_1, int array_2[], int size_2);
int main(){
    int size_1, size_2;
    scanf("%i", &size_1);
    int array_1[size_1];
    for (int i = 0; i < size_1; i++){
        scanf("%i", &array_1[i]);
    }
    scanf("%i", &size_2);
    int array_2[size_2];
    for (int i = 0; i < size_2; i++){
        scanf("%i", &array_2[i]);
    }
    function_0(array_1, size_1, array_2, size_2);
    return 0;
}
void function_0(int array_1[], int size_1, int array_2[], int size_2){
    int count = 0;
    for (int i = 0; i < size_2; i++){
        for (int j = 0; j < size_1; j++){
            if (array_2[i] == array_1[j]){
                count++;
                break;
            }
        }
    }
    if (count == size_2){
        printf("1");
    }
    else{
        printf("0");
    }
}
*/






/// ARRAY TEMEL_3
/*
void function_0(char string_3[], char string_2[], int);
int main(){
    int size_1, size_2;
    scanf("%i%i", &size_1, &size_2);
    char string_1[size_1][size_2];
    for (int i = 0; i < size_1; i++){
            scanf("%s", string_1[i]);
    }
    int ii = 0;
    char string_2[size_2];
    char string_3[size_2];
    for (int i = 0; i < size_1; i++){
        ii = 0;
        char string_2[size_2];
        char string_3[size_2];
        for (int j = 0; j < size_2; j++){
            string_2[ii] = string_1[i][j];
            string_3[ii] = string_1[i][j];
            ii++;
        }
        function_0(string_3, string_2, size_2);
    }
    return 0;
}
void function_0(char string_3[], char string_2[],int size){
    int count = 0, count_2 = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (string_3[i] == string_2[j]){
                if (count == 1){
                    count++;
                    break;
                }
                else{
                    count++;
                }
            }
        }
        if (count > 1){
            count_2 = count;
            count = 0;
            break;
        }
        else{
            count = 0;
        }
    }
    if (count > 1){
        count = 0;
    }
    else{
        for (int i = 0; i < size; i++){
            printf("%c", string_2[i]);
        }
        printf("\n");
        count = 0;
    }
}
*/








/// temel _ 4
/*
void function_1(int size, int array[]);
void function_2(int size, int array[]);
int main(){
    int size;
    scanf("%i", &size);
    int array[size];
    for (int i = 0; i < size; i++){
        scanf("%i", &array[i]);
    }
    function_1(size, array);
    function_2(size, array);
    return 0;
}
void function_1(int size, int array[]){
    int max = 0;
    int positin;
    for (int i = 0; i <size; i++){
        if (max < array[i]){
            max = array[i];
            positin = i;
        }
    }
    array[positin] = 0;
    int max_2 = 0;
    for (int i = 0; i <size; i++){
        if (max_2 < array[i]){
            max_2 = array[i];
        }
    }
    array[positin] = max;
    printf("%i\n", (max + max_2));
}
void function_2(int size, int array[]){
    int min = 99999;
    int positin;
    for (int i = 0; i <size; i++){
        if (min > array[i]){
            min = array[i];
            positin = i;
        }
    }
    array[positin] = 99999;
    int min_2 = 99999;
    for (int i = 0; i <size; i++){
        if (min_2 > array[i]){
            min_2 = array[i];
        }
    }
    printf("%i", (min + min_2));
}
*/












///     lab 6-1
/*
double fun_yi(double xi);
double fun_yr(double xr);
double fun_xi(double a, double b);
double fun_xr(double a, double b, double xi);
int out = 0;
double sep = 0.0001;
int main(){
    double a, b, xi, xr, yi, yr;
    scanf("%lf%lf", &a, &b);
    while (out != 1){
        xi = fun_xi(a, b);
        xr = fun_xr(a, b, xi);
        yi = fun_yi(xi);
        yr = fun_yr(xr);
        printf("\n%.6lf\n", xi);
        printf("%.6lf\n", xr);
        printf("%.6lf\n", yi);
        printf("%fcos : \n", cos(xi));
        printf("%.6lf\n", yr);
        out = 1;
    }
    return 0;
}
double fun_xi(double a, double b){
    double xi = (a + 0.5 * ((b - a) - sep));
    return xi;
}
double fun_xr(double a, double b, double xi){
    double xr = (a + 0.5 * ((b - a) + sep));
    return xr;
}
double fun_yi(double xi){
    double y = cos(xi);
    double yi = (xi * (cos(xi)));
    return yi;
}
double fun_yr(double xr){
    double yr = (xr * (cos(xr)));
    return yr;
}
*/








/// ara 1
/*
void fun_3(double money, int years);
void fun_2(double money, int years);
void fun_1(double money, int years);
int main(){
    double money;
    int years, way;
    scanf("%lf%i%i", &money, &years, &way);
    if (way == 1){
        fun_1(money, years);
    }
    else if (way == 2){
        fun_2(money, years);
    }
    else if (way ==3){
        fun_3(money, years);
    }
    return 0;
}
void fun_1(double money, int years){
    int count = 1;
    double change = money;
    for (int i = years; i > 0; i--){
        double kaybi = 0.0;
        kaybi = (change / i);
        change -= kaybi;
        printf("%2d yil sonunda ", count);
        printf("deger kaybi : %7.2f ", kaybi);
        printf("Kalan para : %8.2f\n", change);
        count++;
    }
}
void fun_2(double money, int years){
    int count = 1;
    double pes = 2.0/years;
    double change = money;
    for (int i = 0; i < years; i++){
        double kaybi = 0.0;
        kaybi = (change * pes);
        change -= kaybi;
        printf("%2d yil sonunda ", count);
        printf("deger kaybi : %7.2f ", kaybi);
        printf("Kalan para : %8.2f\n", change);
        count++;
    }
}
void fun_3(double money, int years){
    int toplam = 0;
    for (int i = 1 ; i < years + 1; i++){
        toplam += i;
    }
    int count = 1;
    double change = money;
    for (int i = years; i > 0; i--){
        double kaybi = 0.0;
        double pes = i / (double)toplam ;
        kaybi = (money * pes);
        change -= kaybi;
        printf("%2d yil sonunda ", count);
        printf("deger kaybi : %7.2f ", kaybi);
        printf("Kalan para : %8.2f\n", change);
        count++;
    }
}
*/









/// ara 3
/*
int numberofdays(int, int, int);
int main()
{
    int sallery, exsit, first;
    scanf("%i%i%i", &sallery, &exsit ,&first);
    int result = numberofdays(sallery, exsit, first);
    printf("%i", result);
    return 0;
}
int numberofdays(int price, int existing, int start){
    int pacc = price - existing;
    int count = 0, count2=0, count3=1, main_count=0;
    int res=0, res2=0, number=start;
    while (count != -1){
        while (count2<7){
            res2 += number;
            number+=1;
            count2++;
            main_count++;
            if (res2>=pacc){
                count=-1;
                break;
            }
        }
        number=0;
        number = count3 + start;
        count2=0;
        count3++;
        //res+=res2;
        if (res2>=pacc){
            count=-1;
            break;
        }
    }
    return main_count;
}
*/





///   kab 7 - 3, pratik
/*
int main(){
    char string[50];
    fgets(string, sizeof(string), stdin);
    int size = strlen(string) - 1;
    int numbers[size];
    for (int i = 0; i < size; i++){
        scanf("%i", &numbers[i]);
    }
    for (int i = 0; i < size; i++){
        if (numbers[i] == 0){
            printf("%c", string[i]);
        }
        else if (numbers[i] == -1){
            printf("%c", (string[i] - 1));
        }
        else if (numbers[i] == 1){
            printf("%c", (string[i] + 1));
        }
    }
    return 0;
}
*/





///  lab 8 - 2
/*
int size;
int fun(int array[size][size]);
int main(){
    int array[10][10];
    int index;
    size = 10;
    scanf("%i", &index);
    for (int i = 0; i < size; i++){
        for (int i = 0; i < size; i++){
            array[i][j] = index;
        }
    }
    fun(array);
    return 0;
}
int fun(int array[size][size]){
}
*/










///   lab 9 - 1
/*
int function0(int mat[10][10], int index);
int main(){
    int mat_2d[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            scanf("%i", &mat_2d[i][j]);
        }
    }
    int index;
    scanf("%i", &index);
    printf("%i ", index);
    function0(mat_2d, index);
    return 0;
}
int function0(int mat[10][10], int index){
    int varmis[10];
    int count = 1;
    varmis[0] = index - 1;
    int position = index - 1;
    for (int i = 1; i < 10; i++){
        int min = 99999;
        int pos2;
        int flag = 1;
        for (int w = 0; w < 10; w++){
            for (int h = 0; h < count; h++){
                if (w == varmis[h]){
                    flag = 0;
                    break;
                }
            }
            if (min > mat[position][w] && mat[position][w] != 0 && flag == 1){
                min = mat[position][w];
                pos2 = w;
            }
            flag = 1;
        }
        varmis[count] = pos2;
        printf("%i ",pos2 + 1);
        count++;
        position = pos2;
    }
}
*/








/*
int main(){
    int size = 80, count = 0;
    char index_string;
    char string[size];
    while (((index_string = getchar()) != '\n') && (count < size)){
        string[count++] = index_string;
    }
    string[count] = '\0';
    for (int i = 0; i < count; i++){
        printf("%c ", string[i]);
    }
    return 0;
}
*/








     ///   lb 10 - 8
/*
int size;
int function_chek(int array[size][size], int size_1, int size_2);
void function(int array[size][size], int index);
int main(){
    int size_1, size_2, index;
    int array[size_1][size_2];
    scanf("%i%i%i", &size_1, &size_2, &index);
    if (size_1 != size_2){
        printf("0");
    }
    else{
        for (int i = 0; i < size_1; i++){
            for (int j = 0; j < size_2; j++){
                scanf("%i", &array[i][j]);
            }
        }
    }
    size = size_1;
    int durum = function_chek(array, size_1, size_2);
    printf("%i\n", durum);
    function(array, index);
    return 0;
}
void function(int array[size][size], int index){
    int new_array[size][size];
    int fark = (size * size) - index;
    int count = 0;
    int ii = 0, jj = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (fark <= count){
                new_array[ii][jj] = array[i][j];
                count++;
                jj++;
                if (jj % size == 0 && jj != 0){
                    jj = 0;
                    ii++;
                }
            }
            else{
                count++;
            }
        }
    }
    count = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (fark <= count){
                count++;
                continue;
            }
            else{
                count++;
                new_array[ii][jj] = array[i][j];
                jj++;
                if (jj % size == 0){
                    jj = 0;
                    ii++;
                }
            }
        }
    }
    printf("-------------------------------\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%i ", new_array[i][j]);
        }
        printf("\n");
    }
}
int function_chek(int array[size][size], int size_1, int size_2){
    int generl_result;
    int flag_1 = 1, flag_2 = 1, flag_3 = 1, flag_4 = 1;
    for (int j = 0; j < size_2; j++){
        generl_result += array[0][j];
    }
    // row
    for (int i = 0; i < size_1; i++){
        int result_1 = 0;
        for (int j = 0; j < size_2; j++){
            result_1 += array[i][j];
        }
        //printf("%i\n", result);
        if (result_1 != generl_result){
            flag_1 = 0;
            break;
        }
    }
    //columun
    for (int i = 0; i < size_1; i++){
        int result_2 = 0;
        for (int j = 0; j < size_2; j++){
            result_2 += array[j][i];
        }
        //printf("%i\n", result);
        if (result_2 != generl_result){
            flag_2 = 0;
            break;
        }
    }
    // right trangile
    int result_3 = 0;
    for (int i = 0; i < size_1; i++){
        result_3 += array[i][i];
    }
    if (result_3 != generl_result){
        flag_3 = 0;
    }
    // lift trangile
    int result_4 = 0;
    int jj = size_1 - 1;
    for (int i = 0; i < size_1; i++){
        result_4 += array[i][jj];
        jj--;
    }
    if (result_4 != generl_result){
        flag_4 = 0;
    }
    if (flag_1 && flag_2 && flag_3 && flag_4 == 1){
        return 1;
    }
    else{
        return 0;
    }
}
*/








/*
float mirror(int n, float x);
int main(){
    int n ;
    float x, result;
    scanf("%i%f", &n, &x);
    result = mirror(n, x);
    printf("%2.2lf\n", result);
    return 0;
}
float mirror(int n, float x){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return x;
    }
    else{
        float a = (((float)((2 * n) - 1) / n) * x);
        float b = ((float)(n - 1) / n);
        return a * mirror(n - 1, x) - b * mirror(n - 2, x);
    }
}
*/




float fun(float n, float x);
int main(){
    float n;
    float x;
    scanf("%f%f", &n, &x);
    float res = fun(n, x);
    printf("%0.2f", res);
    return 0;
}
float fun(float n, float x){
    if (n == 0){
        return 1;
    }
    else if (n == 1){
        return x;
    }
    else{
        float one = ((((2 * n) - 1) / n) * x);
        float tow = (((n - 1) / n));
        return ((one * fun(n - 1, x)) - (tow * fun(n - 2, x)));
    }
}
