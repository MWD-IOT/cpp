#include <iostream>
#include <windows.h>

using namespace std;

// 线程的入口点函数
DWORD WINAPI MyThreadFunction(LPVOID lpParam) 
{
    int threadID = reinterpret_cast<uintptr_t>(lpParam);

    // 线程的具体操作
    std::cout << "Thread " << threadID << " is running." << std::endl;

    return 0;
}

int main() 
{
    int num = 5;
    HANDLE hThreads[num];
    for(int i=0; i<num; i++)
    {
        // 创建线程
        HANDLE hThread = CreateThread(
            NULL,                   // 默认的安全性
            0,                      // 默认的栈大小
            MyThreadFunction,       // 线程的入口点函数
            reinterpret_cast<LPVOID>(i+1),                   // 传递给线程入口点函数的参数
            0,                      // 线程立即启动
            NULL                    // 用于存储线程ID的指针
        );
        if (NULL == hThreads[i]) 
        {
            std::cerr << "Failed to create thread." << std::endl;
            return 1;
        }
    }

    // 主线程继续执行其他任务

    // 等待所有线程结束
    WaitForMultipleObjects(num, hThreads, TRUE, INFINITE);

    // 关闭线程句柄
    for (int i = 0; i < num; ++i) 
    {
        CloseHandle(hThreads[i]);
        std::cout<<"Thread["<<i<<"] closed"<<std::endl;
    }

    return 0;
}






