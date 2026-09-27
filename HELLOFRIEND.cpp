#include <iostream>
using namespace std;
#define y 17
typedef int NumerosInteiros;
typedef double DecimalsNumbers_t;
typedef char OnlyOneCharacter_t;
//using text_t = std::string;
typedef std::string text_t;

namespace data1{
    
    NumerosInteiros age = y;
    DecimalsNumbers_t bugs = 2600.59;
    const OnlyOneCharacter_t USER = 'A';
    text_t name ="Emilio";
 
}
namespace data2{
    
    NumerosInteiros age = y;
    DecimalsNumbers_t bugs = 2500.32;
    const OnlyOneCharacter_t USER = 'Z';
    text_t name ="Ozani";

}

NumerosInteiros main (){
    
    NumerosInteiros age;
    DecimalsNumbers_t bugs;
    OnlyOneCharacter_t USER;
    text_t name;
    

    cout <<'\n'<<'\n'<<'\n'<<data1::USER<<":HELLO, FRIEND!"<<endl;
    std::cout<<data2::USER<<":Hi, Friend"<<std::endl;
    cout <<data1::USER<<":How are you?"<<endl;
    cout<<data2::USER<<":Nice thanks, I hope you're too"<<endl;
    cout<<data1::USER<<":yeah, We're the same"<<endl;
    cout<<data2::USER<<":..."<<endl;
    cout<<data1::USER<<":So, What's your name?"<<endl;
    cout<<data2::USER<<":"<<data2::name<<", and yours?"<<endl;
    cout<<data1::USER<<":I'm "<<data1::name<<", What's your age?"<<endl;
    cout<<data2::USER<<":"<<data2::age<<", and yours?"<<endl;
    cout<<data1::USER<<":Oh Nice!I'm with "<<data1::age<<" years too"<<endl;
    cout<<data2::USER<<":When is your birthday?"<<endl;
    cout<<data1::USER<<":I'll tell you later. How much you got in your pocket?"<<endl;
    cout<<data2::USER<<":What?"<<endl;
    cout<<data1::USER<<":How much money do you have in your pocket?"<<endl;
    cout<<data2::USER<<":"<<data2::bugs<<" bugs, why?"<<endl;
    cout<<data1::USER<<":I got "<<data1::bugs<<", I wanted to go out with you"<<endl;
    cout<<data2::USER<<":We don't need necessarilly of money for we get out, We can just walk around the city and talk a little more"<<endl;
    cout<<data1::USER<<":You're right, oh, it's getting late, see you tomorrow friend"<<endl;
    cout<<data2::USER<<":Yeah, see yah friend"<<endl;

    cout <<'\n'<<'\n'<<'\n';
    return 0;
}
/*std*/// Standard(padrão), namespace padrão que contém todas as entidades de biblioteca padrão do c++, como cout, cin, vector, string, entre outros.
/*::*/// Operador de resolução de escopo, é usado para acessar um membro específico de um namespace ou classe.
/*cout*/
/*cin*///
/*<<*///
/*cout*///
/*>>*/
/**/
/*namespace*///
/*int*/
/*double*/
/*const*/
/*char*/
/*string*/
/*typedef*/
/*using*/