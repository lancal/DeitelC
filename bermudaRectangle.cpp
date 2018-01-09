//
// Created by Alan  on 09/01/2018.
//

#include <stdio.h>

//my solution

/*void go_south_est(int &  lat, int & lon){

    lat = lat -1 ;

    lon = lon +1 ;

} */

    void go_south_est(int *lat, int *lon ){

    *lat = * lat -1;

    *lon = *lon +1;


}

void skip (char * msg){

    puts(msg + 6);


}



int main (){

    int x = 4;

    int test[] = {23,231,2312};

    printf ("X is: %i\n",x);

    //it a pointer variable for an address that stores an int

    int * addres_of_x = &x;

    //I can change the data in this case x

    * addres_of_x = 99;

    //X values is 99 because was changed

    printf("X lives at %i\n" , *addres_of_x);

    // I can save or store the values of x in another int variable

    int  valued_store = * addres_of_x;


    printf("X lives at %i\n", valued_store);

    printf("X is now: %i\n" ,x);



    int latitude = 32;

    int longitude = -64;

    /*my solution {

    int * latitude_ = & latitude;

    int * longitude_ = & longitude;

    go_south_est(* latitude_ ,* longitude_);  */

    //book solution


    go_south_est( &latitude, &longitude);



    printf("Avast! Now at: [%i,%i]\n",latitude,longitude);

    printf("test in pos 1 is: %i\n", *(test + 2) );




    char * msg_from_anyone = "Don´t call me";

    skip(msg_from_anyone);


    int nums[] = {1, 2, 3};

    printf("nums is at %p\n", nums);

    printf("nums + 1 is at %p\n", nums + 1);



    return 0;

}

