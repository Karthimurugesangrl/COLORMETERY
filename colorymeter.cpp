#include <iostream>
using namespace std;

struct colorymeterystruct{
   // colorymeterystruct returnvariable;
	 char colorimeter_table_identifier;
	 char bit_count;
	 char color_space;
	};
struct colorymeterystruct colorymetery( char MISC1, char MISC0)
{
    struct  colorymeterystruct returnvariable;
    //cout<<MISC1<<endl;
	//cout<<MISC0<<endl;
	 char colorimeter_table_identifier;
	 char bit_count;
	 char color_space;
    colorimeter_table_identifier=(MISC1&64)>>6;
	bit_count=(MISC0&224)>>5;
	color_space=(((MISC1&128)>>3)|((MISC0&30)>>1));
    returnvariable.colorimeter_table_identifier=colorimeter_table_identifier;
    returnvariable.bit_count=bit_count;
    returnvariable.color_space=color_space;
    cout<<colorimeter_table_identifier<<endl;
	cout<<bit_count<<endl;
	cout<<color_space<<endl;
    return returnvariable;
}
int main ()
{
     char MISC1,MISC0;
    struct colorymeterystruct colorspace ;
    colorspace=colorymetery('4','5');
    cout<<colorspace.colorimeter_table_identifier<<endl;
    cout<<colorspace.bit_count<<endl;
    cout<<colorspace.color_space<<endl;
    return 0;
}