#include <iostream>
#include <functional>
#include <iomanip>

#define TEST(lamda)     std::cout << std::setw(30) << #lamda << "\t" << std::setw(5) << sizeof(lamda) << "\t" << std::setw(5) << sizeof(std::bind(lamda)) << std::endl
int main()
{
    class CTest {
    public:
        void Test()
        {
            int s32;
            int s32_2;
            int64_t s64;
            int8_t s8;
            int8_t s8_2;
            int8_t s8_3;
            int8_t s8_4;
            auto no_capture = []() {
            };
            auto int_ret_no_capture = []() {
                return 0;
            };            
            auto all_capture_nouse = [=]() {                
            };
            auto all_ref_capture_nouse = [&]() {
            };
            auto all_this_capture_nouse = [this]() {
            };

            auto all_capture = [=]() {                
                return s32+s32_2+s8;
            };
            auto all_this_capture = [=]() {
                return s32+s32_2+s8+m1+m2+m3;
            }; 
            auto all_this_only_capture = [=]() {
                return m1+m2+m3;
            };
            auto ref_capture = [&]() {
                return s32+s32_2+s8;
            };
            auto ref_this_capture = [=]() {
                return s32+s32_2+s8+m1+m2+m3;
            }; 
            auto ref_this_only_capture = [=]() {
                return m1+m2+m3;
            };

            auto int8_capture = [s8]() {
                return s8;
            }; 
            auto int_capture = [s32]() {
                return s32;
            };             
            auto int64_capture = [s64]() {
                return s64;
            };
            auto int32_64_capture = [s32,s64]() {
                return s32+s64;
            };  
            auto int32x2_64_capture = [s32_2,s32,s64]() {
                return s32+s64+s32_2;
            };     
            auto int8_int32x2_64_capture = [s8,s32_2,s32,s64]() {
                return s32+s64+s32_2+s8;
            };                                    

            auto all_int8_capture = [=]() {
                return s8;
            }; 
            auto all_int_capture = [=]() {
                return s32;
            };             
            auto all_int64_capture = [=]() {
                return s64;
            };
            auto all_int32_64_capture = [=]() {
                return s32+s64;
            };  
            auto all_int32x2_64_capture = [=]() {
                return s32+s64+s32_2;
            };     
            auto all_int8_int32x2_64_capture = [=]() {
                return s32+s64+s32_2+s8;
            };    
            auto ref_int8_capture = [&]() {
                return s8;
            }; 
            auto ref_int_capture = [&]() {
                return s32;
            };             
            auto ref_int64_capture = [&]() {
                return s64;
            };
            auto ref_int32_64_capture = [&]() {
                return s32+s64;
            };  
            auto ref_int32x2_64_capture = [&]() {
                return s32+s64+s32_2;
            };     
            auto ref_int8_int32x2_64_capture = [&]() {
                return s32+s64+s32_2+s8;
            };          

            auto s_8_32_8_capture = [s8,s32,s8_2]() {
                return s32+s8+s8_2;
            };    
            auto s_8_8_32_capture = [s8,s8_2,s32]() {
                return s32+s8+s8_2;
            }; 
            auto s_8_8_8_8_32_capture = [s8,s8_2,s8_3,s8_4,s32]() {
                return s32+s8+s8_2+s8_3+s8_4;
            };    
            auto all_s_8_32_8_capture = [=]() {
                return s32+s8+s8_2;
            };    
            auto all_s_8_8_32_capture = [=]() {
                return s32+s8+s8_2;
            }; 
            auto all_s_8_8_32_8_8_capture = [=]() {
                return s8+s8_2+s32+s8_3+s8_4;
            };                                            
            auto all_s_8_8_8_8_32_capture = [=]() {
                return s8+s8_2+s8_3+s8_4+s32;
            };                
            std::cout << std::setw(30) << "name" << "\t" << std::setw(5) << "lamda\t bind" << std::endl;

            TEST(no_capture);
            TEST(int_ret_no_capture);
            std::cout<<std::endl;
            TEST(int8_capture);
            TEST(int_capture);
            TEST(int64_capture);
            TEST(int32_64_capture);
            TEST(int32x2_64_capture);
            TEST(int8_int32x2_64_capture);
            std::cout<<std::endl;
            TEST(all_int8_capture);
            TEST(all_int_capture);
            TEST(all_int64_capture);
            TEST(all_int32_64_capture);
            TEST(all_int32x2_64_capture);
            TEST(all_int8_int32x2_64_capture);            
            std::cout<<std::endl;
            TEST(ref_int8_capture);
            TEST(ref_int_capture);
            TEST(ref_int64_capture);
            TEST(ref_int32_64_capture);
            TEST(ref_int32x2_64_capture);
            TEST(ref_int8_int32x2_64_capture);   
            std::cout<<std::endl;
            TEST(all_capture_nouse);
            TEST(all_ref_capture_nouse);
            TEST(all_this_capture_nouse);
            std::cout<<std::endl;
            TEST(all_capture);
            TEST(all_this_capture);
            TEST(all_this_only_capture);
            TEST(ref_capture);
            TEST(ref_this_capture);
            TEST(ref_this_only_capture);
            std::cout<<std::endl;
            TEST(s_8_32_8_capture);
            TEST(s_8_8_32_capture);
            TEST(s_8_8_8_8_32_capture);
            std::cout<<std::endl;
            TEST(all_s_8_32_8_capture);
            TEST(all_s_8_8_32_capture);
            TEST(all_s_8_8_32_8_8_capture);
            TEST(all_s_8_8_8_8_32_capture);

      
        }
    private:
        int m1;
        int m2;
        int m3;
    };

    CTest test;
    test.Test();

    return 0;
}