#include <iostream>
using namespace std;
void admission_system();
void aggregate(float matric_marks1,float inter_marks1,float ecat_marks1,float matric_marks2,float inter_marks2,float ecat_marks2,string std1,string std2);
main()
{
    system("cls");
    admission_system();
    string std1,std2;
    float matric_marks1,inter_marks1,ecat_marks1,matric_marks2,inter_marks2,ecat_marks2;
    cout<<"Enter the name of first student: ";
    cin>>std1;
    cout<<"Enter matric marks of student 1: ";
    cin>>matric_marks1;
    cout<<"Enter inter marks of student 1: ";
    cin>>inter_marks1;
    cout<<"Enter ecat marks of student 1: ";
    cin>>ecat_marks1;
    cout<<"Enter the name of student 2: ";
    cin>>std2;
    cout<<"Enter matric marks of student 2: ";
    cin>>matric_marks2;
    cout<<"Enter inter marks of student 2: ";
    cin>>inter_marks2;
    cout<<"Enter ecat marks of student 2: ";
    cin>>ecat_marks2;
    aggregate(matric_marks1,inter_marks1,ecat_marks1,matric_marks2,inter_marks2,ecat_marks2,std1,std2);
}




void admission_system()
{                                                                                                                                                                                   
cout<<"  ###  ### ###   ### ##### #     # #######  ####     ###  ##### ##### #     #            #     #####   #####     ###   ### #####  ###   ### #####  ###  ### ### "<<endl;                                                                                                  
cout<<"   #    #   ##    #    #   #     #  #        #  #   #       #     #    #   #            # #     #   #   #   #     ##   ##    #   #     #      #   #   #  ##  #  "<<endl;                                               
cout<<"   #    #   # #   #    #   #     #  #####    #  #   #       #     #     ###            #   #    #    #  #    #    # # # #    #   #     #      #   #   #  # # #  "<<endl;
cout<<"   #    #   #  #  #    #    #   #   #        ####    ###    #     #      #            #######   #    #  #    #    #  #  #    #    ###   ###   #   #   #  #  ##  "<<endl;                                                                          
cout<<"   #    #   #    ##    #     # #    #        #  #       #   #     #      #            #     #   #   #   #   #     #     #    #       #     #  #   #   #  #   #  "<<endl;                                  
cout<<"    ####   ###   ##  #####    #    #######  ###  ##  ###  #####   #      #           ###   ### #####   #####     ###   ###  ###    ###  ###  ####  ###  ### ### "<<endl;
cout<<"                                                                                                                                                                "<<endl;
cout<<"                                                                                                                                                                "<<endl;                                                                            
cout<<"  ###   ###     #     ###    ##     #      ####   ###### ###   ### ######  ###  ### #####       ###  #   #  ### ##### ###### ### ###                            "<<endl;                                                                                                                                       
cout<<"   ##   ##     # #     ##    #     # #    #    #   #      ##   ##   #       ##   #    #        #      # #  #      #    #      ## ##                             "<<endl;   
cout<<"   # # # #    #   #    # #   #    #   #   #        #      # # # #   #       # #  #    #        #       #   #      #    #      # # #                             "<<endl;                                                                                          
cout<<"   #  #  #   #######   #  #  #    #####   #  ###   ####   #  #  #   #####   #  # #    #         ###    #    ###   #    ####   # # #                             "<<endl;                                                                   
cout<<"   #     #   #     #   #    ##    #   #   #    #   #      #     #   #       #   ##    #            #   #       #  #    #      #   #                             "<<endl;                                                            
cout<<"  ###   ### ###   ### ###   ###  ### ###   ####   ###### ###   ### ####### ###  ###   #         ###    #    ###   #   ###### ### ###                            "<<endl;                                                                                         
} 


void aggregate(float matric_marks1,float inter_marks1,float ecat_marks1,float matric_marks2,float inter_marks2,float ecat_marks2,string std1,string std2)
   {
    float aggregate1=(30*(matric_marks1/1100))+(30*(inter_marks1/550))+(40*(ecat_marks1/400));
    float aggregate2=(30*(matric_marks2/1100))+(30*(inter_marks2/550))+(40*(ecat_marks2/400));
    cout<<"aggregate of student 1 is: "<<aggregate1<<endl;
    cout<<"aggregate of student 2 is: "<<aggregate2<<endl;
    
    if (ecat_marks1>ecat_marks2)
    {
     cout<<"roll no. 1 goes to "<<std1<<endl<<"And roll no. 2 goes to "<<std2;
    }
    if(ecat_marks2>ecat_marks1)
    {
     cout<<"roll no. 1 goes to "<<std2<<endl<<"And rool no. 2 goes to "<<std1;
    }
   } 